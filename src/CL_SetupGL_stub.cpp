/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/GL/setup_gl.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_SetupGL_stub.hpp"

CAMLextern_C value
caml_CL_SetupGL_init(value unit)
{
    CL_SetupGL *setup_gl = new CL_SetupGL;
    return Val_CL_SetupGL(setup_gl);
}

CAMLextern_C value
caml_CL_SetupGL_delete(value setup_gl)
{
    delete CL_SetupGL_val(setup_gl);
    nullify_ptr(setup_gl);
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
