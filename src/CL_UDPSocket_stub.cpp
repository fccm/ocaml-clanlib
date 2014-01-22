/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Network/Socket/udp_socket.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_UDPSocket_stub.hpp"
#include "CL_SocketName_stub.hpp"

CAMLextern_C value
caml_CL_UDPSocket_init(value local_name, value force_bind, value unit)
{
    CL_UDPSocket *sock;
    if (force_bind == Val_none) {
        sock = new CL_UDPSocket(*CL_SocketName_val(local_name));
    } else {
        sock = new CL_UDPSocket(*CL_SocketName_val(local_name),
                Bool_val(Some_val(force_bind)));
    }
    return Val_CL_UDPSocket(sock);
}

//  CL_UDPSocket();
//  CL_UDPSocket(int socket, bool close_socket);

CAMLextern_C value
caml_CL_UDPSocket_delete(value sock)
{
    delete CL_UDPSocket_val(sock);
    nullify_ptr(sock);
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
