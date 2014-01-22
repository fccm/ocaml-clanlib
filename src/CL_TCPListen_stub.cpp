/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Network/Socket/tcp_listen.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_SocketName_stub.hpp"
#include "CL_TCPConnection_stub.hpp"

#define Val_CL_TCPListen(v) ((value)(v))
#define CL_TCPListen_val(v) ((CL_TCPListen *)(v))

CAMLextern_C value
caml_CL_TCPListen_init(value name, value queue_size, value force_bind)
{
    CL_TCPListen *tl = new CL_TCPListen(
        *CL_SocketName_val(name), Int_val(queue_size), Bool_val(force_bind));
    return Val_CL_TCPListen(tl);
}

CAMLextern_C value
caml_CL_TCPListen_delete(value tl)
{
    delete CL_TCPListen_val(tl);
    nullify_ptr(tl);
    return Val_unit;
}

CAMLextern_C value
caml_CL_TCPListen_accept(value tl)
{
    CL_TCPConnection *conn = new CL_TCPConnection();
    *conn = CL_TCPListen_val(tl)->accept();
    return Val_CL_TCPConnection(conn);
}

// vim: sw=4 sts=4 ts=4 et
