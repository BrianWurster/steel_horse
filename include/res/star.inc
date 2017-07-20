; ///////////////////////
; //                   //
; //  File Attributes  //
; //                   //
; ///////////////////////

; Filename: star.png
; Pixel Width: 8px
; Pixel Height: 8px

; /////////////////
; //             //
; //  Constants  //
; //             //
; /////////////////

star_tile_map_size EQU $01
star_tile_map_width EQU $01
star_tile_map_height EQU $01

star_tile_data_size EQU $10
star_tile_count EQU $01

; ////////////////
; //            //
; //  Map Data  //
; //            //
; ////////////////

star_map_data:
DB $00

; /////////////////
; //             //
; //  Tile Data  //
; //             //
; /////////////////

star_tile_data:
DB $10,$10,$10,$10,$FE,$FE,$7C,$7C,$38,$38,$7C,$7C,$C6,$C6,$00,$00