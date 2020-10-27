/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Network/Socket/tcp_connection.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_TCPConnection_stub.hpp"
#include "CL_SocketName_stub.hpp"

CAMLextern_C value
caml_CL_TCPConnection_init(value remote, value local, value unit)
{
    CL_TCPConnection *conn;
    if (local == Val_none) {
        conn = new CL_TCPConnection(*CL_SocketName_val(remote));
    } else {
        conn = new CL_TCPConnection(*CL_SocketName_val(remote),
                *CL_SocketName_val(Some_val(local)));
    }
    return Val_CL_TCPConnection(conn);
}

//CL_TCPConnection(int socket, bool close_socket);

CAMLextern_C value
caml_CL_TCPConnection_delete(value conn)
{
    delete CL_TCPConnection_val(conn);
    nullify_ptr(conn);
    return Val_unit;
}

CAMLextern_C value
caml_CL_TCPConnection_send(
        value conn, value data, value send_all, value unit)
{
    int n;
    if (send_all == Val_none)
        n = CL_TCPConnection_val(conn)->send(
                String_val(data),
                caml_string_length(data));
    else
        n = CL_TCPConnection_val(conn)->send(
                String_val(data),
                caml_string_length(data),
                Bool_val(Some_val(send_all)));
    return Val_int(n);
}

CAMLextern_C value
caml_CL_TCPConnection_receive(
        value conn, value data, value receive_all, value unit)
{
    int n;
    if (receive_all == Val_none)
        n = CL_TCPConnection_val(conn)->receive(
                Bytes_val(data),
                caml_string_length(data) - 1);
    else
        n = CL_TCPConnection_val(conn)->receive(
                Bytes_val(data),
                caml_string_length(data) - 1,
                Bool_val(Some_val(receive_all)));
    return Val_int(n);
}

CAMLextern_C value
caml_CL_TCPConnection_disconnect_graceful(value conn)
{
    CL_TCPConnection_val(conn)->disconnect_graceful();
    return Val_unit;
}

CAMLextern_C value
caml_CL_TCPConnection_disconnect_abortive(value conn)
{
    CL_TCPConnection_val(conn)->disconnect_abortive();
    return Val_unit;
}

CAMLextern_C value
caml_CL_TCPConnection_set_nodelay(value conn, value enable, value unit)
{
    if (enable == Val_none) {
        CL_TCPConnection_val(conn)->set_nodelay();
    } else {
        CL_TCPConnection_val(conn)->set_nodelay(Bool_val(enable));
    }
    return Val_unit;
}

//  CL_TCPConnection();
//  CL_TCPConnection(const CL_SocketName &remote);
//  CL_TCPConnection(const CL_SocketName &remote, const CL_SocketName &local);
//  CL_TCPConnection(int socket, bool close_socket);
//  int get_handle() const;
//  CL_SocketName get_local_name() const;
//  CL_SocketName get_remote_name() const;
//  CL_Event get_read_event();
//  CL_Event get_write_event();

CAMLextern_C value
caml_CL_TCPConnection_get_local_name(value unit)
{
    CL_TCPConnection conn = CL_TCPConnection();
    CL_SocketName *socket_name = new CL_SocketName();
    *socket_name = conn.get_local_name();
    return Val_CL_SocketName(socket_name);
}

CAMLextern_C value
caml_CL_TCPConnection_get_remote_name(value unit)
{
    CL_TCPConnection conn = CL_TCPConnection();
    CL_SocketName *socket_name = new CL_SocketName();
    *socket_name = conn.get_remote_name();
    return Val_CL_SocketName(socket_name);
}

// vim: sw=4 sts=4 ts=4 et
