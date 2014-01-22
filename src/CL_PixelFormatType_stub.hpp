#ifndef _CL_PIXELFORMATTYPE_INC
#define _CL_PIXELFORMATTYPE_INC

#include <ClanLib/core.h> // VERSION

#ifndef CL_CURRENT_VERSION
#define CL_CURRENT_VERSION CLANLIB_CURRENT_VERSION
#endif

#ifndef CL_VERSION
#define CL_VERSION(x,y,z) CLANLIB_VERSION(x,y,z)
#endif

#if (CL_CURRENT_VERSION < CL_VERSION(2,3,6))

#include <ClanLib/Display/Image/pixel_format_type.h>

/* Conversions of enum: CL_PixelFormatType */

static const CL_PixelFormatType ocaml_table_CL_PixelFormatType[] = {
    pixelformat_rgba,
    pixelformat_index
};

#define CL_PixelFormatType_val(v) \
    (ocaml_table_CL_PixelFormatType[Long_val(v)])

static inline value
Val_CL_PixelFormatType(CL_PixelFormatType e)
{
    switch (e)
    {
        case pixelformat_rgba:  return Val_long(0);
        case pixelformat_index: return Val_long(1);

        default: caml_failwith("CL_PixelFormat.kind");
    }
    caml_failwith("CL_PixelFormat.kind");
}

#endif

#endif // _CL_PIXELFORMATTYPE_INC
// vim: sw=4 sts=4 ts=4 et
