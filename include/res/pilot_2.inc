; ///////////////////////
; //                   //
; //  File Attributes  //
; //                   //
; ///////////////////////

; Filename: pilot_2.png
; Pixel Width: 160px
; Pixel Height: 144px

; /////////////////
; //             //
; //  Constants  //
; //             //
; /////////////////

pilot_2_tile_map_size EQU $0168
pilot_2_tile_map_width EQU $14
pilot_2_tile_map_height EQU $12

pilot_2_tile_data_size EQU $0CA0
pilot_2_tile_count EQU $CA

; ////////////////
; //            //
; //  Map Data  //
; //            //
; ////////////////

pilot_2_map_data:
DB $00,$01,$00,$00,$02,$03,$04,$04,$05,$06,$00,$07,$08,$09,$04,$0A
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$0B,$0C,$0D,$0E,$0F
DB $10,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$11,$12,$13
DB $14,$15,$16,$17,$18,$19,$1A,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$1B,$1C,$14,$14,$1D,$1E,$1F,$20,$21,$22,$1A,$00,$00,$00,$00
DB $00,$00,$00,$00,$23,$24,$25,$14,$26,$27,$28,$29,$2A,$14,$2B,$2C
DB $00,$00,$00,$00,$00,$00,$00,$00,$2D,$2E,$2F,$30,$31,$32,$33,$34
DB $14,$14,$35,$36,$37,$00,$00,$00,$00,$00,$00,$38,$39,$3A,$3B,$3C
DB $3D,$3E,$3F,$40,$41,$42,$43,$00,$44,$00,$00,$00,$00,$00,$11,$45
DB $46,$47,$48,$49,$4A,$4B,$4C,$4D,$4E,$4F,$00,$50,$51,$00,$00,$00
DB $00,$00,$52,$53,$54,$55,$56,$57,$58,$59,$5A,$5B,$5C,$5D,$5E,$5F
DB $60,$00,$00,$00,$00,$00,$61,$62,$63,$64,$65,$66,$67,$68,$69,$6A
DB $6B,$6C,$6D,$00,$6E,$00,$00,$00,$00,$00,$6F,$70,$71,$72,$73,$74
DB $75,$76,$77,$78,$79,$7A,$7B,$00,$7C,$00,$00,$00,$00,$00,$00,$7D
DB $7E,$7F,$80,$81,$82,$83,$84,$85,$86,$87,$88,$11,$89,$00,$00,$00
DB $00,$00,$00,$8A,$8B,$8C,$8D,$8E,$8F,$90,$91,$92,$93,$94,$95,$96
DB $97,$00,$00,$00,$00,$00,$00,$11,$98,$99,$9A,$9B,$9C,$9D,$9E,$9F
DB $A0,$A1,$A2,$A3,$A4,$00,$00,$00,$00,$00,$00,$A5,$00,$00,$00,$00
DB $A6,$A7,$A8,$A9,$AA,$AB,$AC,$AD,$00,$00,$00,$00,$00,$00,$AE,$AF
DB $00,$00,$00,$B0,$B1,$B2,$B3,$00,$00,$00,$00,$B4,$B5,$00,$00,$00
DB $00,$B6,$B7,$00,$00,$00,$B8,$B9,$BA,$BA,$BB,$BC,$BD,$00,$00,$00
DB $BE,$00,$00,$00,$00,$BF,$00,$00,$00,$C0,$C1,$C2,$C3,$C4,$C5,$C6
DB $C7,$00,$00,$00,$C8,$C9,$00,$00

; /////////////////
; //             //
; //  Tile Data  //
; //             //
; /////////////////

pilot_2_tile_data:
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FD,$FD,$F9,$F9,$F1,$F1,$F9,$F9,$FD,$FD
DB $FF,$FF,$FF,$FF,$C3,$C3,$99,$99,$9F,$9F,$9F,$9F,$99,$99,$C3,$C3
DB $FF,$FF,$FF,$FF,$B9,$B9,$B9,$B9,$81,$81,$B9,$B9,$B9,$B9,$B9,$B9
DB $FF,$FF,$FF,$FF,$C3,$C3,$99,$99,$99,$99,$99,$99,$99,$99,$C3,$C3
DB $FF,$FF,$FF,$FF,$C3,$C3,$9F,$9F,$C3,$C3,$F1,$F1,$B1,$B1,$C3,$C3
DB $FF,$FF,$FF,$FF,$81,$81,$9F,$9F,$83,$83,$9F,$9F,$9F,$9F,$81,$81
DB $FF,$FF,$FF,$FF,$83,$83,$99,$99,$99,$99,$83,$83,$9F,$9F,$9F,$9F
DB $FF,$FF,$FF,$FF,$C3,$C3,$E7,$E7,$E7,$E7,$E7,$E7,$E7,$E7,$C3,$C3
DB $FF,$FF,$FF,$FF,$9F,$9F,$9F,$9F,$9F,$9F,$9F,$9F,$9F,$9F,$81,$81
DB $FF,$FF,$FF,$FF,$81,$81,$E7,$E7,$E7,$E7,$E7,$E7,$E7,$E7,$E7,$E7
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$F0
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$C0,$F6,$0F,$80,$7F
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$00,$FF,$1F,$3F,$FF,$1F,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$00,$FF,$FE,$F7,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$FF,$01,$FF,$F8,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$3F,$FF,$07
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE
DB $FF,$FF,$FF,$FF,$FF,$FE,$FF,$F8,$FF,$E3,$FE,$8F,$FC,$1F,$82,$7F
DB $FC,$C3,$E0,$1F,$C0,$3F,$80,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF
DB $00,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF
DB $1F,$FF,$3C,$DF,$00,$FF,$00,$FF,$10,$FF,$20,$FF,$12,$ED,$3E,$C1
DB $FF,$FF,$1F,$FF,$06,$FF,$07,$FF,$07,$FF,$1E,$FF,$1E,$FF,$BE,$7F
DB $FF,$FF,$FF,$FF,$CF,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF
DB $FF,$E1,$FF,$F8,$FF,$FE,$3F,$FF,$0F,$FF,$01,$FF,$00,$FF,$E0,$1F
DB $FF,$FF,$FF,$7F,$FF,$3F,$FF,$8F,$FF,$E3,$FF,$F1,$FF,$FC,$7F,$FE
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$FF,$3F
DB $FF,$FC,$FF,$F1,$FD,$F3,$FF,$E7,$FF,$CF,$FF,$9F,$FE,$3F,$FC,$3F
DB $80,$FF,$E0,$FF,$D0,$EF,$90,$CF,$58,$87,$7C,$83,$58,$A7,$1C,$E7
DB $3F,$C0,$3F,$C0,$5F,$A0,$5F,$A0,$7F,$80,$5F,$80,$9E,$01,$05,$83
DB $BC,$7F,$B8,$7F,$BB,$7C,$FB,$7C,$7B,$FC,$FC,$FF,$FF,$FF,$FF,$FF
DB $07,$F8,$DF,$20,$F3,$00,$F0,$00,$F0,$00,$FF,$00,$7F,$80,$BE,$C1
DB $F0,$0F,$F8,$07,$F8,$07,$B8,$47,$B8,$47,$F0,$0F,$60,$9F,$E0,$9F
DB $BF,$FF,$03,$FF,$83,$FF,$1E,$FF,$00,$FF,$09,$FF,$00,$FF,$00,$FF
DB $FF,$9F,$FF,$CF,$7F,$E7,$FF,$F3,$FF,$F9,$BF,$FC,$7F,$FE,$77,$FF
DB $FF,$FE,$FF,$FE,$FF,$F8,$FF,$F3,$FF,$F1,$F9,$F1,$FF,$E7,$FF,$E7
DB $F8,$7F,$F0,$7F,$E0,$FF,$E1,$FE,$E3,$FC,$E3,$FC,$C3,$FC,$CF,$F0
DB $14,$EF,$7C,$8F,$EC,$1F,$D0,$3F,$8E,$31,$DA,$21,$B2,$41,$E3,$00
DB $00,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$FF,$01,$FE,$00,$FF,$00,$FF
DB $0B,$87,$07,$8F,$0F,$9F,$03,$9F,$24,$9F,$20,$9F,$20,$9F,$60,$9F
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$F9,$FF,$F1,$FF,$F0,$FF,$E0,$FF
DB $BE,$C1,$F1,$CF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$FE,$7D,$FE
DB $80,$FF,$80,$FF,$C0,$BF,$C0,$BF,$00,$FF,$80,$7F,$80,$7F,$00,$FF
DB $1F,$FF,$0F,$FF,$2F,$FF,$0F,$FF,$0F,$FF,$0F,$FF,$0F,$FF,$0F,$FF
DB $FF,$9F,$FF,$DF,$FF,$CF,$FF,$E7,$FF,$E7,$FF,$F3,$FF,$F9,$FF,$F9
DB $FF,$EF,$FF,$CF,$FF,$DF,$EE,$9F,$EE,$9F,$C4,$BF,$C0,$3F,$90,$6F
DB $CF,$F0,$DF,$E0,$DF,$E0,$DF,$E0,$DF,$E0,$BF,$C0,$BF,$C0,$3F,$C0
DB $F2,$01,$E2,$01,$C2,$01,$82,$01,$82,$01,$82,$01,$02,$01,$01,$00
DB $00,$FF,$00,$FF,$00,$FF,$10,$EF,$82,$7D,$12,$ED,$3F,$C0,$3E,$C1
DB $00,$FF,$08,$F7,$63,$9C,$04,$FB,$09,$F6,$3E,$C1,$55,$AA,$7D,$82
DB $21,$9F,$03,$9F,$43,$9F,$C3,$1F,$42,$9F,$43,$9F,$D3,$0F,$D7,$0F
DB $E8,$FF,$F0,$FF,$C0,$FF,$00,$FF,$01,$FF,$03,$FF,$CF,$FF,$FF,$FF
DB $7A,$FD,$72,$FD,$F6,$F9,$E4,$FB,$C4,$F3,$B0,$E7,$C8,$E7,$C1,$CE
DB $0F,$FF,$1F,$FF,$1F,$FF,$1F,$FF,$3F,$FF,$3F,$FF,$3F,$FF,$7F,$FF
DB $FF,$FC,$FF,$FC,$FF,$FE,$FF,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$7F,$FF,$7F,$FF,$3F,$FF,$BF,$FF,$9F,$FF,$9F
DB $FF,$FF,$FF,$FF,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FE,$FF,$FF,$FF,$FF
DB $99,$6F,$BE,$4F,$96,$0F,$F7,$0F,$E7,$1F,$81,$73,$F0,$33,$F9,$8E
DB $7E,$80,$1C,$E0,$5E,$E0,$E7,$FF,$FF,$FF,$FF,$FF,$3F,$7F,$5F,$3F
DB $00,$01,$01,$00,$00,$00,$03,$FC,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $9E,$61,$FD,$02,$47,$38,$C8,$30,$FA,$FD,$FF,$FF,$F8,$FF,$C0,$FF
DB $11,$EE,$FF,$00,$FF,$00,$07,$00,$60,$87,$FC,$FF,$00,$FF,$7F,$80
DB $DF,$0F,$DF,$0F,$CF,$0F,$CD,$0E,$26,$C8,$2C,$C0,$00,$FF,$C3,$00
DB $E0,$FF,$F0,$EF,$38,$C7,$F2,$0C,$FC,$00,$78,$00,$30,$C0,$00,$FF
DB $10,$CF,$00,$9F,$A4,$1B,$26,$19,$A4,$5B,$3C,$03,$03,$00,$80,$01
DB $00,$FF,$00,$FF,$00,$FF,$10,$EF,$80,$7F,$80,$7F,$00,$FF,$48,$B7
DB $00,$FF,$10,$EF,$00,$FF,$00,$FF,$01,$FF,$01,$FF,$03,$FF,$83,$7F
DB $7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$DF,$FF,$DF,$FF,$CF,$FF,$CF,$FF,$EF,$FF,$EF,$FF,$EF,$FF,$EF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$00,$8F,$71
DB $FF,$C6,$FF,$E3,$FF,$CF,$EF,$9F,$DF,$3F,$BF,$7F,$FF,$7F,$FF,$FF
DB $0F,$7F,$FF,$FF,$FE,$FF,$FB,$FF,$FF,$FF,$FF,$FF,$3B,$FF,$7A,$FF
DB $FE,$FF,$E7,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$FF,$7F,$FF
DB $04,$FF,$F9,$FE,$FE,$FF,$FC,$FF,$FC,$FF,$F8,$FF,$F0,$FF,$E0,$FF
DB $00,$FF,$C3,$00,$00,$FF,$3E,$FF,$7F,$FF,$FF,$FF,$DF,$FF,$08,$FF
DB $50,$80,$FE,$01,$46,$B9,$78,$80,$38,$C0,$B8,$40,$BC,$40,$EC,$10
DB $2C,$03,$73,$80,$10,$0F,$60,$1C,$7B,$07,$7B,$07,$57,$2B,$D9,$27
DB $6C,$F3,$C3,$3F,$78,$87,$02,$FD,$F8,$F7,$FC,$FF,$EC,$FF,$FC,$FF
DB $3C,$C3,$F0,$FF,$7F,$FF,$1F,$FF,$07,$FF,$A3,$7F,$FE,$FF,$7F,$FF
DB $03,$FF,$07,$FF,$DF,$EF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF,$FE,$FE,$FC,$FE,$FE,$FF,$EF,$EF
DB $FF,$EF,$FF,$EF,$FF,$EF,$FF,$EF,$7F,$EF,$FF,$6F,$7F,$EF,$FF,$EF
DB $FF,$FE,$FF,$FE,$FF,$FF,$FF,$FE,$FF,$FE,$FF,$FC,$FE,$F9,$FF,$F9
DB $33,$CF,$91,$7F,$9B,$77,$B7,$7F,$7F,$F7,$FF,$E7,$FF,$EF,$FF,$CF
DB $FF,$FF,$FF,$FE,$FE,$FE,$FE,$FF,$FD,$FF,$FD,$FF,$FF,$FD,$FB,$FD
DB $78,$FF,$F8,$FF,$F8,$FF,$F9,$FE,$F4,$F8,$F0,$F8,$F0,$F0,$F0,$F0
DB $3F,$FF,$3F,$FF,$7F,$FF,$7F,$FF,$BF,$7F,$3F,$7F,$7F,$3F,$1F,$3F
DB $E0,$FF,$E3,$FC,$E3,$FC,$E7,$F8,$E7,$F8,$EF,$F0,$EF,$F0,$F7,$F8
DB $FF,$00,$FF,$00,$9F,$00,$3F,$00,$3F,$00,$FC,$00,$F0,$00,$C0,$00
DB $FF,$00,$FF,$00,$F7,$08,$E7,$18,$AF,$10,$58,$20,$70,$00,$60,$00
DB $CF,$30,$8F,$70,$07,$F8,$1F,$E0,$9F,$60,$49,$30,$20,$18,$30,$08
DB $80,$7F,$FE,$01,$FF,$00,$FF,$00,$FF,$00,$FF,$00,$7F,$00,$1F,$00
DB $3F,$FF,$3F,$FF,$3F,$FF,$3F,$FF,$3F,$FF,$BF,$7F,$BF,$7F,$BF,$7F
DB $EF,$FF,$FB,$FF,$FF,$FF,$FF,$FF,$FD,$FF,$FD,$FF,$FD,$FF,$FA,$FF
DB $FF,$FF,$FE,$FF,$FE,$FF,$FF,$FF,$FF,$FF,$7F,$FF,$7F,$FF,$7F,$FF
DB $87,$E7,$47,$27,$3F,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$EF,$FF,$EF,$FF,$EF,$FF,$CF,$FF,$CF,$FF,$DF,$FF,$DF,$FF,$DF
DB $FF,$F3,$FF,$F3,$FF,$F3,$FF,$F7,$FF,$E7,$FF,$EC,$FF,$CC,$FF,$C1
DB $FF,$CF,$FF,$CF,$BF,$DF,$FF,$9F,$FF,$1F,$FF,$1F,$FF,$9F,$FF,$9F
DB $F9,$FF,$FD,$FB,$F9,$FB,$F9,$FB,$F0,$FA,$F8,$F0,$F0,$F0,$FC,$F0
DB $E0,$F0,$E0,$E0,$E0,$E0,$E0,$F0,$F0,$F0,$F8,$F0,$70,$F8,$F9,$78
DB $3F,$1F,$2F,$1F,$0F,$1F,$19,$0F,$10,$0F,$02,$0D,$03,$0C,$C8,$C4
DB $F7,$F8,$F7,$F8,$F7,$F8,$F3,$FC,$F3,$FC,$73,$FC,$73,$FC,$73,$7C
DB $80,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$80,$00
DB $65,$18,$7F,$00,$20,$00,$00,$00,$00,$00,$00,$00,$60,$00,$FD,$00
DB $B0,$48,$38,$C0,$30,$00,$00,$00,$00,$00,$30,$00,$78,$00,$FC,$00
DB $0F,$00,$03,$00,$03,$00,$03,$00,$03,$00,$03,$00,$07,$00,$07,$00
DB $BF,$7F,$3F,$FF,$3F,$FF,$3F,$FF,$3F,$FF,$7F,$FF,$7F,$FF,$7F,$FF
DB $FA,$FF,$F0,$FF,$E4,$FF,$E8,$FF,$E0,$FF,$DC,$E3,$D0,$E1,$B1,$C0
DB $7F,$FF,$7F,$FF,$FD,$FF,$FD,$FF,$FD,$FF,$FF,$FD,$FD,$FF,$FD,$FF
DB $FF,$DF,$FF,$DF,$FF,$DF,$FF,$9F,$FF,$9F,$FF,$9F,$FF,$9F,$FF,$DF
DB $FF,$C7,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$9F,$FF,$9F,$FF,$9F,$FF,$9F,$FF,$DF,$FF,$CF,$FF,$CF,$FF,$EF
DB $FC,$F0,$D4,$F0,$B0,$F0,$B0,$F0,$A0,$F0,$E0,$F0,$E0,$F0,$E0,$F0
DB $7B,$79,$7C,$79,$3C,$79,$38,$3C,$38,$3C,$1C,$3C,$1E,$3C,$3C,$1E
DB $80,$C4,$88,$C6,$C6,$C2,$47,$02,$04,$03,$33,$01,$3B,$31,$0A,$71
DB $73,$3C,$77,$18,$13,$3C,$1B,$3C,$DB,$3C,$19,$FE,$FD,$FE,$FC,$FF
DB $07,$00,$0E,$01,$03,$01,$81,$00,$80,$00,$80,$00,$C0,$00,$C0,$00
DB $C0,$3F,$FA,$E0,$E5,$FA,$7F,$FF,$BF,$7F,$80,$7F,$4B,$30,$7F,$00
DB $0E,$F0,$3A,$7C,$9D,$7E,$9D,$FE,$FE,$FC,$FA,$FC,$9A,$7C,$84,$78
DB $0E,$01,$0E,$01,$1E,$01,$1E,$01,$0E,$01,$0E,$01,$1E,$01,$1D,$03
DB $7F,$FF,$7F,$FF,$73,$FF,$62,$FF,$43,$FE,$C0,$FE,$90,$EE,$BA,$C4
DB $F1,$80,$11,$80,$A0,$00,$20,$00,$64,$01,$01,$01,$03,$01,$61,$03
DB $FD,$FF,$FD,$FF,$F9,$FF,$F9,$F3,$F1,$F3,$F1,$E3,$E1,$E3,$C3,$E3
DB $FF,$DF,$FF,$DF,$FF,$DF,$FF,$DF,$FF,$DF,$FF,$DF,$FF,$DF,$FF,$DF
DB $FF,$EF,$FF,$E7,$FF,$F7,$FF,$F3,$FF,$F9,$FF,$F9,$FF,$FC,$FF,$FE
DB $E4,$F0,$F0,$F4,$E4,$F7,$A7,$F7,$B7,$F7,$B7,$F7,$FF,$F7,$FF,$F7
DB $1C,$1E,$3E,$1E,$FF,$FE,$FE,$FF,$FF,$FF,$F7,$F7,$A7,$77,$37,$6F
DB $73,$38,$33,$38,$03,$00,$02,$00,$02,$08,$88,$1C,$13,$BC,$25,$9E
DB $FE,$FF,$FF,$FF,$7F,$FF,$7F,$FF,$FF,$7F,$FF,$7F,$BF,$7F,$BF,$7F
DB $E0,$00,$60,$80,$38,$C0,$9C,$E0,$CF,$F0,$E7,$F8,$E1,$FE,$F0,$FF
DB $2F,$00,$00,$00,$00,$00,$00,$00,$00,$00,$80,$00,$C0,$00,$F0,$00
DB $FC,$00,$7C,$00,$00,$08,$13,$00,$10,$03,$07,$10,$27,$00,$77,$00
DB $39,$07,$33,$0F,$77,$0E,$07,$1F,$78,$87,$F8,$07,$EE,$01,$C9,$00
DB $F1,$8C,$61,$9C,$8C,$78,$EA,$F8,$14,$F0,$08,$F8,$05,$FC,$07,$FF
DB $23,$71,$B2,$7D,$2F,$FE,$7E,$FF,$07,$0F,$07,$0F,$0E,$0F,$0F,$1E
DB $C3,$C3,$87,$C3,$43,$07,$03,$47,$07,$67,$67,$2F,$37,$2F,$3F,$2F
DB $FF,$DF,$FF,$DF,$FF,$DF,$FF,$DF,$FF,$9F,$FF,$BF,$FF,$3F,$FF,$7F
DB $FF,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$77,$FF,$37,$FB,$B7,$F3,$9F,$F2,$CF,$FB,$E7,$FD,$F3,$FF,$F8
DB $2F,$0F,$0F,$1F,$3F,$1F,$DF,$3F,$3F,$FF,$3F,$C7,$FF,$90,$FF,$3F
DB $EC,$9E,$E8,$80,$B8,$C0,$D7,$C8,$DB,$CC,$D9,$EE,$EE,$73,$FC,$1F
DB $7F,$3F,$FF,$3F,$DF,$3F,$DF,$3F,$DF,$3F,$CF,$3F,$EF,$1F,$2B,$DB
DB $F8,$FF,$CC,$FF,$C6,$FF,$81,$FF,$8E,$F1,$8F,$F0,$8F,$F0,$0F,$F0
DB $3F,$C0,$0F,$F0,$00,$FF,$80,$FF,$60,$FF,$C1,$3F,$FF,$00,$F3,$00
DB $CF,$20,$3F,$E0,$08,$FF,$1E,$FF,$7F,$FF,$1D,$E3,$FC,$03,$3C,$03
DB $C9,$00,$FB,$00,$00,$FF,$50,$9F,$F8,$FF,$FC,$FF,$FE,$FC,$7B,$FF
DB $00,$FF,$82,$7C,$02,$FC,$00,$FC,$1D,$FE,$0D,$FD,$7F,$3F,$FB,$FF
DB $4E,$8E,$9E,$1E,$9F,$1F,$AF,$0F,$9F,$2F,$BF,$3F,$9F,$1F,$7F,$FF
DB $1F,$2F,$0F,$3F,$FF,$FF,$FE,$FF,$FE,$FF,$9E,$FF,$DC,$BC,$F0,$BC
DB $FF,$FE,$FF,$FC,$FF,$FC,$7F,$7E,$7F,$7F,$FF,$FF,$FF,$7F,$71,$FF
DB $FF,$7F,$FF,$FF,$FF,$7F,$FF,$3F,$FF,$87,$FF,$F1,$FF,$FD,$FF,$FD
DB $FF,$FF,$FF,$FF,$FF,$FE,$FF,$F8,$FF,$E3,$FF,$8F,$FF,$3F,$FF,$7F
DB $FF,$FF,$FF,$F0,$FF,$07,$FF,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FB,$04,$FD,$7E,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $27,$DB,$13,$EF,$05,$F9,$04,$FB,$C3,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $0F,$F0,$0F,$F0,$0F,$F0,$07,$F8,$0F,$F0,$8F,$F0,$CF,$F0,$E7,$F8
DB $80,$00,$80,$00,$80,$00,$80,$00,$80,$00,$01,$00,$01,$00,$C3,$00
DB $3C,$03,$38,$07,$78,$07,$70,$0F,$70,$0F,$E0,$1F,$F8,$07,$F8,$07
DB $79,$FB,$38,$FF,$19,$FF,$10,$F7,$10,$FF,$30,$EF,$30,$EF,$E1,$FE
DB $9F,$FF,$17,$FF,$1F,$E7,$07,$FF,$4F,$BF,$DF,$3F,$AF,$7F,$6F,$FF
DB $FF,$FF,$BF,$FF,$BF,$FF,$B5,$FB,$BC,$F3,$B8,$F7,$B1,$FF,$FD,$FF
DB $F8,$FC,$FC,$FC,$78,$FD,$70,$F0,$70,$F8,$FF,$F0,$FF,$E7,$FF,$EF
DB $F2,$F9,$FB,$F3,$F7,$FB,$FB,$FF,$FF,$07,$FF,$71,$FF,$FC,$FF,$FE
DB $FF,$FD,$FF,$FD,$FF,$FD,$FF,$FD,$FF,$F9,$FF,$F9,$FF,$73,$FF,$07
DB $FF,$FC,$FF,$F9,$FF,$F3,$FF,$E7,$FF,$CF,$FF,$CF,$FF,$9F,$FF,$3F
DB $F8,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $5F,$A0,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $C3,$3F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $E3,$FC,$F6,$E9,$FD,$E3,$F0,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $7F,$FF,$FF,$FF,$FF,$FF,$F8,$FF,$03,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $BF,$FF,$B9,$FF,$FF,$3F,$DF,$3F,$5F,$BF,$9F,$1F,$3F,$FF,$FF,$FF
DB $FF,$8F,$FF,$1F,$FF,$C7,$FF,$F0,$FF,$FC,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$3F,$FF,$1F,$FF,$CF,$FF,$CF
DB $FF,$FE,$FF,$FC,$FF,$F8,$FF,$F1,$FF,$E3,$FF,$C7,$FF,$8F,$FF,$1F
DB $FF,$7F,$FF,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$F8,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$F9,$FE,$C4,$FC,$40,$80
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$8F,$FF,$10,$3F,$00,$00
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$07,$FF,$03,$0F
DB $FF,$E7,$FF,$F7,$FF,$F3,$FF,$F9,$FF,$F9,$FF,$FC,$FF,$FC,$FF,$FE
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F
DB $FF,$FE,$FF,$FE,$FF,$F8,$FF,$F9,$FF,$F3,$FF,$E7,$FF,$CF,$FF,$9F
DB $FF,$3F,$FF,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FA,$FC,$F8,$F8
DB $F4,$FC,$E8,$F8,$D0,$F0,$A0,$C0,$00,$80,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $01,$03,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $FF,$FF,$7F,$FF,$4F,$7F,$33,$3F,$0D,$07,$00,$03,$01,$01,$00,$00
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$FF,$BF,$FF
DB $FF,$7F,$FF,$3F,$FF,$9F,$FF,$9F,$FF,$CF,$FF,$CF,$FF,$E7,$FF,$F7
DB $FF,$3F,$FF,$7F,$FF,$3F,$FF,$1F,$FF,$8F,$FF,$C7,$FF,$F3,$FF,$F9
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FF
DB $F0,$F0,$E0,$E0,$C0,$C0,$80,$C0,$C0,$80,$00,$80,$00,$80,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$03,$01,$06,$07,$0E,$0F
DB $00,$00,$00,$00,$00,$00,$01,$00,$42,$05,$F2,$00,$93,$0C,$FE,$1D
DB $00,$00,$42,$5C,$18,$27,$E7,$51,$73,$FD,$D3,$DF,$DC,$DD,$EA,$F6
DB $00,$00,$00,$00,$00,$00,$00,$00,$80,$F0,$AD,$1E,$97,$0F,$0B,$07
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$80,$80,$F8,$F0
DB $3F,$7F,$3F,$7F,$1F,$1F,$1F,$1F,$1F,$1F,$1F,$0F,$3F,$0F,$1F,$0F
DB $FF,$F3,$FF,$F9,$FF,$F9,$FF,$FC,$FF,$FC,$FF,$FE,$FF,$FF,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$FF,$7F,$FF,$3F
