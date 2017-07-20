    INCLUDE	"hardware.inc"
    INCLUDE "engine.inc"

    SECTION "Main",ROM0
    
Main:
    call    SetDefaultVBLHandler
    ld      hl,rIE
    set     0,[hl] ; IEF_VBLANK
    
    jp      ShowTitle
    
DefaultVBLHandler:
    call    refresh_OAM
    ret
    
SetDefaultVBLHandler::
    ld      bc,DefaultVBLHandler
    call    irq_set_VBL
    ret