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
#include <ClanLib/Network/NetGame/event.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_NetGameEvent_stub.hpp"
#include "CL_NetGameEventValue_stub.hpp"

CAMLextern_C value
caml_CL_NetGameEvent_init0(value name)
{
    CL_NetGameEvent *ev = new CL_NetGameEvent(CL_String_val(name));
    return Val_CL_NetGameEvent(ev);
}

CAMLextern_C value
caml_CL_NetGameEvent_init1(value name, value arg1)
{
    CL_NetGameEvent *ev = new CL_NetGameEvent(
            CL_String_val(name),
            *CL_NetGameEventValue_val(arg1));
    return Val_CL_NetGameEvent(ev);
}

CAMLextern_C value
caml_CL_NetGameEvent_init2(
        value name, value arg1, value arg2)
{
    CL_NetGameEvent *ev = new CL_NetGameEvent(
            CL_String_val(name),
            *CL_NetGameEventValue_val(arg1),
            *CL_NetGameEventValue_val(arg2));
    return Val_CL_NetGameEvent(ev);
}

CAMLextern_C value
caml_CL_NetGameEvent_init3(
        value name, value arg1, value arg2, value arg3)
{
    CL_NetGameEvent *ev = new CL_NetGameEvent(
            CL_String_val(name),
            *CL_NetGameEventValue_val(arg1),
            *CL_NetGameEventValue_val(arg2),
            *CL_NetGameEventValue_val(arg3));
    return Val_CL_NetGameEvent(ev);
}

CAMLextern_C value
caml_CL_NetGameEvent_init4(
        value name, value arg1, value arg2, value arg3, value arg4)
{
    CL_NetGameEvent *ev = new CL_NetGameEvent(
            CL_String_val(name),
            *CL_NetGameEventValue_val(arg1),
            *CL_NetGameEventValue_val(arg2),
            *CL_NetGameEventValue_val(arg3),
            *CL_NetGameEventValue_val(arg4));
    return Val_CL_NetGameEvent(ev);
}

CAMLextern_C value
caml_CL_NetGameEvent_init5(
        value name, value arg1, value arg2, value arg3, value arg4, value arg5)
{
    CL_NetGameEvent *ev = new CL_NetGameEvent(
            CL_String_val(name),
            *CL_NetGameEventValue_val(arg1),
            *CL_NetGameEventValue_val(arg2),
            *CL_NetGameEventValue_val(arg3),
            *CL_NetGameEventValue_val(arg4),
            *CL_NetGameEventValue_val(arg5));
    return Val_CL_NetGameEvent(ev);
}

CAMLextern_C value
caml_CL_NetGameEvent_init5_bc(value *argv, int argn)
{
    return caml_CL_NetGameEvent_init5(
            argv[0], argv[1], argv[2], argv[3], argv[4], argv[5]);
}


CAMLextern_C value
caml_CL_NetGameEvent_delete(value ev)
{
    delete CL_NetGameEvent_val(ev);
    nullify_ptr(ev);
    return Val_unit;
}

// vim: sw=4 sts=4 ts=4 et
