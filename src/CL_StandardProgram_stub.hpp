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

#ifndef _CL_STANDARDPROGRAM_INC
#define _CL_STANDARDPROGRAM_INC

// Conversions of enum CL_StandardProgram:
static const CL_StandardProgram caml_table_CL_StandardProgram[] = {
    cl_program_color_only,
    cl_program_single_texture,
    cl_program_sprite,
};

#define CL_StandardProgram_val(v) \
    (caml_table_CL_StandardProgram[Long_val(v)])

value
Val_CL_StandardProgram(CL_StandardProgram e)
{
    switch (e)
    {
        case cl_program_color_only:     return Val_long(0);
        case cl_program_single_texture: return Val_long(1);
        case cl_program_sprite:         return Val_long(2);

        default: caml_failwith("CL_StandardProgram");
    }
    caml_failwith("CL_StandardProgram");
}

#endif // _CL_STANDARDPROGRAM_INC
// vim: sw=4 sts=4 ts=4 et
