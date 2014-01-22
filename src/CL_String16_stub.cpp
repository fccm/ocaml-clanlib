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
#include "CL_String16_stub.hpp"

CAMLextern_C value
caml_CL_String16_init(value str)
{
    /*
    char *c_str = String_val(str);
    unsigned int length = caml_string_length(str);
    CL_String16 *cls = new CL_String16(c_str, length);
    return Val_CL_String16(cls);
    */
    char *c_str = String_val(str);
    CL_String16 *cls = new CL_String16(c_str);
    return Val_CL_String16(cls);
}

CAMLextern_C value
caml_CL_String16_delete(value cls)
{
    delete CL_String16_val(cls);
    nullify_ptr(cls);
    return Val_unit;
}

CAMLextern_C value
caml_CL_String16_append(value cls, value str)
{
    char *c_str = String_val(str);
    CL_String16_val(cls)->append(c_str);
    return Val_unit;
}

CAMLextern_C value
caml_CL_String16_clear(value cls)
{
    CL_String16_val(cls)->clear();
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
