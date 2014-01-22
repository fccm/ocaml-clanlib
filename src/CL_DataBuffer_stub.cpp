/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/System/databuffer.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_DataBuffer_stub.hpp"

CAMLextern_C value
caml_CL_DataBuffer_init(value unit)
{
    CL_DataBuffer *buf = new CL_DataBuffer();
    return Val_CL_DataBuffer(buf);
}

CAMLextern_C value
caml_CL_DataBuffer_copy(value orig)
{
    CL_DataBuffer *buf = new CL_DataBuffer(*CL_DataBuffer_val(orig));
    return Val_CL_DataBuffer(buf);
}

CAMLextern_C value
caml_CL_DataBuffer_of_string(value str)
{
    CL_DataBuffer *buf = new CL_DataBuffer(
            String_val(str),
            caml_string_length(str));
    return Val_CL_DataBuffer(buf);
}

/* TODO:
    CL_DataBuffer(int size, CL_MemoryPool *pool = 0);
    CL_DataBuffer(const void *data, int size, CL_MemoryPool *pool = 0);
    CL_DataBuffer(const CL_DataBuffer &data, int pos, int size = -1, CL_MemoryPool *pool = 0);
*/

CAMLextern_C value
caml_CL_DataBuffer_delete(value buf)
{
    delete CL_DataBuffer_val(buf);
    nullify_ptr(buf);
    return Val_unit;
}

CAMLextern_C value
caml_CL_DataBuffer_get_size(value buf)
{
    int size = CL_DataBuffer_val(buf)->get_size();
    return Val_long(size);
}

CAMLextern_C value
caml_CL_DataBuffer_get_capacity(value buf)
{
    int cap = CL_DataBuffer_val(buf)->get_capacity();
    return Val_long(cap);
}

CAMLextern_C value
caml_CL_DataBuffer_set_size(value buf, value size)
{
    CL_DataBuffer_val(buf)->set_size(Int_val(size));
    return Val_unit;
}

CAMLextern_C value
caml_CL_DataBuffer_set_capacity(value buf, value cap)
{
    CL_DataBuffer_val(buf)->set_capacity(Int_val(cap));
    return Val_unit;
}

CAMLextern_C value
caml_CL_DataBuffer_get_i(value buf, value i)
{
    const char c =
        (*CL_DataBuffer_val(buf))[ Int_val(i) ];
       
    return Val_char(c);
}

CAMLextern_C value
caml_CL_DataBuffer_set_i(value buf, value i, value c)
{
    (*CL_DataBuffer_val(buf))[ Int_val(i) ] = Char_val(c);
    return Val_unit;
}

/* TODO:
    char *get_data();
    const char *get_data();
    char &operator[](int i);
    const char &operator[](int i);
    char &operator[](unsigned int i);
    const char &operator[](unsigned int i);
    bool is_null();

    CL_DataBuffer &operator =(const CL_DataBuffer &copy);
*/

// vim: sw=4 sts=4 ts=4 et
