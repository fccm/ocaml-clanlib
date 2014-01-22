/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/IOData/iodevice_memory.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_IODevice_Memory_stub.hpp"
#include "CL_DataBuffer_stub.hpp"

CAMLextern_C value
caml_CL_IODevice_Memory_init(value unit)
{
    CL_IODevice_Memory *v = new CL_IODevice_Memory();
    return Val_CL_IODevice_Memory(v);
}

CAMLextern_C value
caml_CL_IODevice_Memory_init_from_buffer(value buf)
{
    CL_IODevice_Memory *v = new CL_IODevice_Memory(*CL_DataBuffer_val(buf));
    return Val_CL_IODevice_Memory(v);
}

CAMLextern_C value
caml_CL_IODevice_Memory_delete(value v)
{
    delete CL_IODevice_Memory_val(v);
    nullify_ptr(v);
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
