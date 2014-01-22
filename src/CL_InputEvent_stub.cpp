/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/Window/input_event.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"
#include "CL_InputEvent_stub.hpp"
#include "CL_InputEvent_Type_stub.hpp"
#include "CL_Point_stub.hpp"
#include "CL_Key_stub.hpp"
#include "CL_Mouse_stub.hpp"

CAMLextern_C value
caml_CL_InputEvent_init(value unit)
{
    CL_InputEvent *in_ev = new CL_InputEvent();
    return Val_CL_InputEvent(in_ev);
}

CAMLextern_C value
caml_CL_InputEvent_delete(value in_ev)
{
    delete CL_InputEvent_val(in_ev);
    nullify_ptr(in_ev);
    return Val_unit;
}

CALL_GETTER_ATTR( CL_InputEvent, id, int, int )
CALL_GETTER_ATTR( CL_InputEvent, str, CL_String, string )
//CALL_GETTER_ATTR( CL_InputEvent, type, Type, )
//CALL_GETTER_ATTR( CL_InputEvent, device, CL_InputDevice, )
CALL_GETTER_ATTR( CL_InputEvent, mouse_pos,    CL_Point, point )
CALL_GETTER_ATTR( CL_InputEvent, axis_pos,     double, float )
CALL_GETTER_ATTR( CL_InputEvent, repeat_count, int,  int )
CALL_GETTER_ATTR( CL_InputEvent, alt,          bool, bool )
CALL_GETTER_ATTR( CL_InputEvent, shift,        bool, bool )
CALL_GETTER_ATTR( CL_InputEvent, ctrl,         bool, bool )

CALL_GET_ATTR( CL_InputEvent, get_key, id, Val_keycode, CL_Key.keycode )
CALL_GET_ATTR( CL_InputEvent, get_mouse, id, Val_mouse, CL_Mouse.t )
CALL_GET_ATTR( CL_InputEvent, get_type, type, Val_CL_InputEvent_Type, kind )

#ifdef GEN_CAML_CODE
ML_CALL_GETTER_ATTR( CL_InputEvent, id, int, int )
ML_CALL_GETTER_ATTR( CL_InputEvent, str, CL_String, string )
//ML_CALL_GETTER_ATTR( CL_InputEvent, type, Type, )
//ML_CALL_GETTER_ATTR( CL_InputEvent, device, CL_InputDevice, )
ML_CALL_GETTER_ATTR( CL_InputEvent, mouse_pos,    CL_Point, point )
ML_CALL_GETTER_ATTR( CL_InputEvent, axis_pos,     double, float )
ML_CALL_GETTER_ATTR( CL_InputEvent, repeat_count, int,  int )
ML_CALL_GETTER_ATTR( CL_InputEvent, alt,          bool, bool )
ML_CALL_GETTER_ATTR( CL_InputEvent, shift,        bool, bool )
ML_CALL_GETTER_ATTR( CL_InputEvent, ctrl,         bool, bool )

ML_CALL_GET_ATTR( CL_InputEvent, get_key, id, Val_keycode, CL_Key.keycode )
ML_CALL_GET_ATTR( CL_InputEvent, get_mouse, id, Val_mouse, CL_Mouse.t )
ML_CALL_GET_ATTR( CL_InputEvent, get_type, type, Val_CL_InputEvent_Type, kind )
#endif

// vim: sw=4 sts=4 ts=4 et
