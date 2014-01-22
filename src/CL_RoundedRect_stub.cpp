/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/2D/rounded_rect.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"
#include "CL_RoundedRect_stub.hpp"
#include "CL_GraphicContext_stub.hpp"
#include "CL_Size_stub.hpp"
#include "CL_Point_stub.hpp"
#include "CL_Color_stub.hpp"

CAMLextern_C value
caml_CL_RoundedRect_init(value size, value rounding_in_pixels)
{
    CL_RoundedRect *rrect =
        new CL_RoundedRect(
                CL_Sizef_val(size),
                Double_val(rounding_in_pixels));

    return Val_CL_RoundedRect(rrect);
}

CAMLextern_C value
caml_CL_RoundedRect_delete(value rrect)
{
    delete CL_RoundedRect_val(rrect);
    nullify_ptr(rrect);
    return Val_unit;
}

CAMLextern_C value
caml_CL_RoundedRect_draw(value rrect, value gc, value position, value color)
{
    CL_RoundedRect_val(rrect)->draw(
            *CL_GraphicContext_val(gc),
            CL_Pointf_val(position),
            CL_Colorf_val(color)/*,
            CL_Origin origin=origin_top_left*/);

    return Val_unit;
}

/*
    void draw(
        CL_GraphicContext &gc,
        const CL_Pointf &position,
        const CL_Gradient &gradient,
        CL_Origin origin=origin_top_left);

    /// \brief Fill the rectangle
    void fill(
        CL_GraphicContext &gc,
        const CL_Pointf &position,
        const CL_Colorf &color,
        CL_Origin origin=origin_top_left);

    void fill(
        CL_GraphicContext &gc,
        const CL_Pointf &position,
        const CL_Gradient &gradient,
        CL_Origin origin=origin_top_left);
*/


CAMLextern_C value
caml_CL_RoundedRect_set_rounding(value rrect, value offset)
{
    CL_RoundedRect_val(rrect)->set_rounding(Double_val(offset));
    return Val_unit;
}

CAMLextern_C value
caml_CL_RoundedRect_set_rounding_top_left(value rrect, value offset)
{
    CL_RoundedRect_val(rrect)->set_rounding_top_left(
            CL_Sizef_val(offset));
    return Val_unit;
}

CAMLextern_C value
caml_CL_RoundedRect_set_rounding_top_right(value rrect, value offset)
{
    CL_RoundedRect_val(rrect)->set_rounding_top_right(
            CL_Sizef_val(offset));
    return Val_unit;
}

CAMLextern_C value
caml_CL_RoundedRect_set_rounding_bottom_left(value rrect, value offset)
{
    CL_RoundedRect_val(rrect)->set_rounding_bottom_left(
            CL_Sizef_val(offset));
    return Val_unit;
}

CAMLextern_C value
caml_CL_RoundedRect_set_rounding_bottom_right(value rrect, value offset)
{
    CL_RoundedRect_val(rrect)->set_rounding_bottom_right(
            CL_Sizef_val(offset));
    return Val_unit;
}

CAMLextern_C value
caml_CL_RoundedRect_set_rounding_offsets(value rrect, value offsets)
{
    CL_RoundedRect_val(rrect)->set_rounding_top_left(
            CL_Sizef_val(Field(offsets,0)));

    CL_RoundedRect_val(rrect)->set_rounding_top_right(
            CL_Sizef_val(Field(offsets,1)));

    CL_RoundedRect_val(rrect)->set_rounding_bottom_left(
            CL_Sizef_val(Field(offsets,2)));

    CL_RoundedRect_val(rrect)->set_rounding_bottom_right(
            CL_Sizef_val(Field(offsets,3)));

    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
