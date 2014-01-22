/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/Image/pixel_buffer.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"
#include "CL_PixelBuffer_stub.hpp"
#include "CL_PixelFormat_stub.hpp"
#include "CL_File_stub.hpp"
#include "CL_IODevice_stub.hpp"
#include "CL_Palette_stub.hpp"
#include "CL_VirtualDirectory_stub.hpp"

#if 0
CAMLextern_C value
caml_CL_PixelBuffer_of_data(
        value width, value height, value pitch,
        value format, value palette, value data, value unit)
{
    CL_PixelBuffer *pxl;

    /*
    unsigned int pr = 0;
    if (data    != Val_none) pr |= 0b0001;
    if (palette != Val_none) pr |= 0b0010;

    switch (pr) {
        case 0b0000:
            pxl = new CL_PixelBuffer(
                    Int_val(width), Int_val(height), Int_val(pitch),
                    *CL_PixelFormat_val(format));
            break;
        case 0b0001:
            pxl = new CL_PixelBuffer(
                    Int_val(width), Int_val(height), Int_val(pitch),
                    *CL_PixelFormat_val(format),
                    Caml_ba_data_val(Some_val(data)));
            break;
        case 0b0010:
            pxl = new CL_PixelBuffer(
                    Int_val(width), Int_val(height), Int_val(pitch),
                    *CL_PixelFormat_val(format),
                    *CL_Palette_val(Some_val(palette)));
            break;
        case 0b0011:
            pxl = new CL_PixelBuffer(
                    Int_val(width), Int_val(height), Int_val(pitch),
                    *CL_PixelFormat_val(format),
                    *CL_Palette_val(Some_val(palette)),
                    Caml_ba_data_val(Some_val(data)));
            break;
    }
    */

    return Val_CL_PixelBuffer(pxl);
}

CAMLextern_C value
caml_CL_PixelBuffer_of_data_bc(value *argv, int argn)
{
    return caml_CL_PixelBuffer_of_data(
            argv[0], argv[1], argv[2], argv[3], argv[4], argv[5], argv[6]);
}
#endif

/* clan-23:

    CL_PixelBuffer(int width, int height, CL_TextureFormat sized_format,
        const void *data = 0, bool only_reference_data = false);

    CL_PixelBuffer(CL_GraphicContext &gc, int width, int height,
        CL_PixelBufferDirection direction = cl_data_to_gpu,
        CL_TextureFormat sized_format = cl_rgba8,
        const void *data = 0,
        CL_BufferUsage usage = cl_usage_stream_draw);

    CL_PixelBuffer(CL_GraphicContext &gc, const CL_PixelBuffer &pbuff,
        CL_PixelBufferDirection direction = cl_data_to_gpu,
        CL_BufferUsage usage = cl_usage_stream_draw);

    CL_PixelBuffer(int width, int height,
        CL_TextureFormat sized_format,
        const CL_Palette &palette,
        const void *data = 0);

    CL_PixelBuffer(const CL_StringRef &fullname);
    CL_PixelBuffer(const CL_StringRef &filename, const CL_VirtualDirectory &dir);
    CL_PixelBuffer(CL_IODevice &file, const CL_String &image_type);
*/
/* clan-21

    CL_PixelBuffer();
    CL_PixelBuffer(const CL_PixelBufferRef &other);
    CL_PixelBuffer(int width, int height, int pitch, const CL_PixelFormat &format, const void *data = 0);
    CL_PixelBuffer(int width, int height, int pitch, const CL_PixelFormat &format,
        const CL_Palette &palette, const void *data = 0);

    CL_PixelBuffer(const CL_PixelBuffer &copy);
    CL_PixelBuffer(const CL_StringRef &fullname);
    CL_PixelBuffer(const CL_StringRef &filename, const CL_VirtualDirectory &dir);
    CL_PixelBuffer(CL_IODevice &file, const CL_String &image_type);
*/

CAMLextern_C value
caml_CL_PixelBuffer_of_filename(value filename, value dir, value unit)
{
    CL_PixelBuffer *pxl;

    if (dir == Val_none) 
    {
        pxl = new CL_PixelBuffer(
                CL_StringRef_val(filename));
    } else {
        pxl = new CL_PixelBuffer(
                CL_StringRef_val(filename),
                *CL_VirtualDirectory_val(Some_val(dir)));
    }
    return Val_CL_PixelBuffer(pxl);
}

CAMLextern_C value
caml_CL_PixelBuffer_of_file(value file, value image_type)
{
    CL_PixelBuffer *pxl = new CL_PixelBuffer(
            *CL_IODevice_val(file), CL_String_val(image_type));

    return Val_CL_PixelBuffer(pxl);
}


OBJ_DELETE( CL_PixelBuffer )
#ifdef GEN_CAML_CODE
ML_OBJ_DELETE( CL_PixelBuffer )
#endif

/* TODO:
CL_PixelBuffer();
CL_PixelBuffer(const CL_PixelBufferRef &other);
CL_PixelBuffer(const CL_PixelBuffer &copy);
*/

// vim: sw=4 sts=4 ts=4 et
