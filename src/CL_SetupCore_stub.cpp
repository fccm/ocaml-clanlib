/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/System/setup_core.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_SetupCore_stub.hpp"

CAMLextern_C value
caml_CL_SetupCore_init(value unit)
{
    CL_SetupCore *setup_core = new CL_SetupCore;
    return Val_CL_SetupCore(setup_core);
}

CAMLextern_C value
caml_CL_SetupCore_delete(value setup_core)
{
    delete CL_SetupCore_val(setup_core);
    nullify_ptr(setup_core);
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
