/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/Image/pixel_format.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_PixelFormat_stub.hpp"
#include <ClanLib/core.h> // VERSION
#ifndef CL_CURRENT_VERSION
#define CL_CURRENT_VERSION CLANLIB_CURRENT_VERSION
#endif
#ifndef CL_VERSION
#define CL_VERSION(x,y,z) CLANLIB_VERSION(x,y,z)
#endif
#if (CL_CURRENT_VERSION < CL_VERSION(2,3,6))
#include "CL_PixelFormatType_stub.hpp"
#endif

CAMLextern_C value
caml_CL_PixelFormat_default(value unit)
{
    CL_PixelFormat *fmt = new CL_PixelFormat();
    return Val_CL_PixelFormat(fmt);
}

CAMLextern_C value
caml_CL_PixelFormat_init(
        value depth, value red_mask, value green_mask,
        value blue_mask, value alpha_mask, value use_colorkey,
        value colorkey, value type, value unit)
{
#if (CL_CURRENT_VERSION < CL_VERSION(2,3,6))
    CL_PixelFormat *fmt =
        new CL_PixelFormat(
            Int_val(depth),
            UInt_val(red_mask),
            UInt_val(green_mask),
            UInt_val(blue_mask),
            Option_val(UInt_val, alpha_mask, 0),
            Option_val(Bool_val, use_colorkey, false),
            Option_val(UInt_val, colorkey, 0),
            Option_val(CL_PixelFormatType_val, type, pixelformat_rgba));
#else
    CL_PixelFormat *fmt =
        new CL_PixelFormat();
#endif
    return Val_CL_PixelFormat(fmt);
}

CAMLextern_C value
caml_CL_PixelFormat_init_bc(value *argv, int argn)
{
    return caml_CL_PixelFormat_init(
            argv[0], argv[1], argv[2],
            argv[3], argv[4], argv[5],
            argv[6], argv[7], argv[8]);
}

CAMLextern_C value
caml_CL_PixelFormat_delete(value fmt)
{
    delete CL_PixelFormat_val(fmt);
    nullify_ptr(fmt);
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
