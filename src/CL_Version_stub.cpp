/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/core.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"

CAMLextern_C value
caml_CL_Version_get_as_string(value unit)
{
    return caml_copy_string(CL_VERSION_STRING);
}

CAMLextern_C value
caml_CL_Version_get_current_as_int(value unit)
{
    return Val_long(CL_CURRENT_VERSION);
}

CAMLextern_C value
caml_CL_Version_get_this_as_int(value ver)
{
    return Val_long(
        CL_VERSION(
            Int_val(Field(ver,0)),
            Int_val(Field(ver,1)),
            Int_val(Field(ver,2))));
}

#define CL_VERSION_COMPARE(v1, v2) \
    (v1 < v2 ? -1 : \
      (v1 > v2 ? 1 : 0) \
    )

CAMLextern_C value
caml_CL_Version_compare(value ver)
{
    return Val_long(
        CL_VERSION_COMPARE(
            CL_CURRENT_VERSION,
            CL_VERSION(
                Int_val(Field(ver,0)),
                Int_val(Field(ver,1)),
                Int_val(Field(ver,2)))));
}

CAMLextern_C value
caml_CL_Version_compare2(value ver1, value ver2)
{
    return Val_long(
        CL_VERSION_COMPARE(
            CL_VERSION(
                Int_val(Field(ver1,0)),
                Int_val(Field(ver1,1)),
                Int_val(Field(ver1,2))),
            CL_VERSION(
                Int_val(Field(ver2,0)),
                Int_val(Field(ver2,1)),
                Int_val(Field(ver2,2)))));
}

// vim: sw=4 sts=4 ts=4 et
