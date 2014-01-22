/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Network/NetGame/event_value.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_NetGameEventValue_stub.hpp"

CAMLextern_C value
caml_CL_NetGameEventValue_init(value unit)
{
    CL_NetGameEventValue *ev = new CL_NetGameEventValue();
    return Val_CL_NetGameEventValue(ev);
}

CAMLextern_C value
caml_CL_NetGameEventValue_of_int(value val)
{
    CL_NetGameEventValue *ev = new CL_NetGameEventValue((int)Int_val(val));
    return Val_CL_NetGameEventValue(ev);
}

CAMLextern_C value
caml_CL_NetGameEventValue_of_float(value val)
{
    CL_NetGameEventValue *ev = new CL_NetGameEventValue(Float_val(val));
    return Val_CL_NetGameEventValue(ev);
}

CAMLextern_C value
caml_CL_NetGameEventValue_of_string(value val)
{
    CL_NetGameEventValue *ev = new CL_NetGameEventValue(CL_String_val(val));
    return Val_CL_NetGameEventValue(ev);
}

CAMLextern_C value
caml_CL_NetGameEventValue_delete(value ev)
{
    delete CL_NetGameEventValue_val(ev);
    nullify_ptr(ev);
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
