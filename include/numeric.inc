        IF      !DEF(NUMERIC_INC)
NUMERIC_INC  SET  1

chr_NUMERIC: MACRO
        ; Define . and X to be 0 and 1
        PUSHO
        OPT     b.X

        DB      %.XXXXX..
        DB      %XX...XX.
        DB      %XX..XXX.
        DB      %XX.XXXX.
        DB      %XXXX.XX.
        DB      %XXX..XX.
        DB      %.XXXXX..
        DB      %........

        DB      %..XX....
        DB      %.XXX....
        DB      %..XX....
        DB      %..XX....
        DB      %..XX....
        DB      %..XX....
        DB      %XXXXXX..
        DB      %........

        DB      %.XXXX...
        DB      %XX..XX..
        DB      %....XX..
        DB      %..XXX...
        DB      %.XX.....
        DB      %XX..XX..
        DB      %XXXXXX..
        DB      %........

        DB      %.XXXX...
        DB      %XX..XX..
        DB      %....XX..
        DB      %..XXX...
        DB      %....XX..
        DB      %XX..XX..
        DB      %.XXXX...
        DB      %........

        DB      %...XXX..
        DB      %..XXXX..
        DB      %.XX.XX..
        DB      %XX..XX..
        DB      %XXXXXXX.
        DB      %....XX..
        DB      %...XXXX.
        DB      %........

        DB      %XXXXXX..
        DB      %XX......
        DB      %XXXXX...
        DB      %....XX..
        DB      %....XX..
        DB      %XX..XX..
        DB      %.XXXX...
        DB      %........

        DB      %..XXX...
        DB      %.XX.....
        DB      %XX......
        DB      %XXXXX...
        DB      %XX..XX..
        DB      %XX..XX..
        DB      %.XXXX...
        DB      %........

        DB      %XXXXXX..
        DB      %XX..XX..
        DB      %....XX..
        DB      %...XX...
        DB      %..XX....
        DB      %..XX....
        DB      %..XX....
        DB      %........

        DB      %.XXXX...
        DB      %XX..XX..
        DB      %XX..XX..
        DB      %.XXXX...
        DB      %XX..XX..
        DB      %XX..XX..
        DB      %.XXXX...
        DB      %........

        DB      %.XXXX...
        DB      %XX..XX..
        DB      %XX..XX..
        DB      %.XXXXX..
        DB      %....XX..
        DB      %...XX...
        DB      %.XXX....
        DB      %........

        DB      %........
        DB      %..XX....
        DB      %..XX....
        DB      %........
        DB      %........
        DB      %..XX....
        DB      %..XX....
        DB      %........
        
        POPO

        ENDM
        ENDC