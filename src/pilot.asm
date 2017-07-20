    INCLUDE	"hardware.inc"
    INCLUDE "engine.inc"
    
    SECTION "PilotVariables",WRAM0
pilot_state:           DS 1
    
    SECTION "Pilot",ROM0
    
    INCLUDE "pilot_1.inc"
    INCLUDE "pilot_2.inc"
 
PilotCommon: MACRO
    call    StopTimer
    ld      a, \1
    ld      [pilot_state], a

    call    bg_clear_tiles
    
    ; set background palette
    ld      a, %11100100
    ld      [rBGP], a
    ENDM
    
ShowPilot1::
    PilotCommon 0

    ; load tiles
    ld      hl, pilot_1_tile_data
    ld      de, $0
    ld      bc, pilot_1_tile_count
    call    vram_copy_tiles

    ;----------------------------------
    ld      hl, pilot_1_map_data
    ld      b, $13
    ld      c, $12
    ld      d, 0
    call    load_bg_full_screen
    ;----------------------------------
    
    ld      a,LCDCF_ON|LCDCF_BGON|LCDCF_BG8000|LCDCF_OBJOFF
    ld      [rLCDC],a
    
.main_loop:
    call    scan_keys
    call    PilotInput
    jr      .main_loop

    ret
    
ShowPilot2::
    PilotCommon 1

    ; load tiles
    ld      hl, pilot_2_tile_data
    ld      de, $0
    ld      bc, pilot_2_tile_count
    call    vram_copy_tiles

    ;----------------------------------
    ld      hl, pilot_2_map_data
    ld      b, $13
    ld      c, $12
    ld      d, 0
    call    load_bg_full_screen
    ;----------------------------------
    
    ld      a,LCDCF_ON|LCDCF_BGON|LCDCF_BG8000|LCDCF_OBJOFF
    ld      [rLCDC],a
    
.main_loop:
    call    scan_keys
    call    PilotInput
    jr      .main_loop

    ret
    
PilotInput:
    ld      a,[joy_held]
    and     a,PAD_LEFT
    jr      z,.not_left
        ld  a, [pilot_state]
        ld  b, 0
        cp  b
            jr  z,.not_left
                jp  ShowPilot1
.not_left:

    ld      a,[joy_held]
    and     a,PAD_RIGHT
    jr      z,.not_right
        ld  a, [pilot_state]
        ld  b, 1
        cp  b
            jr  z,.not_right
                jp  ShowPilot2
.not_right:

    ld      a,[joy_held]
    and     a,PAD_START
    jr      z,.not_start
        call WaitReleasedAllKeys
        jp  HeliScene
.not_start:

    ld      a,[joy_held]
    and     a,PAD_A
    jr      z,.end
        call WaitReleasedAllKeys
        jp  ShowTitle
.end:

    ret