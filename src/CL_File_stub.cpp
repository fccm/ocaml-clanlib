/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/IOData/file.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"
#include "CL_File_stub.hpp"

CAMLextern_C value
caml_CL_File_init(value filename)
{
    CL_File *file = new CL_File();
    *file = CL_File(CL_String_val(filename));
    return Val_CL_File(file);
}

CAMLextern_C value
caml_CL_File_delete(value file)
{
    delete CL_File_val(file);
    nullify_ptr(file);
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
