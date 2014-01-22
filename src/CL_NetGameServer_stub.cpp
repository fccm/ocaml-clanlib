/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Network/NetGame/server.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"
#include "CL_NetGameServer_stub.hpp"

CAMLextern_C value
caml_CL_NetGameServer_init(value unit)
{
    CL_NetGameServer *server = new CL_NetGameServer();
    return Val_CL_NetGameServer(server);
}

OBJ_DELETE( CL_NetGameServer )
#ifdef GEN_CAML_CODE
ML_OBJ_DELETE( CL_NetGameServer )
#endif

/*
    void start(const CL_String &port);

    void start(const CL_String &address, const CL_String &port);

    void process_events();

    void stop();
*/
// vim: sw=4 sts=4 ts=4 et
