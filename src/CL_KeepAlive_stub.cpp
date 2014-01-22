/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/System/keep_alive.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"

CAMLextern_C value
caml_CL_KeepAlive_process(value timeout, value unit)
{
    if (timeout == Val_none)
        CL_KeepAlive::process();
    else
        CL_KeepAlive::process(Int_val(Some_val(timeout)));
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
