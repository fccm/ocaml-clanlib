/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Sound/setupsound.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_SetupSound_stub.hpp"

CAMLextern_C value
caml_CL_SetupCore_init(value unit)
{
    CL_SetupSound *setup_sound = new CL_SetupSound;
    return Val_CL_SetupSound(setup_sound);
}

CAMLextern_C value
caml_CL_SetupCore_delete(value setup_sound)
{
    delete CL_SetupSound_val(setup_sound);
    nullify_ptr(setup_sound);
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
