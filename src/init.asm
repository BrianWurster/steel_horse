;###############################################################################
;
;    µCity - City building game for Game Boy Color.
;    Copyright (C) 2017 Antonio Niño Díaz (AntonioND/SkyLyrac)
;
;    This program is free software: you can redistribute it and/or modify
;    it under the terms of the GNU General Public License as published by
;    the Free Software Foundation, either version 3 of the License, or
;    (at your option) any later version.
;
;    This program is distributed in the hope that it will be useful,
;    but WITHOUT ANY WARRANTY; without even the implied warranty of
;    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;    GNU General Public License for more details.
;
;    You should have received a copy of the GNU General Public License
;    along with this program.  If not, see <http://www.gnu.org/licenses/>.
;
;    Contact: antonio_nd@outlook.com
;
;###############################################################################

    INCLUDE "hardware.inc"
    INCLUDE "engine.inc"

; Note: Don't include charmaps in this file or the game name in the ROM header
; will be corrupted!

;###############################################################################
;#                                                                             #
;#                               RESTART VECTORS                               #
;#                                                                             #
;###############################################################################

    SECTION "RST_00",ROM0[$0000]
    ret ; Reserved for the interrupt handler. If an interrupt vector is $0000
    ; it jumps here when it's triggered and returns.

    SECTION "RST_08",ROM0[$0008]
    jp      hl ; Reserved for interrupt handler and CALL_HL macro.

    SECTION "RST_10",ROM0[$0010]
    ret

    SECTION "RST_18",ROM0[$0018]
    ret

    SECTION "RST_20",ROM0[$0020]
    ret

    SECTION "RST_28",ROM0[$0028]
    ret

    SECTION "RST_30",ROM0[$0030]
    ret

    SECTION "RST_38",ROM0[$0038]
    jp      Reset ; Undefined reads are $FF most times, so it's a good practice
    ; to put a reset here.

;###############################################################################
;#                                                                             #
;#                              INTERRUPT VECTORS                              #
;#                                                                             #
;###############################################################################

    SECTION "Interrupt Vectors",ROM0[$0040]

;    SECTION "VBL Interrupt Vector",ROM0[$0040] ; No jr between SECTIONs
    push    hl
    ld      hl,_is_vbl_flag
    ld      [hl],1
    jr      int_VBlank

;    SECTION "LCD Interrupt Vector",ROM0[$0048]
    push    hl
    ld      hl,LCD_handler
    jr      int_Common
    nop
    nop

;    SECTION "TIM Interrupt Vector",ROM0[$0050]
    push    hl
    ld      hl,TIM_handler
    jr      int_Common
    nop
    nop

;    SECTION "SIO Interrupt Vector",ROM0[$0058]
    push    hl
    ld      hl,SIO_handler
    jr      int_Common
    nop
    nop

;    SECTION "JOY Interrupt Vector",ROM0[$0060]
    push    hl
    ld      hl,JOY_handler
    jr      int_Common
;    nop
;    nop

;###############################################################################
;#                                                                             #
;#                              INTERRUPT HANDLER                              #
;#                                                                             #
;###############################################################################

int_VBlank:
    ld      hl,VBL_handler

int_Common:
    push    af

    ld      a,[hl+]
    ld      h,[hl]
    ld      l,a

    push    bc
    push    de
    CALL_HL
    pop     de
    pop     bc

    pop     af
    pop     hl

    reti

;-------------------------------------------------------------------------------
;- wait_vbl()                                                                  -
;-------------------------------------------------------------------------------

wait_vbl:

    ld      hl,_is_vbl_flag
    ld      [hl],0

.not_yet:
    halt
    bit     0,[hl]
    jr      z,.not_yet

    ret

;###############################################################################
;#                                                                             #
;#                              CARTRIDGE HEADER                               #
;#                                                                             #
;###############################################################################

    SECTION "Cartridge Header",ROM0[$0100]

    nop
    jp      StartPoint

    NINTENDO_LOGO

    ;        0123456789ABC
    DB      "STEEL HORSE  " ; Note: Don't include charmaps in this file!
    DW      $0000
    DB      CART_COMPATIBLE_DMG ;
    DB      $00,$00,$00 ; No Super Game Boy
    DB      CART_ROM ; CARTTYPE (ROM only)
    DB      $00         ; ROM Size (no ROM banking)
    DB      CART_RAM_NONE; RAM Size (No banks)

    DB      $01 ;Destination (0 = Japan, 1 = Non Japan)
    DB      $00 ;Manufacturer
    DB      $00 ;Version
    DB      $00 ;Complement header check
    DW      $0000 ;Checksum

;###############################################################################
;#                                                                             #
;#                                START ROUTINE                                #
;#                                                                             #
;###############################################################################

    SECTION "Program Start",ROM0[$0150]
    
StartPoint:
    di
    
    ld      sp,$FFFE ; Use this as stack for a while
    
    ld      a, 0            ; write 0 to scroll registers X and Y
    ld      [rSCX], a       ; so visible screen is
    ld      [rSCY], a       ; at the top left of the background.
    
        ; Add all ram values to get a random seed
    ld      hl,_RAM
    ld      bc,$2000
    ld      e,$00
.random_seed_loop:
    ld      a,e
    add     a,[hl]
    ld      e,a
    inc     hl
    dec     bc
    ld      a,b
    or      a,c
    jr      nz,.random_seed_loop
    ld      a,e
    push    af ; Save seed

    ld      hl,_RAM ; Clear RAM
    ld      bc,$2000
    ld      d,$00
    call    memset

    pop     af ; Get random seed
    call    SetRandomSeed

    ld      sp,StackTop ; Real stack

    call    screen_off

    ld      hl,_VRAM ; Clear VRAM
    ld      bc,$2000
    ld      d,$00
    call    memset

    ld      hl,_HRAM ; Clear high RAM (and rIE)
    ld      bc,$0080
    ld      d,$00
    call    memset

    call    init_OAM ; Copy OAM refresh function to high ram
    call    refresh_OAM ; We filled RAM with $00, so this will clear OAM
    
    call    rom_handler_init
    
    REPT    3
    call    scan_keys ; Init variables to a known state
    ENDR
    
    xor     a,a
    ld      [rIE],a

    ; Enable interrupts forever. No code is allowed to disable them unless it is
    ; a critical section.
    ei
    
    ld      a,LCDCF_ON;
    ld      [rLCDC],a

    ; Real program starts here
    jp      Main

    ; Should never reach this point

    jp      Reset

;-------------------------------------------------------------------------------
;- Reset()                                                                     -
;-------------------------------------------------------------------------------

Reset::
    ld      a,[Init_Reg_B]
    ld      b,a
    ld      a,[Init_Reg_A]
    jp      $0100

;-------------------------------------------------------------------------------
;- irq_set_VBL()    bc = function pointer                                      -
;- irq_set_LCD()    bc = function pointer                                      -
;- irq_set_TIM()    bc = function pointer                                      -
;- irq_set_SIO()    bc = function pointer                                      -
;- irq_set_JOY()    bc = function pointer                                      -
;-------------------------------------------------------------------------------

irq_set_VBL::

    ld      hl,VBL_handler
    jr      irq_set_handler

irq_set_LCD::

    ld      hl,LCD_handler
    jr      irq_set_handler

irq_set_TIM::

    ld      hl,TIM_handler
    jr      irq_set_handler

irq_set_SIO::

    ld      hl,SIO_handler
    jr      irq_set_handler

irq_set_JOY::

    ld      hl,JOY_handler
;    jr      irq_set_handler

irq_set_handler:  ; hl = dest handler    bc = function pointer

    ld      [hl],c
    inc     hl
    ld      [hl],b

    ret

;-------------------------------------------------------------------------------
;- CPU_fast()                                                                  -
;- CPU_slow()                                                                  -
;-------------------------------------------------------------------------------

CPU_fast::

    ld      a,[rKEY1]
    bit     7,a
    jr      z,__CPU_switch
    ret

CPU_slow::

    ld      a,[rKEY1]
    bit     7,a
    jr      nz,__CPU_switch
    ret

__CPU_switch:

    ld      a,[rIE]
    ld      b,a ; save IE
    xor     a,a
    ld      [rIE],a
    ld      a,$30
    ld      [rP1],a
    ld      a,$01
    ld      [rKEY1],a

    stop

    ld      a,b
    ld      [rIE],a ; restore IE

    ret

;###############################################################################

    SECTION "StartupVars",WRAM0

;-------------------------------------------------------------------------------

Init_Reg_A::    DS 1
Init_Reg_B::    DS 1
EnabledGBC::    DS 1

_is_vbl_flag:   DS 1

VBL_handler:    DS 2
LCD_handler:    DS 2
TIM_handler:    DS 2
SIO_handler:    DS 2
JOY_handler:    DS 2

;###############################################################################

    SECTION "Stack",WRAM0[$CE00]

;-------------------------------------------------------------------------------

Stack:    DS $200
StackTop: ; At address $D000

;###############################################################################
