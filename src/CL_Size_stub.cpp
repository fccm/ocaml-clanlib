/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/Math/size.h>
#include "cl_caml_incs.hpp"
#include "CL_Size_stub.hpp"

value Val_CL_Size(const CL_Size& size)
{
    CAMLparam0();
    CAMLlocal1(ret);
    ret = caml_alloc(2, 0);
    Store_field(ret, 0, Val_int(size.width));
    Store_field(ret, 1, Val_int(size.height));
    CAMLreturn(ret);
}

value Val_CL_Sized(const CL_Sized& size)
{
    CAMLparam0();
    CAMLlocal1(ret);
    ret = caml_alloc(2, 0);
    Store_double_field(ret, 0, size.width);
    Store_double_field(ret, 1, size.height);
    CAMLreturn(ret);
}

value Val_CL_Sizef(const CL_Sizef& size)
{
    CAMLparam0();
    CAMLlocal1(ret);
    ret = caml_alloc(2, 0);
    Store_double_field(ret, 0, size.width);
    Store_double_field(ret, 1, size.height);
    CAMLreturn(ret);
}

CL_Size
CL_Size_val(value s)
{
    int width  = Int_val(Field(s,0));
    int height = Int_val(Field(s,1));
    return CL_Size(width, height);
}

CL_Sized
CL_Sized_val(value s)
{
    double width  = Double_field(s,0);
    double height = Double_field(s,1);
    return CL_Sized(width, height);
}

CL_Sizef
CL_Sizef_val(value s)
{
    float width  = Double_field(s,0);
    float height = Double_field(s,1);
    return CL_Sizef(width, height);
}

// vim: sw=4 sts=4 ts=4 et
