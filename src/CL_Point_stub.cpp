/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/Math/point.h>
#include "cl_caml_incs.hpp"
#include "CL_Point_stub.hpp"

value
Val_CL_Point(const CL_Point& c)
{
    CAMLparam0();
    CAMLlocal1(ret);
    ret = caml_alloc(2, 0);
    Store_field(ret, 0, Val_long(c.x));
    Store_field(ret, 1, Val_long(c.y));
    CAMLreturn(ret);
}

value
Val_CL_Pointf(const CL_Pointf& c)
{
    CAMLparam0();
    CAMLlocal1(ret);
    ret = caml_alloc(2, 0);
    Store_field(ret, 0, caml_copy_double(c.x));
    Store_field(ret, 1, caml_copy_double(c.y));
    CAMLreturn(ret);
}

CL_Point
CL_Point_val(value pnt)
{
    int x = Long_val(Field(pnt,0));
    int y = Long_val(Field(pnt,1));
    return CL_Point(x, y);
}

CL_Pointf
CL_Pointf_val(value pnt)
{
    double x = Double_val(Field(pnt,0));
    double y = Double_val(Field(pnt,1));
    return CL_Pointf(x, y);
}

// vim: sw=4 sts=4 ts=4 et
