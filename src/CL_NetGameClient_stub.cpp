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
#include <ClanLib/Network/NetGame/client.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_NetGameClient_stub.hpp"

CAMLextern_C value
caml_CL_NetGameClient_init(value unit)
{
    CL_NetGameClient *v = new CL_NetGameClient();
    return Val_CL_NetGameClient(v);
}

CAMLextern_C value
caml_CL_NetGameClient_delete(value v)
{
    delete CL_NetGameClient_val(v);
    nullify_ptr(v);
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
