    INCLUDE	"hardware.inc"
    INCLUDE "engine.inc"

    SECTION "Title",ROM0
    
    INCLUDE "h53_title_screen.inc"
    
ShowTitle::
    call    StopTimer
    call    bg_clear_tiles
    
    ; set background palette
    ld      a, %11100100
    ld      [rBGP], a

    ; load tiles
    ld      hl, h53_title_screen_tile_data
    ld      de, $0
    ld      bc, h53_title_screen_tile_count
    call    vram_copy_tiles

    ;----------------------------------
    ld      hl, h53_title_screen_map_data
    ld      b, $13
    ld      c, $12
    ld      d, 0
    call    load_bg_full_screen
    ;----------------------------------
    
    ld      a,LCDCF_ON|LCDCF_BGON|LCDCF_BG8000|LCDCF_OBJOFF
    ld      [rLCDC],a
    
.main_loop:
    call    scan_keys
    call    TitleInput
    jr      .main_loop

    ret
    
TitleInput:
    ld      a,[joy_held]
    and     a,PAD_START
    jr      z,.end
        call WaitReleasedAllKeys
        jp  ShowPilot1
.end:

    ret