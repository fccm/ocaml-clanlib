/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/setup_display.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_SetupDisplay_stub.hpp"

CAMLextern_C value
caml_CL_SetupDisplay_init(value unit)
{
    CL_SetupDisplay *setup_display = new CL_SetupDisplay;
    return Val_CL_SetupDisplay(setup_display);
}

CAMLextern_C value
caml_CL_SetupDisplay_delete(value setup_display)
{
    delete CL_SetupDisplay_val(setup_display);
    nullify_ptr(setup_display);
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
