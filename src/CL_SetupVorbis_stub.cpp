/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Vorbis/setupvorbis.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_SetupVorbis_stub.hpp"

CAMLextern_C value
caml_CL_SetupVorbis_init(value unit)
{
    CL_SetupVorbis *setup_vorbis = new CL_SetupVorbis;
    return Val_CL_SetupVorbis(setup_vorbis);
}

CAMLextern_C value
caml_CL_SetupVorbis_delete(value setup_vorbis)
{
    delete CL_SetupVorbis_val(setup_vorbis);
    nullify_ptr(setup_vorbis);
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
