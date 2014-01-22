/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/Text/string_types.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"

/* ocaml types conversions */

value
Val_some(value v)
{
    CAMLparam1(v);
    CAMLlocal1(some);
    some = caml_alloc(1, 0);
    Store_field(some, 0, v);
    CAMLreturn(some);
}

value
Val_CL_String(const CL_String& cls)
{
    return caml_copy_string(cls.c_str());
}

value
Val_CL_StringRef(const CL_StringRef& cls)
{
    return caml_copy_string(cls.c_str());
}

// vim: sw=4 sts=4 ts=4 et
