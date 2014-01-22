/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/Font/font_vector.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_Font_Vector_stub.hpp"
#include "CL_FontDescription_stub.hpp"
#include "CL_GraphicContext_stub.hpp"
#include "CL_Color_stub.hpp"
#include "CL_Size_stub.hpp"

CAMLextern_C value
caml_CL_Font_Vector_init(value typeface_name, value height)
{
    CL_Font_Vector *font = new CL_Font_Vector(
        CL_StringRef_val(typeface_name), Int_val(height));
    return Val_CL_Font_Vector(font);
}

CAMLextern_C value
caml_CL_Font_Vector_of_desc(value desc)
{
    CL_Font_Vector *font = new CL_Font_Vector(
        *CL_FontDescription_val(desc));
    return Val_CL_Font_Vector(font);
}

CAMLextern_C value
caml_CL_Font_Vector_delete(value font)
{
    delete CL_Font_Vector_val(font);
    nullify_ptr(font);
    return Val_unit;
}

CAMLextern_C value
caml_CL_Font_Vector_draw_glyphs(value font,
        value gc, value text, value pos, value length,
        value filled, value color)
{
    int glyphs[128];
    float interspacing_x[128];
    float interspacing_y[128];

    CL_Font_Vector_val(font)->get_glyphs(
        CL_StringRef_val(text),
        glyphs,
        interspacing_x,
        interspacing_y);

    CL_Font_Vector_val(font)->draw_glyphs(
        *CL_GraphicContext_val(gc),
        Float_val(Field(pos,0)),
        Float_val(Field(pos,1)),
        glyphs,
        Int_val(length),
        Bool_val(filled),
        interspacing_x,
        interspacing_y,
        CL_Colorf_val(color));

    return Val_unit;
}

CAMLextern_C value
caml_CL_Font_Vector_draw_glyphs_bc(value *argv, int argn)
{
    return caml_CL_Font_Vector_draw_glyphs(
            argv[0], argv[1], argv[2], argv[3],
            argv[4], argv[5], argv[6]);
}

CAMLextern_C value
caml_CL_Font_Vector_get_text_size(value font, value gc, value text)
{
    CL_Size size =
        CL_Font_Vector_val(font)->get_text_size(
                *CL_GraphicContext_val(gc),
                CL_StringRef_val(text));

    return Val_CL_Size(size);
}

CAMLextern_C value
caml_CL_Font_Vector_draw_text(value font, value gc, value pos, value text, value color, value unit)
{
    float x = Double_val(Field(pos,0));
    float y = Double_val(Field(pos,1));
    if (color == Val_none) {
        CL_Font_Vector_val(font)->draw_text(
                *CL_GraphicContext_val(gc), x, y,
                CL_StringRef_val(text));
    } else {
        CL_Font_Vector_val(font)->draw_text(
                *CL_GraphicContext_val(gc), x, y,
                CL_StringRef_val(text),
                CL_Colorf_val(Some_val(color)));
    }
    return Val_unit;
}

CAMLextern_C value
caml_CL_Font_Vector_draw_text_bc(value *argv, int argn)
{
    return caml_CL_Font_Vector_draw_text(
            argv[0], argv[1], argv[2], argv[3], argv[4], argv[5]);
}

// vim: sw=4 sts=4 ts=4 et
