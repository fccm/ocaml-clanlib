/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/IOData/iodevice.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_IODevice_stub.hpp"

CAMLextern_C value
caml_CL_IODevice_is_null(value io)
{
    bool b = CL_IODevice_val(io)->is_null();
    return Val_bool(b);
}

CAMLextern_C value
caml_CL_IODevice_get_size(value io)
{
    int size = CL_IODevice_val(io)->get_size();
    return Val_int(size);
}

CAMLextern_C value
caml_CL_IODevice_get_position(value io)
{
    int pos = CL_IODevice_val(io)->get_position();
    return Val_int(pos);
}

CAMLextern_C value
caml_CL_IODevice_is_little_endian(value io)
{
    bool b = CL_IODevice_val(io)->is_little_endian();
    return Val_bool(b);
}

CAMLextern_C value
caml_CL_IODevice_set_little_endian_mode(value io)
{
    CL_IODevice_val(io)->set_little_endian_mode();
    return Val_unit;
}

CAMLextern_C value
caml_CL_IODevice_set_big_endian_mode(value io)
{
    CL_IODevice_val(io)->set_big_endian_mode();
    return Val_unit;
}

CAMLextern_C value
caml_CL_IODevice_set_system_mode(value io)
{
    CL_IODevice_val(io)->set_system_mode();
    return Val_unit;
}

CAMLextern_C value
caml_CL_IODevice_send(value io, value data, value receive_all, value unit)
{
    int r;
    if (receive_all == Val_none)
        r = CL_IODevice_val(io)->send(
                String_val(data),
                caml_string_length(data));
    else
        r = CL_IODevice_val(io)->send(
                String_val(data),
                caml_string_length(data),
                Bool_val(Some_val(receive_all)));

    return Val_long(r);
}

CAMLextern_C value
caml_CL_IODevice_receive(value io, value data, value receive_all, value unit)
{
    int r;
    if (receive_all == Val_none)
        r = CL_IODevice_val(io)->receive(
                String_val(data),
                caml_string_length(data));
    else
        r = CL_IODevice_val(io)->receive(
                String_val(data),
                caml_string_length(data),
                Bool_val(Some_val(receive_all)));

    return Val_long(r);
}

// Conversions of enum CL_IODevice::SeekMode
static const CL_IODevice::SeekMode caml_table_SeekMode[] = {
    CL_IODevice::seek_set,
    CL_IODevice::seek_cur,
    CL_IODevice::seek_end
};

#define SeekMode_val(v) \
    (caml_table_SeekMode[Long_val(v)])

CAMLextern_C value
caml_CL_IODevice_seek(value io, value position, value mode)
{
    bool b = CL_IODevice_val(io)->seek(Long_val(position), SeekMode_val(mode));
    return Val_bool(b);
}

// vim: sw=4 sts=4 ts=4 et
