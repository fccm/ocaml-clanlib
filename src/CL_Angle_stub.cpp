/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/Math/angle.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_Angle_stub.hpp"

#define CL_AngleUnit_val(angle_unit) \
        (angle_unit == Val_int(0) ? \
         cl_degrees : cl_radians)

CAMLextern_C value
caml_CL_Angle_init(value v, value angle_unit)
{
    CL_Angle *angle = new CL_Angle(
            Float_val(v), CL_AngleUnit_val(angle_unit));
    return Val_CL_Angle(angle);
}

CAMLextern_C value
caml_CL_Angle_delete(value a)
{
    delete CL_Angle_val(a);
    nullify_ptr(a);
    return Val_unit;
}

CAMLextern_C value
caml_CL_Angle_to_degrees(value a)
{
    float deg = CL_Angle_val(a)->to_degrees();
    return caml_copy_double(deg);
}

CAMLextern_C value
caml_CL_Angle_to_radians(value a)
{
    float rad = CL_Angle_val(a)->to_radians();
    return caml_copy_double(rad);
}

CAMLextern_C value
caml_CL_Angle_set_degrees(value a, value degrees)
{
    CL_Angle_val(a)->set_degrees(Float_val(degrees));
    return Val_unit;
}

CAMLextern_C value
caml_CL_Angle_set_radians(value a, value radians)
{
    CL_Angle_val(a)->set_radians(Float_val(radians));
    return Val_unit;
}

CAMLextern_C value
caml_CL_Angle_normalize(value a)
{
    CL_Angle_val(a)->normalize();
    return Val_unit;
}

CAMLextern_C value
caml_CL_Angle_normalize_180(value a)
{
    CL_Angle_val(a)->normalize_180();
    return Val_unit;
}

CAMLextern_C value
caml_CL_Angle_add(value a1, value a2)
{
    CL_Angle a =
        *CL_Angle_val(a1) +
        *CL_Angle_val(a2) ;
    CL_Angle *r = new CL_Angle(a.to_radians(), cl_radians);
    return Val_CL_Angle(r);
}

CAMLextern_C value
caml_CL_Angle_sub(value a1, value a2)
{
    CL_Angle a =
        *CL_Angle_val(a1) -
        *CL_Angle_val(a2) ;
    CL_Angle *r = new CL_Angle(a.to_radians(), cl_radians);
    return Val_CL_Angle(r);
}

CAMLextern_C value
caml_CL_Angle_mul(value a, value v)
{
    CL_Angle r = *CL_Angle_val(a) * Float_val(v);
    CL_Angle *ret = new CL_Angle(r.to_radians(), cl_radians);
    return Val_CL_Angle(ret);
}

CAMLextern_C value
caml_CL_Angle_div(value a, value v)
{
    CL_Angle r = *CL_Angle_val(a) / Float_val(v);
    CL_Angle *ret = new CL_Angle(r.to_radians(), cl_radians);
    return Val_CL_Angle(ret);
}

CAMLextern_C value
caml_CL_Angle_eq(value a1, value a2)
{
    return Val_bool(
        *CL_Angle_val(a1) ==
        *CL_Angle_val(a2) );
}

CAMLextern_C value
caml_CL_Angle_gt(value a1, value a2)
{
    return Val_bool(
        *CL_Angle_val(a1) >
        *CL_Angle_val(a2) );
}

CAMLextern_C value
caml_CL_Angle_lt(value a1, value a2)
{
    return Val_bool(
        *CL_Angle_val(a1) <
        *CL_Angle_val(a2) );
}

// vim: sw=4 sts=4 ts=4 et
