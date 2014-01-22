/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Network/Socket/socket_name.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"
#include "CL_SocketName_stub.hpp"

CAMLextern_C value
caml_CL_SocketName_init(value address, value port, value unit)
{
    CL_SocketName *sock_name;
    unsigned int pr = 0;

    if (address != Val_none) pr |= 0b0001;
    if (port    != Val_none) pr |= 0b0010;

    switch (pr) {
        case 0b0000:
            sock_name = new CL_SocketName();
            break;
        case 0b0001:
            caml_invalid_argument("CL_DisplayWindowDescription.init");
            break;
        case 0b0010:
            sock_name = new CL_SocketName(
                            CL_String_val(Some_val(port)));
            break;
        case 0b0011:
            sock_name = new CL_SocketName(
                            CL_String_val(Some_val(address)),
                            CL_String_val(Some_val(port)));
            break;
        default:
            caml_failwith("CL_DisplayWindowDescription.init");
    }

    return Val_CL_SocketName(sock_name);
}

CAMLextern_C value
caml_CL_SocketName_copy(value sock_name)
{
    CL_SocketName *copy = new CL_SocketName(*CL_SocketName_val(sock_name));
    return Val_CL_SocketName(copy);
}

CAMLextern_C value
caml_CL_SocketName_delete(value sock_name)
{
    delete CL_SocketName_val(sock_name);
    nullify_ptr(sock_name);
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
