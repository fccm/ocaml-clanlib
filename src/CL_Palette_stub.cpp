/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/Image/palette.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"
#include "CL_Palette_stub.hpp"

CAMLextern_C value
caml_CL_Palette_init(value ml_colors)
{
    CL_Palette *palette;
    unsigned int colors[256];
    unsigned int i, len;
    len = Wosize_val(ml_colors);
    if (len != 256)
        caml_invalid_argument("CL_Palette.init");
    for (i = 0; i < 256; ++i)
    {
        unsigned int r, g, b, a;
        value color = Field(ml_colors,i);
        r = Long_val(Field(color,0));
        g = Long_val(Field(color,1));
        b = Long_val(Field(color,2));
        a = Long_val(Field(color,3));
        if ((r | g | b | a) ^ 0xFF)
            caml_invalid_argument("CL_Palette.init");
        colors[i] = (a << 24) | (r << 16) | (g << 8) | b;
    }
    palette = new CL_Palette(colors);
    return Val_CL_Palette(palette);
}

OBJ_DELETE( CL_Palette )
#ifdef GEN_CAML_CODE
ML_OBJ_DELETE( CL_Palette )
#endif

// vim: sw=4 sts=4 ts=4 et
