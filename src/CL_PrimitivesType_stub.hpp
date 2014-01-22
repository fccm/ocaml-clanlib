/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/Render/graphic_context.h>
#include "cl_caml_incs.hpp"

#ifndef _CL_PRIMITIVESTYPE_INC
#define _CL_PRIMITIVESTYPE_INC

// Conversions of enum CL_PrimitivesType:
static const CL_PrimitivesType caml_table_CL_PrimitivesType[] = {
    cl_points,
    cl_line_strip,
    cl_line_loop,
    cl_lines,
    cl_triangle_strip,
    cl_triangle_fan,
    cl_triangles,
};

#define CL_PrimitivesType_val(v) \
    (caml_table_CL_PrimitivesType[Long_val(v)])

value
Val_CL_PrimitivesType(CL_PrimitivesType e)
{
    switch (e)
    {
        case cl_points:         return Val_long(0);
        case cl_line_strip:     return Val_long(1);
        case cl_line_loop:      return Val_long(2);
        case cl_lines:          return Val_long(3);
        case cl_triangle_strip: return Val_long(4);
        case cl_triangle_fan:   return Val_long(5);
        case cl_triangles:      return Val_long(6);

        default: caml_failwith("CL_PrimitivesType");
    }
    caml_failwith("CL_PrimitivesType");
}

#endif // _CL_PRIMITIVESTYPE_INC
// vim: sw=4 sts=4 ts=4 et
