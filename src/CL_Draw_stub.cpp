/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/2D/draw.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"
#include "CL_Color_stub.hpp"
#include "CL_Point_stub.hpp"
#include "CL_GraphicContext_stub.hpp"
#include "CL_Gradient_stub.hpp"
#include "CL_Quad_stub.hpp"
#include "CL_Texture_stub.hpp"

static inline void xy_of_pos(float *x, float *y, value pos)
{
    *x = Double_val(Field(pos,0));
    *y = Double_val(Field(pos,1));
}

CAMLextern_C value
caml_CL_Draw_point(value gc, value pos, value color)
{
    float x, y;
    xy_of_pos(&x, &y, pos);
    CL_Draw::point(*CL_GraphicContext_val(gc), x, y, CL_Colorf_val(color));
    return Val_unit;
}

CAMLextern_C value
caml_CL_Draw_box(value gc, value pos1, value pos2, value color)
{
    float x1, y1, x2, y2;
    xy_of_pos(&x1, &y1, pos1);
    xy_of_pos(&x2, &y2, pos2);
    CL_Draw::box(
            *CL_GraphicContext_val(gc),
            x1, y1, x2, y2, CL_Colorf_val(color));
    return Val_unit;
}

CAMLextern_C value
caml_CL_Draw_line(value gc, value pos1, value pos2, value color)
{
    float x1, y1, x2, y2;
    xy_of_pos(&x1, &y1, pos1);
    xy_of_pos(&x2, &y2, pos2);
    CL_Draw::line(
            *CL_GraphicContext_val(gc),
            x1, y1, x2, y2, CL_Colorf_val(color));
    return Val_unit;
}

CAMLextern_C value
caml_CL_Draw_fill(value gc, value pos1, value pos2, value color)
{
    float x1, y1, x2, y2;
    xy_of_pos(&x1, &y1, pos1);
    xy_of_pos(&x2, &y2, pos2);
    CL_Draw::fill(
            *CL_GraphicContext_val(gc),
            x1, y1, x2, y2, CL_Colorf_val(color));
    return Val_unit;
}

CAMLextern_C value
caml_CL_Draw_circle(value gc, value center, value radius, value color)
{
    float center_x, center_y;
    xy_of_pos(&center_x, &center_y, center);
    CL_Draw::circle(
            *CL_GraphicContext_val(gc),
            center_x, center_y, Double_val(radius), CL_Colorf_val(color));
    return Val_unit;
}

CAMLextern_C value
caml_CL_Draw_gradient_fill(value gc, value pos1, value pos2, value gradient)
{
    float x1, y1, x2, y2;
    xy_of_pos(&x1, &y1, pos1);
    xy_of_pos(&x2, &y2, pos2);
    CL_Draw::gradient_fill(
            *CL_GraphicContext_val(gc),
            x1, y1, x2, y2,
            CL_Gradient_val(gradient));
    return Val_unit;
}

CAMLextern_C value
caml_CL_Draw_gradient_circle(
        value gc, value center, value centergradient,
        value radius, value gradient, value unit)
{
    if (centergradient == Val_none)
        CL_Draw::gradient_circle(
                *CL_GraphicContext_val(gc),
                CL_Pointf_val(center),
                Float_val(radius), CL_Gradient_val(gradient));
    else
        CL_Draw::gradient_circle(
                *CL_GraphicContext_val(gc),
                CL_Pointf_val(center), CL_Pointf_val(Some_val(centergradient)),
                Float_val(radius), CL_Gradient_val(gradient));

    return Val_unit;
}

CAMLextern_C value
caml_CL_Draw_gradient_circle_bc(value *argv, int argn)
{
    return caml_CL_Draw_gradient_circle(
            argv[0], argv[1], argv[2], argv[3], argv[4], argv[5]);
}

CAMLextern_C value
caml_CL_Draw_texture(value gc, value texture, value quad)
{
    CL_Draw::texture(
        *CL_GraphicContext_val(gc),
        *CL_Texture_val(texture),
        CL_Quadf_val(quad));
    // This is a convenience function.
    // If using repeatedly, it is a lot faster to use CL_PrimitivesArray with
    // gc.draw_primitives instead
    /*
    CL_Draw::texture(
        *CL_GraphicContext_val(gc),
        *CL_Texture_val(texture),
        CL_Quadf_val(quad),
        CL_Colorf &color = CL_Colorf::white,
        CL_Rectf &texture_unit1_coords = CL_Rectf(0.0, 0.0, 1.0, 1.0));
    */
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
