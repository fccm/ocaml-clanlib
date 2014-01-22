/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Network/setupnetwork.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_SetupNetwork_stub.hpp"

CAMLextern_C value
caml_CL_SetupNetwork_init(value unit)
{
    CL_SetupNetwork *setup_network = new CL_SetupNetwork;
    return Val_CL_SetupNetwork(setup_network);
}

CAMLextern_C value
caml_CL_SetupNetwork_delete(value setup_network)
{
    delete CL_SetupNetwork_val(setup_network);
    nullify_ptr(setup_network);
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
