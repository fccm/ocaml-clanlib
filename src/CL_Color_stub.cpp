/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/2D/color.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_Color_stub.hpp"

value
Val_CL_Color(const CL_Color& c)
{
    CAMLparam0();
    CAMLlocal1(ret);
    ret = caml_alloc(4, 0);
    int col = c.color;
    int a = (col >> 24) & 0xFF;
    int r = (col >> 16) & 0xFF;
    int g = (col >>  8) & 0xFF;
    int b = col & 0xFF;
    Store_field(ret, 0, Val_long(r));
    Store_field(ret, 1, Val_long(g));
    Store_field(ret, 2, Val_long(b));
    Store_field(ret, 3, Val_long(a));
    CAMLreturn(ret);
}

value
Val_CL_Colord(const CL_Colord& c)
{
    CAMLparam0();
    CAMLlocal1(ret);
    ret = caml_alloc(4, 0);
    Store_double_field(ret, 0, c.r);
    Store_double_field(ret, 1, c.g);
    Store_double_field(ret, 2, c.b);
    Store_double_field(ret, 3, c.a);
    CAMLreturn(ret);
}

value
Val_CL_Colorf(const CL_Colorf& c)
{
    CAMLparam0();
    CAMLlocal1(ret);
    ret = caml_alloc(4, 0);
    Store_double_field(ret, 0, c.r);
    Store_double_field(ret, 1, c.g);
    Store_double_field(ret, 2, c.b);
    Store_double_field(ret, 3, c.a);
    CAMLreturn(ret);
}

CL_Color
CL_Color_val(value c)
{
    unsigned int r = UInt_val(Field(c,0));
    unsigned int g = UInt_val(Field(c,1));
    unsigned int b = UInt_val(Field(c,2));
    unsigned int a = UInt_val(Field(c,3));
    return CL_Color(r, g, b, a);
}

CL_Colord
CL_Colord_val(value c)
{
    double r = Double_field(c,0);
    double g = Double_field(c,1);
    double b = Double_field(c,2);
    double a = Double_field(c,3);
    return CL_Colord(r, g, b, a);
}

CL_Colorf
CL_Colorf_val(value c)
{
    float r = Double_field(c,0);
    float g = Double_field(c,1);
    float b = Double_field(c,2);
    float a = Double_field(c,3);
    return CL_Colorf(r, g, b, a);
}

// vim: sw=4 sts=4 ts=4 et
