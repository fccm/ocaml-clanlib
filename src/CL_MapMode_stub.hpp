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

#ifndef _CL_MAPMODE_INC
#define _CL_MAPMODE_INC

// Conversions of enum CL_MapMode:
static const CL_MapMode caml_table_CL_MapMode[] = {
    cl_map_2d_upper_left,
    cl_map_2d_lower_left,
    cl_user_projection,
};

#define CL_MapMode_val(v) \
    (caml_table_CL_MapMode[Long_val(v)])

value
Val_CL_MapMode(CL_MapMode e)
{
    switch (e)
    {
        case cl_map_2d_upper_left:	return Val_long(0);
        case cl_map_2d_lower_left:	return Val_long(1);
        case cl_user_projection:	return Val_long(2);

        default: caml_failwith("CL_MapMode");
    }
    caml_failwith("CL_MapMode");
}

#endif // _CL_MAPMODE_INC
// vim: sw=4 sts=4 ts=4 et
