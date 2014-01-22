/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/Math/rect.h>
#include "cl_caml_incs.hpp"
#include "CL_Rect_stub.hpp"

value
Val_CL_Rect(const CL_Rect& rect)
{
    CAMLparam0();
    CAMLlocal1(ret);
    ret = caml_alloc(4, 0);
    Store_field(ret, 0, Val_long(rect.left));
    Store_field(ret, 1, Val_long(rect.top));
    Store_field(ret, 2, Val_long(rect.right));
    Store_field(ret, 3, Val_long(rect.bottom));
    CAMLreturn(ret);
}

value
Val_CL_Rectd(const CL_Rectd& rect)
{
    CAMLparam0();
    CAMLlocal1(ret);
    ret = caml_alloc(4, 0);
    Store_double_field(ret, 0, rect.left);
    Store_double_field(ret, 1, rect.top);
    Store_double_field(ret, 2, rect.right);
    Store_double_field(ret, 3, rect.bottom);
    CAMLreturn(ret);
}

CL_Rect
CL_Rect_val(value rect)
{
    int left   = Long_val(Field(rect,0));
    int top    = Long_val(Field(rect,1));
    int right  = Long_val(Field(rect,2));
    int bottom = Long_val(Field(rect,3));
    return CL_Rect(left, top, right, bottom);
}

CL_Rectd
CL_Rectd_val(value rect)
{
    double left   = Double_field(rect,0);
    double top    = Double_field(rect,1);
    double right  = Double_field(rect,2);
    double bottom = Double_field(rect,3);
    return CL_Rectd(left, top, right, bottom);
}

// vim: sw=4 sts=4 ts=4 et
