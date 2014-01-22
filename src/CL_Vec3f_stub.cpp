/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/Math/vec3.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_Vec3f_stub.hpp"

CAMLextern_C value
caml_CL_Vec3f_init(value vs)
{
    CL_Vec3f *vec = new CL_Vec3f(
            Float_val(Field(vs,0)),
            Float_val(Field(vs,1)),
            Float_val(Field(vs,2)));
    return Val_CL_Vec3f(vec);
}

CAMLextern_C value
caml_CL_Vec3f_init3(value v1, value v2, value v3)
{
    CL_Vec3f *vec = new CL_Vec3f(
            Float_val(v1),
            Float_val(v2),
            Float_val(v3));
    return Val_CL_Vec3f(vec);
}

CAMLextern_C value
caml_CL_Vec3f_delete(value vec)
{
    delete CL_Vec3f_val(vec);
    nullify_ptr(vec);
    return Val_unit;
}

CAMLextern_C value
caml_CL_Vec3f_print(value vec)
{
    float x = CL_Vec3f_val(vec)->x;
    float y = CL_Vec3f_val(vec)->y;
    float z = CL_Vec3f_val(vec)->z;
    std::cout << "Vec3f: "
        << x << " "
        << y << " "
        << z << std::endl;
    return Val_unit;
}

CAMLextern_C value
caml_CL_Vec3f_to_triplet(value vec)
{
    float x = CL_Vec3f_val(vec)->x;
    float y = CL_Vec3f_val(vec)->y;
    float z = CL_Vec3f_val(vec)->z;
    value ret = caml_alloc(3, 0);
    Store_field(ret, 0, caml_copy_double(x));
    Store_field(ret, 1, caml_copy_double(y));
    Store_field(ret, 2, caml_copy_double(z));
    return ret;
}

CAMLextern_C value
caml_CL_Vec3f_normalize(value vec)
{
    CL_Vec3f *norm = new CL_Vec3f(
        CL_Vec3f::normalize(
            *CL_Vec3f_val(vec)));
    return Val_CL_Vec3f(norm);
}

CAMLextern_C value
caml_CL_Vec3f_dot(value vec1, value vec2)
{
    float r = CL_Vec3f::dot(
            *CL_Vec3f_val(vec1),
            *CL_Vec3f_val(vec2));
    return caml_copy_double(r);
}

CAMLextern_C value
caml_CL_Vec3f_cross(value vec1, value vec2)
{
    CL_Vec3f *r = new CL_Vec3f(
        CL_Vec3f::cross(
            *CL_Vec3f_val(vec1),
            *CL_Vec3f_val(vec2)));
    return Val_CL_Vec3f(r);
}

CAMLextern_C value
caml_CL_Vec3f_length(value vec)
{
    float len = CL_Vec3f_val(vec)->length();
    return caml_copy_double(len);
}

CAMLextern_C value
caml_CL_Vec3f_distance(value vec1, value vec2)
{
    float dist = CL_Vec3f_val(vec1)->distance(
            *CL_Vec3f_val(vec2));
    return caml_copy_double(dist);
}

CAMLextern_C value
caml_CL_Vec3f_add(value vec1, value vec2)
{
    CL_Vec3f sum =
        *CL_Vec3f_val(vec1) +
        *CL_Vec3f_val(vec2);

    return Val_CL_Vec3f(&sum);
}

CAMLextern_C value
caml_CL_Vec3f_sub(value vec1, value vec2)
{
    CL_Vec3f dif =
        *CL_Vec3f_val(vec1) -
        *CL_Vec3f_val(vec2);

    return Val_CL_Vec3f(&dif);
}

CAMLextern_C value
caml_CL_Vec3f_mul(value vec, value v)
{
    CL_Vec3f prod =
        *CL_Vec3f_val(vec) *
        Float_val(v);

    return Val_CL_Vec3f(&prod);
}

CAMLextern_C value
caml_CL_Vec3f_div(value vec, value v)
{
    CL_Vec3f quo =
        *CL_Vec3f_val(vec) /
        Float_val(v);

    return Val_CL_Vec3f(&quo);
}

// vim: sw=4 sts=4 ts=4 et
