/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/Math/mat4.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_Mat4f_stub.hpp"

CAMLextern_C value
caml_CL_Mat4f_init(value init_mat)
{
    const double *init_matrix = &Double_field(init_mat,0);
    CL_Mat4f *mat = new CL_Mat4f(init_matrix);
    return Val_CL_Mat4f(mat);
}

CAMLextern_C value
caml_CL_Mat4f_of_array(value arr)
{
    if (!caml_is_double_array(arr))
        caml_invalid_argument("CL_Mat4f.of_array");
    if (caml_array_length(arr) != 16)
        caml_invalid_argument("CL_Mat4f.of_array");
    const double *init_matrix = &Double_field(arr,0);
    CL_Mat4f *mat = new CL_Mat4f(init_matrix);
    return Val_CL_Mat4f(mat);
}

CAMLextern_C value
caml_CL_Mat4f_identity(value unit)
{
    CL_Mat4f *mat = new CL_Mat4f(CL_Mat4f::identity());
    return Val_CL_Mat4f(mat);
}

CAMLextern_C value
caml_CL_Mat4f_delete(value mat)
{
    delete CL_Mat4f_val(mat);
    nullify_ptr(mat);
    return Val_unit;
}

CAMLextern_C value
caml_CL_Mat4f_print(value mat)
{
    unsigned int i;
    float *matrix = CL_Mat4f_val(mat)->matrix;
    std::cout << "matrix:" << std::endl;
    for (i = 0; i < 16; ++i) {
        std::cout << "  " << matrix[i];
        if ((i % 4) == 3)
            std::cout << std::endl;
    }
    return Val_unit;
}

CAMLextern_C value
caml_CL_Mat4f_frustum(
        value left,
        value right,
        value bottom,
        value top,
        value z_near,
        value z_far)
{
    CL_Mat4f *mat = new CL_Mat4f(
        CL_Mat4f::frustum(
            Float_val(left),
            Float_val(right),
            Float_val(bottom),
            Float_val(top),
            Float_val(z_near),
            Float_val(z_far)));
    return Val_CL_Mat4f(mat);
}

CAMLextern_C value
caml_CL_Mat4f_frustum_bc(value *argv, int argn)
{
    return caml_CL_Mat4f_frustum(
            argv[0], argv[1], argv[2],
            argv[3], argv[4], argv[5]);
}

CAMLextern_C value
caml_CL_Mat4f_perspective(
        value fov,
        value aspect,
        value z_near,
        value z_far)
{
    CL_Mat4f *mat = new CL_Mat4f(
        CL_Mat4f::perspective(
            Float_val(fov),
            Float_val(aspect),
            Float_val(z_near),
            Float_val(z_far)));
    return Val_CL_Mat4f(mat);
}

CAMLextern_C value
caml_CL_Mat4f_ortho(
        value left, value right,
        value bottom, value top,
        value z_near, value z_far)
{
    CL_Mat4f *mat = new CL_Mat4f(
        CL_Mat4f::ortho(
            Float_val(left),
            Float_val(right),
            Float_val(bottom),
            Float_val(top),
            Float_val(z_near),
            Float_val(z_far)));
    return Val_CL_Mat4f(mat);
}

CAMLextern_C value
caml_CL_Mat4f_ortho_bc(value *argv, int argn)
{
    return caml_CL_Mat4f_ortho(
            argv[0], argv[1], argv[2],
            argv[3], argv[4], argv[5]);
}

CAMLextern_C value
caml_CL_Mat4f_ortho_2d(
        value left, value right, value bottom, value top)
{
    CL_Mat4f *mat = new CL_Mat4f(
        CL_Mat4f::ortho_2d(
            Float_val(left),
            Float_val(right),
            Float_val(bottom),
            Float_val(top)));
    return Val_CL_Mat4f(mat);
}

CAMLextern_C value
caml_CL_Mat4f_look_at(
        value eye_x, value eye_y, value eye_z,
        value center_x, value center_y, value center_z,
        value up_x, value up_y, value up_z)
{
    CL_Mat4f *mat = new CL_Mat4f(
        CL_Mat4f::look_at(
            Float_val(eye_x), Float_val(eye_y), Float_val(eye_z),
            Float_val(center_x), Float_val(center_y), Float_val(center_z),
            Float_val(up_x), Float_val(up_y), Float_val(up_z))
        );
    return Val_CL_Mat4f(mat);
}

CAMLextern_C value
caml_CL_Mat4f_look_at_bc(value *argv, int argn)
{
    return caml_CL_Mat4f_look_at(
            argv[0], argv[1], argv[2],
            argv[3], argv[4], argv[5],
            argv[6], argv[7], argv[8]);
}

// vim: sw=4 sts=4 ts=4 et
