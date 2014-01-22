/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/IOData/virtual_directory.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_VirtualDirectory_stub.hpp"

CAMLextern_C value
caml_CL_VirtualDirectory_init(value unit)
{
    CL_VirtualDirectory *virt_dir = new CL_VirtualDirectory();
    return Val_CL_VirtualDirectory(virt_dir);
}

//  CL_VirtualDirectory(
//      const CL_VirtualFileSystem &file_system, const CL_String &base_path);

// vim: sw=4 sts=4 ts=4 et
