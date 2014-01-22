/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/Math/quad.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"

#define SET_VEC2(v, x, y, conv) \
    v = caml_alloc(2, 0); \
    Store_field(v, 0, conv(x)); \
    Store_field(v, 1, conv(y));

value
Val_CL_Quad(const CL_Quad& quad)
{
    CAMLparam0();
    CAMLlocal5(ret, vp, vq, vr, vs);
    SET_VEC2(vp, quad.p.x, quad.p.y, Val_long)
    SET_VEC2(vq, quad.q.x, quad.q.y, Val_long)
    SET_VEC2(vr, quad.r.x, quad.r.y, Val_long)
    SET_VEC2(vs, quad.s.x, quad.s.y, Val_long)
    ret = caml_alloc(4, 0);
    Store_field(ret, 0, vp);
    Store_field(ret, 1, vq);
    Store_field(ret, 2, vr);
    Store_field(ret, 3, vs);
    CAMLreturn(ret);
}

value
Val_CL_Quadf(const CL_Quadf& quad)
{
    CAMLparam0();
    CAMLlocal5(ret, vp, vq, vr, vs);
    SET_VEC2(vp, quad.p.x, quad.p.y, Val_float)
    SET_VEC2(vq, quad.q.x, quad.q.y, Val_float)
    SET_VEC2(vr, quad.r.x, quad.r.y, Val_float)
    SET_VEC2(vs, quad.s.x, quad.s.y, Val_float)
    ret = caml_alloc(4, 0);
    Store_field(ret, 0, vp);
    Store_field(ret, 1, vq);
    Store_field(ret, 2, vr);
    Store_field(ret, 3, vs);
    CAMLreturn(ret);
}

value
Val_CL_Quadd(const CL_Quadd& quad)
{
    CAMLparam0();
    CAMLlocal5(ret, vp, vq, vr, vs);
    SET_VEC2(vp, quad.p.x, quad.p.y, Val_double)
    SET_VEC2(vq, quad.q.x, quad.q.y, Val_double)
    SET_VEC2(vr, quad.r.x, quad.r.y, Val_double)
    SET_VEC2(vs, quad.s.x, quad.s.y, Val_double)
    ret = caml_alloc(4, 0);
    Store_field(ret, 0, vp);
    Store_field(ret, 1, vq);
    Store_field(ret, 2, vr);
    Store_field(ret, 3, vs);
    CAMLreturn(ret);
}

#undef SET_VEC2

CL_Quad
CL_Quad_val(value quad)
{
    value vp = Field(quad,0);
    value vq = Field(quad,1);
    value vr = Field(quad,2);
    value vs = Field(quad,3);

    CL_Vec2i p = CL_Vec2i(Int_val(Field(vp,0)), Int_val(Field(vp,1)));
    CL_Vec2i q = CL_Vec2i(Int_val(Field(vq,0)), Int_val(Field(vq,1)));
    CL_Vec2i r = CL_Vec2i(Int_val(Field(vr,0)), Int_val(Field(vr,1)));
    CL_Vec2i s = CL_Vec2i(Int_val(Field(vs,0)), Int_val(Field(vs,1)));

    return CL_Quad(p, q, r, s);
}

CL_Quadf
CL_Quadf_val(value quad)
{
    value vp = Field(quad,0);
    value vq = Field(quad,1);
    value vr = Field(quad,2);
    value vs = Field(quad,3);

    CL_Vec2f p = CL_Vec2f(Float_val(Field(vp,0)), Float_val(Field(vp,1)));
    CL_Vec2f q = CL_Vec2f(Float_val(Field(vq,0)), Float_val(Field(vq,1)));
    CL_Vec2f r = CL_Vec2f(Float_val(Field(vr,0)), Float_val(Field(vr,1)));
    CL_Vec2f s = CL_Vec2f(Float_val(Field(vs,0)), Float_val(Field(vs,1)));

    return CL_Quadf(p, q, r, s);
}

CL_Quadd
CL_Quadd_val(value quad)
{
    value vp = Field(quad,0);
    value vq = Field(quad,1);
    value vr = Field(quad,2);
    value vs = Field(quad,3);

    CL_Vec2d p = CL_Vec2d(Double_val(Field(vp,0)), Double_val(Field(vp,1)));
    CL_Vec2d q = CL_Vec2d(Double_val(Field(vq,0)), Double_val(Field(vq,1)));
    CL_Vec2d r = CL_Vec2d(Double_val(Field(vr,0)), Double_val(Field(vr,1)));
    CL_Vec2d s = CL_Vec2d(Double_val(Field(vs,0)), Double_val(Field(vs,1)));

    return CL_Quadd(p, q, r, s);
}

// vim: sw=4 sts=4 ts=4 et
