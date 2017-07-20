    INCLUDE	"hardware.inc"
    INCLUDE "engine.inc"
    
HELI_SPEED EQU $1
HELI_ANIM_MOD EQU $4    ;cannot be 0, 16fps 4096Hz divided by this value, higher=slower
STAR_SPAWN_MOD EQU $58
    
    SECTION "HelicopterVariables",WRAM0
frame_num:      DS 1 ; frame_num
advance_frame:  DS 1 ; boolean set by timer to advance frame_num
do_spawn:       DS 1 ; boolean set by timer to spawn star
timer_count:    DS 1
score:          DS 2
oam_idx:        DS 1
x_orig:         DS 1
count:          DS 1
x_pos:          DS 1
y_pos:          DS 1
star_x:         DS 1
star_y:         DS 1
    
    SECTION "Helicopter",ROM0
    
    INCLUDE "numeric.inc"
    INCLUDE "helicopter_1.inc"
    INCLUDE "helicopter_2.inc"
    INCLUDE "snow.inc"
    INCLUDE "star.inc"
    
;-------------------------------------------------------------------------------
;- sprite_load_oam()      b = tile index   d = oam index
;-------------------------------------------------------------------------------
sprite_load_oam: MACRO
    ld      c, $0   ; count
.load_oam\@
    ld      l, d
    ld      a, b
    push    de
    call    sprite_set_tile
    pop de
    
    ; inc tile index
    ld      a, b
    add     1
    ld      b, a
    
    ; inc count
    ld      a, c
    add     1
    ld      c, a
    
    ; inc oam index
    ld      a, d
    add     1
    ld      d, a
    
    ; compare against total length
    ld      a, \1
    sub     c
    jr      nz, .load_oam\@
    ENDM
    
CharData: chr_NUMERIC
    
reset_star_location:
    ld      a, 255
    ld      b, a
    ld      [star_x], a
    ld      c, 16
    ld      l, $10
    call    sprite_set_xy
    ret

HeliScene::
    call    bg_clear_tiles
    
    ; text characters
    call    screen_off		; YOU CAN NOT LOAD $8000 WITH LCD ON
	ld	hl, CharData
	ld	de, $8200
	ld	bc, 8*11;32
	call	mem_CopyMono	; load tile data
    
    ; star
    ld      hl, star_tile_data
    ld      de, $40
    ld      bc, star_tile_count
    call    vram_copy_tiles

    call    reset_star_location
    
    ;- vram_copy_tiles()    bc = tiles    de = start index    hl = source 
    ld      hl, snow_tile_data
    ld      de, $80
    ld      bc, snow_tile_count
    call    vram_copy_tiles
    
    ld      hl, snow_map_data
    ld      b, $1F
    ld      c, $12
    ld      d, 1
    call    load_bg_full_screen

    ; set default palettes
    ld      a, %11100100
    ld      [rOBP0], a
    ld      [rOBP1], a
    ;ld      a, %11111100
    ld      [rBGP], a
	
    ; initialize variables
    ld      a, 0
    ld      [advance_frame], a
    ld      [do_spawn], a
    ld      [frame_num], a
    ld      [timer_count], a
    
    ; SCORE
    ld      [score], a
    ld      [score+1], a
    call    update_score
    
    call    helicopter_load_tiles
    call    helicopter_load_oam_1
    
    ld      l, $0   ; oam index
    ld      b, $18  ; x
    ld      c, 60;$20  ; y
    call    helicopter_pos_set
    
    ld      a,LCDCF_ON|LCDCF_BGON|LCDCF_BG8800|LCDCF_OBJON
    ld      [rLCDC],a

    call    SetDefaultVBLHandler
    call    SetDefaultTIMHandler

    ld      hl,rIE
    set     0,[hl] ; IEF_VBLANK
    set     2,[hl] ; IEF_TIMER
    
    ; setup & start timer, 16fps, adding counter variable in timer to reduce further
    ld      a, $0
    ld      [rDIV], a
    ld      [rTMA], a
    ld      a, TACF_16KHZ | TACF_START
    ld      [rTAC], a

.main_loop:
    call    wait_vbl
    call    animate
    call    spawner
    call    collision
    call    scan_keys
    call    HeliInput
    jr      .main_loop
    
inc_score:
    ld      a, [score]
    add     1
    cp      10
    jr      nz, .single_digit
        ld  a, 0
        ld  [score], a
        ld  a, [score+1]
        
        ; if this is 9, roll to 0
        cp  9
        jr  nz, .inc_dbl
            ld a,0
            ld [score+1], a
            jp .end
.inc_dbl
        add 1
        ld [score+1], a
        jp .end
        
.single_digit
    ld      [score], a
.end
    ret
    
update_score:
    ld      a, [score]
    add     $20 ; to get to tile index
    ld      b, a  ; tile index
    ld      d, $11   ; oam index
    sprite_load_oam 1
    
    ld      b, 16
    ld      c, 152
    ld      l, $11
    call    sprite_set_xy
    
    ld      a, [score+1]
    add     $20 ; to get to tile index
    ld      b, a  ; tile index
    ld      d, $12   ; oam index
    sprite_load_oam 1
    
    ld      b, 8
    ld      c, 152
    ld      l, $12
    call    sprite_set_xy
    
    ret
    
collision:
    ; does star center x+4 fall in heli x range
    ld      a, [x_pos]
    ld      b, a    ; b is heli rear x
    add     32
    ld      c, a    ; c is heli front x
    
    ld      a, [star_x]
    add     4 ; to check on center
    
    cp      b ; check if star x greater than heli rear
    jr      nc, .check_heli_front   ; c is reset, a > b
        jp  .end
.check_heli_front
    cp      c
    jr      nc, .end ; a < c
    
        ; we are in x range
        ; does star center y+4 fall in heli y range
        ld      a, [y_pos]
        ld      b, a    ; b is heli top y
        add     32
        ld      c, a    ; c is heli bottom y
        
        ld      a, [star_y]
        add     4 ; to check on center
        
        cp      b ; check if star y greater than heli top
        jr      nc, .check_heli_bottom   ; c is reset, a > b
            jp  .end
.check_heli_bottom
        cp      c
        jr      nc, .end ; a < c
        
            ; collision occurred
            call    handle_collision
            nop

.end
    ret
    
handle_collision:
    call    reset_star_location
    call    inc_score
    call    update_score
    ret

spawner:
    ; animate star always
    ld      a, [star_x]
    sub     2
    ld      [star_x], a
    ld      b, a
    
    ld      a, [star_y]
    ld      c, a
    
    ld      l, $10
    call    sprite_set_xy

    ; check if star needs spawning
    ld      a, [do_spawn]
    ld      b, a
    ld      a, 1
    cp      b
    jr      nz, .end ; nothing to do
    
    ; reset bool
    ld      a, 0
    ld      [do_spawn], a
    
    ld      a, 160
    ld      [star_x], a
    
    ; [hl] a is random
    call    GetRandom
    ; a % b -> a
    ld      b, 127 ; max range
    call    div_s8s8s8
    add     16 ; min range
    ld      [star_y], a
    
    ld      b, $40  ; tile index
    ld      d, $10   ; oam index
    sprite_load_oam star_tile_count
    
    ; spawn star here
    ;- sprite_set_xy()    b = x    c = y    l = sprite number 
    ld      b, 160
    ld      c, a
    ld      l, $10
    call    sprite_set_xy
    
.end
    ret

animate:
    ; check if frame needs advancing
    ld      a, [advance_frame]
    ld      b, a
    ld      a, 1
    cp      b
    jr      nz, .end ; nothing to do
    
    ; reset frame advance bool
    ld      a, 0
    ld      [advance_frame], a
    
    ; toggle (for now) frame num (since currently only two frames)
    ld      a, [frame_num]
    ld      b, 1
    xor     b
    ld      [frame_num], a
    ld      b, a
    
    ; apply frame_num
    ld      a, 0
    cp      b
    jr      nz, .switch
    
    call    helicopter_load_oam_1
    jr      .end
    
.switch
    call    helicopter_load_oam_2
    
.end
    ret

DefaultTIMHandler:
    ; inc toggle count
    ld      a, [timer_count]
    add     1
    ld      b, a
    ld      [timer_count], a
    
    ; advance background
    ld      a, [rSCX]
    add     1
    ld      [rSCX], a

    ; a % b -> a
    ; helicopter animation
    ld      a, [timer_count]
    ld      b, HELI_ANIM_MOD
    call    div_s8s8s8
    ld      c, 0
    cp      c
    jr      nz, .heli_anim_end
    ld      a, 1
    ld      [advance_frame], a
.heli_anim_end

    ; star spawner
    ld      a, [timer_count]
    ld      b, STAR_SPAWN_MOD
    call    div_s8s8s8
    ld      c, 0
    cp      c
    jr      nz, .star_spawner_end
    ld      a, 1
    ld      [do_spawn], a
.star_spawner_end

    ret
    
SetDefaultTIMHandler::
    ld      bc,DefaultTIMHandler
    call    irq_set_TIM
    ret
    
;-------------------------------------------------------------------------------
;- helicopter_load_tiles()    de = start index
;-------------------------------------------------------------------------------
helicopter_load_tiles::
    ld      de, $0 ; tile index
    ld      hl, helicopter_1_tile_data
    ld      bc, helicopter_1_tile_count
    call    vram_copy_tiles
    
    ld      de, helicopter_1_tile_count ; first index (0, in this case + first tile count), tile index
    ld      hl, helicopter_2_tile_data
    ld      bc, helicopter_2_tile_count
    call    vram_copy_tiles
    
helicopter_load_oam_1::
    ld      b, $0  ; tile index
    ld      d, $0   ; oam index
    sprite_load_oam helicopter_1_tile_count
    ret
    
helicopter_load_oam_2::
    ld      b, $10  ; tile index
    ld      d, $0   ; oam index
    sprite_load_oam helicopter_2_tile_count
    ret
    
reset_x:
    ld      a, [x_orig]
    ld      b, a
    ret

advance_x:
    ld      a, b
    add     $8
    ld      b, a
    ret
    
advance_y:
    ld      a, c
    add     $8
    ld      c, a
    ret
    
advance_oam_index:
    ld      a, [oam_idx]
    add     $1
    ld      [oam_idx], a
    ld      l, a
    ret
    
;-------------------------------------------------------------------------------
;- helicopter_pos_set()      b = x   c = y   l = oam index
;-------------------------------------------------------------------------------
helicopter_pos_set::

    ; enforce screen boundaries
    ; x minimum 8
    ld      a, b
    sub     8 ; minimum pos
    bit     7, a
    jr      z, .x_max; z clear = b is postive num, z set = b is negative num
    ; set minumum
    ld      a, 8
    ld      b, a
    
.x_max
    ; x maximum 8
    ld      a, b
    sub     134 ; max pos
    bit     7, a
    jr      nz, .y_min; z clear = b is postive num, z set = b is negative num
    ; set maximum
    ld      a, 134
    ld      b, a

.y_min
    ; y minimum 16
    ld      a, c
    sub     16 ; minimum pos
    bit     7, a
    jr      z, .y_max; z clear = b is postive num, z set = b is negative num
    ; set minumum
    ld      a, 16
    ld      c, a
    
.y_max
    ; y max 120
    ld      a, c
    sub     120 ; max pos
    bit     7, a
    jr      nz, .move; z clear = b is postive num, z set = b is negative num
    ; set maximum
    ld      a, 120
    ld      c, a

.move
    ld      a, l
    ld      [oam_idx], a
    ld      a, b
    ld      [x_orig], a
    ld      [x_pos], a
    ld      a, c
    ld      [y_pos], a
    ld      a, $0
    ld      [count], a

.row
    ld      a, [count]
    ld      d, a
    ld      a, helicopter_1_tile_map_width
    cp      d
    jr      z, .end
    
    ld      a, $0
    cp      d
    jr      z, .next ; if 0, skip advance row and oam index
    call    advance_y
    call    advance_oam_index
    
.next
    call    reset_x
    call    sprite_set_xy
    
    call    advance_x
    call    advance_oam_index
    call    sprite_set_xy
    
    call    advance_x
    call    advance_oam_index
    call    sprite_set_xy
    
    call    advance_x
    call    advance_oam_index
    call    sprite_set_xy
    
    ; advance count
    ld      a, [count]
    add     1
    ld      [count], a
    
    jp      .row
    
.end
    ret
    
;-------------------------------------------------------------------------------

HeliInput:
    ld      a,[joy_held]
    and     a,PAD_UP
    jr      z,.not_up
        ld      a, [y_pos]
        sub     HELI_SPEED
        ld      [y_pos], a
        jr      .not_down
.not_up:

    ld      a,[joy_held]
    and     a,PAD_DOWN
    jr      z,.not_down
        ld      a, [y_pos]
        add     HELI_SPEED
        ld      [y_pos], a
        jr      .not_down
.not_down:

    ld      a,[joy_held]
    and     a,PAD_LEFT
    jr      z,.not_left
        ld      a, [x_pos]
        sub     HELI_SPEED
        ld      [x_pos], a
        jr      .end
.not_left:

    ld      a,[joy_held]
    and     a,PAD_A
    jr      z,.not_a
        
        ; remove star oam
        ld      b, $41  ; tile index
        ld      d, $10   ; oam index
        sprite_load_oam star_tile_count
        
        call WaitReleasedAllKeys
        jp  ShowTitle
.not_a:

    ld      a,[joy_held]
    and     a,PAD_RIGHT
    jr      z,.end
        ld      a, [x_pos]
        add     HELI_SPEED
        ld      [x_pos], a
.end:

    ld      l, $0   ; oam index
    ld      a, [x_pos]
    ld      b, a
    ld      a, [y_pos]
    ld      c, a
    call    helicopter_pos_set

    ret
