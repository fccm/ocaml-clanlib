/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/Image/perlin_noise.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_PerlinNoise_stub.hpp"
#include "CL_PixelBuffer_stub.hpp"

CAMLextern_C value
caml_CL_PerlinNoise_init(value unit)
{
    CL_PerlinNoise *pn = new CL_PerlinNoise();
    return Val_CL_PerlinNoise(pn);
}

CAMLextern_C value
caml_CL_PerlinNoise_delete(value pn)
{
    delete CL_PerlinNoise_val(pn);
    nullify_ptr(pn);
    return Val_unit;
}

CAMLextern_C value
caml_CL_PerlinNoise_create_noise2d(
        value pn, value start_x, value end_x, value start_y, value end_y)
{
    CL_PixelBuffer *pb = new CL_PixelBuffer();
    *pb = CL_PerlinNoise_val(pn)->create_noise2d(
                Float_val(start_x), Float_val(end_x),
                Float_val(start_y), Float_val(end_y));
    return Val_CL_PixelBuffer(pb);
}

// vim: sw=4 sts=4 ts=4 et
