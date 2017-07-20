; ///////////////////////
; //                   //
; //  File Attributes  //
; //                   //
; ///////////////////////

; Filename: pilot_1.png
; Pixel Width: 160px
; Pixel Height: 144px

; /////////////////
; //             //
; //  Constants  //
; //             //
; /////////////////

pilot_1_tile_map_size EQU $0168
pilot_1_tile_map_width EQU $14
pilot_1_tile_map_height EQU $12

pilot_1_tile_data_size EQU $0D90
pilot_1_tile_count EQU $D9

; ////////////////
; //            //
; //  Map Data  //
; //            //
; ////////////////

pilot_1_map_data:
DB $00,$00,$00,$00,$01,$02,$03,$03,$04,$05,$00,$06,$07,$08,$03,$09
DB $00,$00,$0A,$00,$00,$00,$00,$00,$00,$00,$00,$0B,$0C,$0D,$0E,$0F
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$10,$11,$12,$13,$00,$14,$15
DB $16,$17,$18,$19,$1A,$00,$00,$00,$00,$00,$00,$1B,$1C,$1D,$1E,$1F
DB $20,$00,$21,$22,$22,$22,$23,$24,$25,$00,$00,$00,$00,$00,$00,$26
DB $00,$27,$00,$28,$29,$2A,$22,$22,$22,$22,$2B,$2C,$2D,$00,$00,$2E
DB $2F,$30,$31,$32,$33,$34,$35,$36,$37,$38,$39,$3A,$3B,$3C,$3D,$3E
DB $3F,$00,$00,$00,$40,$41,$42,$43,$44,$45,$46,$47,$48,$49,$4A,$4B
DB $4C,$4D,$4E,$4F,$50,$51,$00,$00,$52,$53,$22,$43,$54,$55,$00,$56
DB $57,$58,$59,$22,$5A,$5B,$5C,$5D,$5E,$5F,$00,$00,$60,$61,$22,$43
DB $62,$63,$00,$00,$64,$65,$66,$67,$68,$69,$6A,$6B,$6C,$00,$00,$00
DB $6D,$6E,$6F,$43,$70,$71,$00,$00,$72,$22,$73,$74,$75,$76,$77,$78
DB $79,$00,$00,$00,$7A,$00,$7B,$7C,$7D,$00,$00,$00,$7E,$7F,$80,$81
DB $82,$83,$84,$85,$86,$00,$00,$00,$00,$00,$00,$87,$00,$88,$89,$00
DB $00,$8A,$8B,$8C,$8D,$8E,$8F,$90,$91,$92,$00,$00,$00,$00,$00,$00
DB $93,$94,$95,$96,$97,$98,$99,$9A,$9B,$9C,$9D,$9E,$00,$52,$9F,$A0
DB $A1,$A2,$00,$00,$A3,$A4,$A5,$A6,$A7,$00,$A8,$A9,$AA,$AB,$AC,$00
DB $00,$00,$AD,$AE,$AF,$B0,$B1,$00,$B2,$B3,$00,$00,$00,$B4,$B5,$B6
DB $B7,$B8,$B9,$BA,$00,$BB,$BC,$BD,$00,$00,$BE,$BF,$C0,$00,$00,$00
DB $00,$00,$C1,$C2,$C3,$C4,$00,$00,$00,$C5,$C6,$00,$00,$00,$00,$C7
DB $C8,$00,$00,$00,$00,$00,$00,$C9,$CA,$CB,$00,$00,$CC,$CD,$CE,$00
DB $00,$00,$00,$CF,$D0,$00,$00,$00,$00,$00,$00,$D1,$D2,$00,$00,$D3
DB $D4,$D5,$D6,$D7,$00,$00,$00,$D8

; /////////////////
; //             //
; //  Tile Data  //
; //             //
; /////////////////

pilot_1_tile_data:
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$C3,$C3,$99,$99,$9F,$9F,$9F,$9F,$99,$99,$C3,$C3
DB $FF,$FF,$FF,$FF,$B9,$B9,$B9,$B9,$81,$81,$B9,$B9,$B9,$B9,$B9,$B9
DB $FF,$FF,$FF,$FF,$C3,$C3,$99,$99,$99,$99,$99,$99,$99,$99,$C3,$C3
DB $FF,$FF,$FF,$FF,$C3,$C3,$9F,$9F,$C3,$C3,$F1,$F1,$B1,$B1,$C3,$C3
DB $FF,$FF,$FF,$FF,$81,$81,$9F,$9F,$83,$83,$9F,$9F,$9F,$9F,$81,$81
DB $FF,$FF,$FF,$FF,$83,$83,$99,$99,$99,$99,$83,$83,$9F,$9F,$9F,$9F
DB $FF,$FF,$FF,$FF,$C3,$C3,$E7,$E7,$E7,$E7,$E7,$E7,$E7,$E7,$C3,$C3
DB $FF,$FF,$FF,$FF,$9F,$9F,$9F,$9F,$9F,$9F,$9F,$9F,$9F,$9F,$81,$81
DB $FF,$FF,$FF,$FF,$81,$81,$E7,$E7,$E7,$E7,$E7,$E7,$E7,$E7,$E7,$E7
DB $FF,$FF,$FF,$FF,$FF,$FF,$DF,$DF,$CF,$CF,$C7,$C7,$CF,$CF,$DF,$DF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FC,$FF,$F1,$FE,$E7,$F8
DB $FF,$FF,$F0,$FF,$CF,$FF,$3F,$FF,$BF,$FF,$00,$FF,$FF,$00,$E0,$00
DB $FF,$FF,$01,$FF,$FE,$FF,$FF,$FF,$C7,$FF,$03,$FF,$01,$FF,$E0,$1F
DB $FF,$FF,$FF,$FF,$3F,$FF,$CF,$FF,$F3,$FF,$FC,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$3F,$FF,$DF,$FF
DB $FF,$FF,$CF,$FF,$EF,$CF,$C7,$EF,$C7,$E7,$C3,$E7,$C2,$E0,$C0,$E0
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$CF,$8F,$1F,$1F,$3F,$3F,$3F
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FC,$FF,$FC,$FE,$FC,$FE,$FC,$FE
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$FF,$7A,$7D
DB $FF,$FF,$FF,$FF,$FE,$FF,$FD,$FE,$FD,$FA,$FC,$F8,$F0,$F8,$F8,$E0
DB $98,$E0,$20,$C0,$40,$80,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $74,$0B,$78,$07,$3C,$03,$1F,$00,$0F,$00,$0F,$00,$01,$00,$01,$00
DB $1F,$FF,$07,$FF,$81,$7F,$C0,$3F,$E0,$1F,$E0,$1F,$F0,$0F,$F0,$0F
DB $EF,$FF,$F7,$FF,$FB,$FF,$FD,$FF,$7E,$FF,$7F,$FF,$3F,$FF,$1F,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$FF,$7F,$FF,$BF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FD,$FF
DB $FF,$FF,$FE,$FC,$FC,$F8,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $C0,$80,$00,$00,$00,$00,$80,$00,$C0,$E0,$C3,$E0,$E3,$E3,$E3,$E7
DB $3F,$7F,$7F,$7F,$3F,$7F,$7F,$3F,$3F,$1F,$0F,$1F,$E7,$CF,$F7,$FF
DB $FC,$FE,$FC,$FE,$FC,$FE,$F4,$F8,$E0,$C0,$C0,$80,$C8,$F0,$FC,$FE
DB $7B,$31,$01,$03,$03,$03,$07,$03,$03,$07,$07,$03,$01,$03,$00,$01
DB $F0,$E0,$E0,$C0,$E0,$80,$C0,$80,$C0,$80,$80,$00,$80,$00,$80,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $F0,$0F,$70,$0F,$70,$0F,$30,$0F,$30,$0F,$18,$07,$10,$0F,$7C,$03
DB $1F,$FF,$0F,$FF,$0F,$FF,$07,$FF,$07,$FF,$03,$FF,$01,$FF,$01,$FF
DB $BF,$FF,$DF,$FF,$DF,$FF,$EF,$FF,$EF,$FF,$EF,$FF,$F7,$FF,$F7,$FF
DB $FD,$FD,$FD,$F9,$F1,$F9,$F1,$F1,$F1,$E1,$C1,$E1,$C1,$C1,$C1,$81
DB $E7,$E7,$E7,$EF,$FF,$EF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FE,$FE,$FE,$FE,$FE,$FE,$FF,$FE,$FF,$FE,$FE,$FF,$FF,$FF,$FF,$FF
DB $24,$18,$3F,$3E,$3F,$7F,$FF,$7F,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $7F,$FE,$FF,$7E,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE
DB $FC,$03,$F0,$0F,$7C,$03,$E8,$17,$F8,$07,$7E,$01,$3E,$01,$78,$07
DB $00,$FF,$00,$FF,$00,$FF,$00,$FF,$01,$FF,$07,$FF,$0F,$FF,$0F,$FF
DB $F7,$FF,$F7,$FF,$F7,$FF,$F7,$FF,$F7,$FF,$F7,$FF,$F7,$FF,$F7,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$3F,$7F,$97,$0F,$05,$83,$80,$C0,$E0,$C0
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$7F,$1F,$3F
DB $FF,$FF,$FF,$FF,$FE,$FF,$FC,$FE,$FE,$FC,$F8,$FC,$FC,$F8,$F8,$F0
DB $01,$81,$81,$01,$01,$01,$01,$01,$01,$01,$01,$01,$01,$01,$01,$01
DB $FF,$FF,$FF,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF
DB $FF,$FF,$FF,$FF,$7F,$7F,$3F,$7F,$3F,$3F,$1D,$3E,$14,$18,$01,$00
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$7F,$7F,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$F7,$FB,$F9,$FB,$F9,$F9,$F8,$F9
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$F3,$FB,$C7,$E3
DB $FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE
DB $00,$00,$01,$00,$07,$00,$03,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$77,$00,$FA,$05,$06,$01,$00,$00,$0F,$07,$3F,$3F,$4E,$EF
DB $00,$00,$80,$00,$40,$80,$30,$C0,$58,$20,$18,$80,$18,$E0,$28,$D0
DB $00,$00,$06,$01,$0C,$03,$13,$0F,$04,$1F,$2A,$1D,$08,$3F,$1C,$3F
DB $80,$7F,$58,$FF,$61,$FF,$A2,$C1,$84,$03,$7C,$FF,$BF,$7F,$33,$7F
DB $CF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$FF,$7F,$FF,$FF,$FF
DB $F7,$FF,$F7,$FF,$F7,$FF,$F7,$FF,$F7,$FF,$F7,$FF,$F7,$FF,$F1,$FF
DB $D0,$E0,$F0,$E0,$F8,$F0,$F0,$F8,$FC,$F8,$FA,$FC,$FD,$FE,$FF,$FE
DB $07,$0F,$02,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $E0,$F0,$F0,$E0,$E0,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $01,$01,$01,$01,$01,$01,$01,$01,$01,$01,$01,$01,$01,$01,$01,$01
DB $FF,$FE,$F0,$F8,$E0,$C0,$E0,$C0,$FA,$FC,$FE,$FF,$FF,$FF,$FF,$FF
DB $01,$01,$03,$01,$03,$03,$03,$01,$00,$01,$00,$00,$08,$1C,$1E,$3F
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FF,$FF,$FF,$7F,$BF,$7F
DB $FC,$F8,$FA,$F8,$F2,$F8,$A0,$C0,$00,$00,$00,$80,$F8,$F0,$FC,$F8
DB $07,$C7,$07,$0F,$1F,$0F,$0F,$1F,$0F,$1F,$17,$0F,$0F,$07,$47,$03
DB $FF,$FE,$FF,$FE,$FF,$F8,$F8,$E0,$FC,$EC,$FC,$E8,$FC,$E8,$F4,$E8
DB $00,$01,$01,$00,$80,$00,$80,$00,$00,$00,$00,$00,$40,$00,$40,$00
DB $01,$8E,$03,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $60,$80,$C0,$00,$E0,$00,$80,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $50,$3F,$1B,$3C,$1D,$3E,$4C,$3F,$54,$3F,$50,$3F,$50,$3F,$48,$3F
DB $01,$3F,$98,$07,$86,$01,$84,$03,$8C,$03,$D8,$07,$7F,$80,$FF,$00
DB $F3,$FF,$E3,$FF,$63,$FF,$67,$FF,$47,$FF,$CF,$3F,$CF,$3F,$9F,$7F
DB $FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$EF,$FF,$F7,$FF
DB $FF,$FF,$7F,$FF,$7F,$FF,$7F,$FF,$7F,$FF,$7F,$FF,$7F,$FF,$7F,$FF
DB $FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $80,$00,$80,$00,$40,$80,$C0,$80,$80,$C0,$E0,$C0,$C0,$E0,$E0,$E0
DB $FF,$FF,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $7F,$3F,$3F,$7F,$7F,$7F,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $F8,$FC,$F8,$FC,$F9,$FC,$F8,$FD,$FD,$FD,$FD,$FF,$FF,$FF,$FF,$FF
DB $F1,$79,$FC,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $F2,$E8,$F0,$E8,$F8,$E0,$F8,$E0,$FC,$F8,$FC,$F8,$FF,$FC,$FD,$FE
DB $C0,$00,$C0,$00,$80,$00,$80,$00,$80,$00,$80,$00,$80,$00,$80,$00
DB $00,$00,$00,$00,$00,$00,$08,$00,$01,$0C,$0E,$1D,$00,$01,$01,$00
DB $6C,$1F,$0E,$3F,$5F,$3F,$9F,$7F,$7F,$FF,$7F,$FF,$FE,$FF,$8E,$7F
DB $F2,$0D,$F0,$0F,$78,$87,$B8,$C7,$B8,$C7,$BC,$C3,$3C,$C3,$7C,$83
DB $1F,$FF,$1F,$FF,$1F,$FF,$7F,$FF,$7F,$FF,$7F,$FF,$7F,$FF,$7F,$FF
DB $F3,$FF,$FB,$FF,$FB,$FF,$FF,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$ED,$FF
DB $7F,$FF,$7F,$FF,$7F,$FF,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FE,$FF,$FF,$FE
DB $C0,$E0,$80,$C0,$C0,$80,$40,$80,$80,$00,$80,$00,$80,$00,$00,$00
DB $FF,$FF,$F3,$FF,$F3,$FB,$F1,$FB,$F1,$F9,$F1,$F8,$F0,$F8,$F0,$F8
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$F7,$FB,$C3,$E7,$4F,$87,$1F,$0F
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FC,$FE
DB $F8,$FC,$F0,$F8,$F0,$E0,$E0,$C0,$C0,$80,$80,$00,$00,$00,$00,$00
DB $80,$00,$80,$00,$80,$00,$80,$00,$C0,$00,$40,$00,$40,$00,$30,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$02,$01,$05,$03,$0A,$07
DB $01,$00,$01,$00,$01,$00,$00,$00,$C0,$00,$D0,$00,$80,$FF,$E8,$07
DB $60,$1F,$30,$0F,$10,$0F,$10,$0F,$10,$0F,$43,$3F,$7F,$FF,$CF,$FF
DB $44,$83,$26,$C1,$26,$C1,$02,$E1,$32,$C1,$76,$81,$FE,$81,$8E,$C1
DB $7F,$FF,$7F,$FF,$3F,$FF,$3F,$FF,$3F,$FF,$1F,$FF,$1F,$FF,$1F,$FF
DB $E3,$FF,$E7,$FF,$DF,$FF,$BF,$FF,$BF,$FF,$7F,$FF,$7F,$FF,$7F,$FF
DB $FD,$FE,$FE,$FC,$FA,$FC,$FC,$F8,$F4,$F8,$F8,$F0,$E8,$F0,$F1,$E0
DB $00,$00,$00,$00,$00,$00,$00,$00,$06,$00,$04,$03,$17,$0F,$9F,$7F
DB $00,$00,$00,$00,$00,$00,$30,$00,$A0,$70,$F8,$F0,$F0,$F8,$F8,$FC
DB $E0,$F0,$F0,$80,$E0,$00,$A0,$C0,$F8,$F0,$F8,$F8,$F9,$F8,$FB,$F9
DB $0F,$1F,$3F,$1F,$3F,$1F,$0F,$1F,$07,$0F,$C3,$07,$E3,$F3,$F9,$FF
DB $FA,$FC,$F8,$F8,$F8,$F0,$F8,$E0,$E8,$F0,$FC,$F0,$FE,$F8,$FB,$FC
DB $20,$00,$10,$00,$10,$00,$10,$00,$08,$00,$0C,$00,$04,$00,$07,$00
DB $08,$06,$08,$04,$08,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $01,$00,$00,$00,$03,$00,$07,$00,$0E,$01,$03,$00,$00,$00,$00,$00
DB $E3,$1F,$F1,$0F,$F0,$0F,$60,$9F,$10,$EF,$F9,$06,$3F,$00,$3F,$00
DB $8E,$C1,$22,$C1,$02,$E1,$16,$E1,$94,$63,$0C,$F3,$0C,$F3,$00,$FF
DB $1F,$FF,$1F,$FF,$1F,$FF,$1F,$FF,$1E,$FF,$3E,$FF,$3E,$FF,$7F,$FE
DB $7F,$FF,$7F,$FF,$7F,$FF,$7F,$FF,$7F,$FF,$7F,$FF,$7F,$FF,$7F,$FF
DB $C2,$E1,$83,$C7,$EF,$9F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FE,$FC,$FD,$FE,$FF,$FE,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $01,$01,$01,$01,$01,$01,$81,$01,$81,$01,$C1,$81,$81,$C1,$E1,$C1
DB $FB,$F9,$FB,$FB,$FB,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FD,$FE,$FF,$FE,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $00,$00,$80,$00,$80,$00,$40,$80,$E0,$80,$A0,$C0,$D0,$E0,$F8,$E0
DB $07,$00,$07,$00,$07,$00,$07,$00,$03,$00,$03,$00,$03,$00,$03,$00
DB $A0,$00,$F0,$00,$F8,$00,$7C,$80,$8E,$70,$E3,$1C,$FE,$01,$FF,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$81,$00,$7F,$80,$0E,$F1
DB $3F,$00,$3C,$03,$1C,$03,$70,$0F,$61,$1F,$C3,$3F,$87,$7F,$1F,$FF
DB $3E,$FF,$3F,$FF,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $7E,$FF,$FF,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FD,$FF,$FD,$FF,$F9,$FF
DB $7F,$FF,$7F,$FF,$3F,$FF,$BF,$FF,$BF,$FF,$DF,$FF,$DF,$FF,$EF,$FF
DB $C1,$E1,$E1,$F1,$F9,$F1,$F1,$F9,$F9,$FD,$FF,$FD,$FD,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FD,$FE,$FA,$FC,$F4,$F8
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$7F,$3F,$5F,$3F
DB $FC,$F0,$F6,$F8,$FA,$FC,$FF,$FC,$FF,$FE,$FE,$FF,$FF,$FF,$FF,$FF
DB $03,$00,$03,$00,$01,$02,$07,$00,$85,$04,$CD,$0C,$4C,$8C,$FC,$9C
DB $FF,$00,$FB,$00,$FD,$00,$F4,$00,$FC,$00,$F2,$00,$F0,$00,$F8,$00
DB $81,$7F,$E3,$1F,$7C,$03,$3E,$01,$3E,$01,$1E,$01,$0F,$00,$0F,$00
DB $FF,$FF,$FF,$FF,$0F,$FF,$0F,$FF,$0F,$FF,$0F,$FF,$04,$FF,$00,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$BE,$FF,$7D,$FE
DB $F1,$FF,$E1,$FF,$D3,$EF,$F3,$CF,$FB,$87,$FF,$07,$FF,$0F,$FF,$0F
DB $F7,$FF,$FB,$FF,$FD,$FF,$FD,$FF,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$FF,$9F,$FF,$E1,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FE,$FC,$FC,$F8,$FC,$F0
DB $E0,$F0,$E0,$C0,$C0,$80,$C0,$00,$80,$00,$00,$00,$00,$00,$00,$00
DB $2F,$1F,$1F,$0F,$17,$0F,$0B,$07,$05,$03,$03,$01,$02,$01,$03,$00
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$F1,$FF,$ED,$FE,$CC,$3F
DB $FF,$FF,$FF,$FF,$FE,$FF,$C1,$FF,$3F,$FF,$2F,$FF,$CF,$3F,$7F,$FF
DB $F8,$FF,$C7,$FF,$3F,$FF,$8F,$FF,$BF,$CF,$AF,$DF,$FF,$FF,$FF,$FF
DB $7C,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC
DB $7C,$00,$3F,$00,$1F,$00,$1F,$00,$0F,$00,$0E,$01,$07,$00,$03,$00
DB $37,$00,$3F,$00,$3F,$00,$FE,$01,$FC,$03,$78,$87,$90,$6F,$80,$7E
DB $80,$7F,$00,$FF,$80,$7F,$28,$D7,$79,$87,$F0,$0F,$E0,$1C,$30,$00
DB $7B,$FC,$77,$F8,$6E,$F0,$98,$E0,$60,$80,$80,$00,$00,$00,$01,$00
DB $EF,$1F,$FF,$1F,$5F,$3F,$7F,$3F,$3F,$7F,$7F,$7F,$7F,$FF,$FF,$FF
DB $0F,$FF,$F0,$FF,$FF,$FF,$8F,$FF,$0F,$FF,$0F,$FF,$7F,$9F,$FF,$FF
DB $FF,$FF,$FF,$FF,$0F,$FF,$F1,$FF,$FE,$FF,$FB,$FF,$A7,$DB,$E0,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$3F,$FF,$C7,$FF,$F8,$FF,$7F,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$1F,$FF
DB $EC,$F0,$D0,$E0,$80,$E0,$00,$C0,$80,$00,$80,$00,$00,$80,$C0,$80
DB $00,$00,$00,$00,$00,$00,$00,$00,$01,$00,$03,$00,$07,$03,$0F,$07
DB $02,$00,$00,$06,$13,$05,$FF,$1F,$FF,$3F,$FF,$FF,$FF,$FF,$FF,$FF
DB $57,$0F,$7F,$3F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC
DB $01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$01,$01,$03,$03,$07,$07
DB $FC,$00,$F9,$00,$FA,$00,$38,$04,$00,$18,$F8,$F8,$F8,$FC,$FC,$FC
DB $40,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$01,$03,$01,$01,$03,$07,$03,$03,$07,$0F,$07,$07,$0F,$1F,$0F
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$27,$F7
DB $C7,$FB,$FD,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $CF,$B7,$E8,$D7,$93,$F7,$FB,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $E7,$FF,$F9,$FF,$FE,$FF,$FF,$BF,$CF,$C7,$B5,$CB,$F3,$F7,$FF,$FB
DB $FF,$FF,$FF,$FF,$FF,$FF,$7F,$FF,$9F,$FF,$EF,$FF,$F7,$FF,$FB,$FF
DB $A0,$C0,$C0,$E0,$C0,$E0,$E0,$F0,$F8,$F0,$F6,$F8,$FE,$F8,$FA,$FD
DB $1F,$0F,$1F,$3F,$7F,$3F,$7F,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$F5,$FB,$D3,$FD,$CB,$F5,$FF,$FF,$FF,$FF,$FF,$FF
DB $FC,$FC,$FC,$FC,$FC,$FC,$FC,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE
DB $0F,$07,$0F,$0F,$0F,$1F,$1F,$1F,$1F,$1F,$3F,$3F,$39,$3D,$39,$71
DB $FC,$FC,$FE,$FE,$FF,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF
DB $00,$00,$00,$00,$00,$00,$00,$00,$80,$00,$80,$80,$80,$00,$00,$00
DB $1F,$1F,$3F,$1F,$1F,$3F,$3F,$3F,$7F,$7F,$7F,$7F,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$97,$FF,$A9,$FE,$C5,$BB,$E4,$F3,$FE,$FF
DB $FF,$FF,$FE,$FF,$FE,$FE,$A1,$C7,$C6,$A6,$81,$FC,$EF,$FC,$FF,$FE
DB $47,$77,$97,$DF,$77,$FF,$1E,$09,$1E,$08,$1A,$E4,$E9,$16,$EF,$1F
DB $FF,$FF,$FF,$FF,$FF,$FF,$5B,$BF,$D3,$3B,$17,$0F,$7F,$FF,$FF,$FF
DB $FD,$FF,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$7F,$FF,$BF,$FF,$BF,$FF,$DF,$FF,$DF,$FF,$EF,$FF
DB $FD,$FF,$FD,$FF,$FD,$FF,$FD,$FF,$FD,$FF,$FD,$FF,$FB,$FF,$FB,$FF
DB $FE,$FE,$FE,$FE,$FE,$FE,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $63,$73,$C3,$63,$83,$C3,$83,$83,$83,$87,$87,$87,$87,$87,$87,$8F
DB $F8,$FE,$F8,$FE,$F8,$FE,$FA,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC
DB $00,$01,$01,$01,$03,$01,$03,$03,$03,$03,$07,$07,$07,$07,$07,$0F
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$F7,$EC,$DC,$CF,$9D,$CE,$80,$C2
DB $7F,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$3F,$27,$F7,$7F,$F3,$77,$C3
DB $EF,$FF,$EF,$FF,$EF,$FF,$EF,$FF,$F7,$FF,$F7,$FF,$F7,$FF,$F7,$FF
DB $FB,$FF,$FB,$FF,$FB,$FF,$FB,$FF,$FB,$FF,$F7,$FF,$F7,$FF,$F7,$FF
DB $8F,$8F,$8F,$8F,$8F,$8F,$9F,$9F,$9F,$9F,$DF,$9F,$DF,$9F,$BF,$DF
DB $FC,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE
DB $0F,$0F,$0F,$1F,$1F,$1F,$3F,$1F,$3F,$3F,$3F,$7F,$7F,$7F,$FF,$7F
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$C1,$DF,$99,$C1,$9D,$C3
DB $C1,$E0,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$A3,$13,$91,$C3
DB $03,$07,$AF,$DF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $F7,$FF,$F7,$FF,$F7,$FF,$F7,$FF,$FB,$FF,$FB,$FF,$FB,$FF,$FB,$FF
DB $F7,$FF,$F7,$FF,$F7,$FF,$EF,$FF,$EF,$FF,$EF,$FF,$EF,$FF,$DF,$FF
DB $BF,$FF,$BF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FE,$FE,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FE,$FF
DB $89,$C1,$AC,$C5,$A5,$CD,$CD,$ED,$D2,$E3,$F6,$C3,$F2,$06,$CC,$B3
DB $33,$03,$17,$1B,$3F,$3F,$3F,$3F,$2F,$1F,$0E,$0C,$0C,$0E,$7A,$8C
DB $FF,$FF,$FF,$FF,$33,$3F,$BB,$B3,$33,$33,$37,$3B,$20,$39,$30,$29
DB $BF,$BF,$FF,$BF,$BF,$FF,$FF,$F3,$F3,$F3,$F3,$F3,$0F,$E3,$6B,$C7
DB $FB,$FF,$FB,$FF,$FB,$FF,$FB,$FF,$FD,$FF,$FD,$FF,$FD,$FF,$FD,$FF
