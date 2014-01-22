/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <vector>
#include <ClanLib/Core/Text/string_types.h>
#include <ClanLib/Network/NetGame/connection.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_NetGameConnection_stub.hpp"

#if 0
CAMLextern_C value
caml_CL_NetGameConnection_init(value unit)
{
    CL_NetGameConnection *v = new CL_NetGameConnection();
	//CL_NetGameConnection(CL_NetGameConnectionSite *site, const CL_TCPConnection &connection);
	//CL_NetGameConnection(CL_NetGameConnectionSite *site, const CL_SocketName &socket_name);
    return Val_CL_NetGameConnection(v);
}
#endif

CAMLextern_C value
caml_CL_NetGameConnection_delete(value v)
{
    delete CL_NetGameConnection_val(v);
    nullify_ptr(v);
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
