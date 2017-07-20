; ///////////////////////
; //                   //
; //  File Attributes  //
; //                   //
; ///////////////////////

; Filename: helicopter_2.png
; Pixel Width: 32px
; Pixel Height: 32px

; /////////////////
; //             //
; //  Constants  //
; //             //
; /////////////////

helicopter_2_tile_map_size EQU $10
helicopter_2_tile_map_width EQU $04
helicopter_2_tile_map_height EQU $04

helicopter_2_tile_data_size EQU $0100
helicopter_2_tile_count EQU $10

; ////////////////
; //            //
; //  Map Data  //
; //            //
; ////////////////

helicopter_2_map_data:
DB $00,$01,$02,$03,$04,$05,$06,$07,$08,$09,$0A,$0B,$0C,$0D,$0E,$0F

; /////////////////
; //             //
; //  Tile Data  //
; //             //
; /////////////////

helicopter_2_tile_data:
DB $00,$00,$00,$00,$00,$00,$00,$00,$01,$01,$02,$03,$02,$03,$01,$01
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$80,$80,$C0,$C0,$A0,$E0
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$03,$03,$04,$07,$0F,$0F
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$80,$80,$00,$00
DB $00,$00,$00,$00,$E0,$E0,$90,$F0,$90,$F0,$90,$F0,$90,$F0,$90,$F0
DB $B0,$D0,$78,$48,$24,$3C,$1B,$1F,$17,$1E,$1F,$1C,$0F,$0E,$1B,$1F
DB $1E,$12,$2C,$34,$28,$38,$D0,$F0,$EF,$6F,$FE,$39,$EF,$7F,$D8,$FF
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$80,$80,$C0,$C0,$C0,$C0
DB $E8,$F8,$8F,$FF,$F0,$FF,$80,$FF,$41,$7F,$3E,$3F,$07,$07,$09,$0F
DB $72,$7F,$A7,$FF,$6F,$D8,$FF,$9F,$E1,$3F,$41,$FF,$E1,$FF,$79,$7F
DB $24,$FF,$D2,$FF,$FF,$79,$E7,$FC,$23,$FE,$61,$FF,$2F,$FF,$3E,$F1
DB $F0,$F0,$D8,$F8,$94,$FC,$94,$FC,$72,$FE,$62,$FE,$DA,$FE,$DC,$FC
DB $06,$06,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $4F,$7F,$3F,$3F,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $CE,$F1,$8F,$FF,$B0,$FF,$D0,$FF,$30,$3F,$0F,$0F,$00,$00,$00,$00
DB $68,$F8,$70,$F0,$C0,$C0,$40,$C0,$80,$80,$00,$00,$00,$00,$00,$00