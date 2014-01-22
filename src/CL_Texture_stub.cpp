/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/Render/texture.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"
#include "CL_Texture_stub.hpp"
#include "CL_GraphicContext_stub.hpp"
#include "CL_File_stub.hpp"

CAMLextern_C value
caml_CL_Texture_init(value gc, value width, value height)
{
    CL_Texture *tex = new CL_Texture(
            *CL_GraphicContext_val(gc), Int_val(width), Int_val(height));
    return Val_CL_Texture(tex);
}

CAMLextern_C value
caml_CL_Texture_read_file(value gc, value fullname)
{
    CL_Texture *tex = new CL_Texture(
            *CL_GraphicContext_val(gc), CL_StringRef_val(fullname));
    return Val_CL_Texture(tex);
}

CAMLextern_C value
caml_CL_Texture_of_file(value gc, value file, value image_type)
{
    CL_Texture *tex = new CL_Texture(
            *CL_GraphicContext_val(gc),
            *CL_File_val(file), CL_String_val(image_type));
    return Val_CL_Texture(tex);
}

CAMLextern_C value
caml_CL_Texture_delete(value tex)
{
    delete CL_Texture_val(tex);
    nullify_ptr(tex);
    return Val_unit;
}

// CL_Texture(CL_GraphicContext &context,
//       int width, int height, CL_TextureFormat internal_format = cl_rgba);

// CL_Texture(CL_GraphicContext &context,
//       const CL_StringRef &filename, const CL_VirtualDirectory &directory);

// vim: sw=4 sts=4 ts=4 et
