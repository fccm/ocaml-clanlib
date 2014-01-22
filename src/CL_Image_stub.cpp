/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/2D/image.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_Image_stub.hpp"
#include "CL_Texture_stub.hpp"
#include "CL_GraphicContext_stub.hpp"
#include "CL_Rect_stub.hpp"
#include "CL_PixelBuffer_stub.hpp"

CAMLextern_C value
caml_CL_Image_of_texture(value gc, value texture, value rect)
{
    CL_Image *img = new CL_Image(
            *CL_GraphicContext_val(gc),
            *CL_Texture_val(texture),
            CL_Rect_val(rect));

    return Val_CL_Image(img);
}

CAMLextern_C value
caml_CL_Image_of_file(value gc, value filename)
{
    CL_Image *img = new CL_Image(
            *CL_GraphicContext_val(gc),
            CL_StringRef_val(filename));

    return Val_CL_Image(img);
}

#include <ClanLib/core.h> // VERSION

#ifndef CL_CURRENT_VERSION
#define CL_CURRENT_VERSION CLANLIB_CURRENT_VERSION
#endif

#ifndef CL_VERSION
#define CL_VERSION(x,y,z) CLANLIB_VERSION(x,y,z)
#endif

CAMLextern_C value
caml_CL_Image_of_pixelBuffer(value gc, value pixelbuffer, value rect)
{
#if CL_CURRENT_VERSION < CL_VERSION(2,3,6)
    CL_Image *img = new CL_Image(
            *CL_GraphicContext_val(gc),
            *CL_PixelBuffer_val(pixelbuffer));
#else
    CL_Image *img = new CL_Image(
            *CL_GraphicContext_val(gc),
            *CL_PixelBuffer_val(pixelbuffer),
            CL_Rect_val(rect));
#endif
    return Val_CL_Image(img);
}

//  CL_Image(CL_GraphicContext_val(gc), CL_Subtexture &sub_texture);

CAMLextern_C value
caml_CL_Image_delete(value img)
{
    delete CL_Image_val(img);
    nullify_ptr(img);
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
