/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/Window/keys.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"
#include "CL_Key_stub.hpp"
#include "CL_InputDevice_stub.hpp"
#include "CL_Point_stub.hpp"

OBJ_DELETE( CL_InputDevice )

CALL_METH_R0( CL_InputDevice, get_position, CL_Point, CL_Point.t )
CALL_METH_R0( CL_InputDevice, get_name, CL_String, string )
CALL_METH_R0( CL_InputDevice, get_device_name, CL_String, string )
CALL_METH_R1( CL_InputDevice, get_keycode, bool, bool, Keycode_val, key:CL_Key.keycode )

CALL_METH_R0( CL_InputDevice, get_axis_count, int, int )
CALL_METH_R0( CL_InputDevice, get_button_count, int, int )
CALL_METH_R0( CL_InputDevice, in_proximity, bool, bool )
CALL_METH_R1( CL_InputDevice, get_axis, double, float, Int_val, index:int )

#ifdef GEN_CAML_CODE
ML_OBJ_DELETE( CL_InputDevice )

ML_CALL_METH_R0( CL_InputDevice, get_position, CL_Point, CL_Point.t )
ML_CALL_METH_R0( CL_InputDevice, get_name, CL_String, string )
ML_CALL_METH_R0( CL_InputDevice, get_device_name, CL_String, string )
ML_CALL_METH_R1( CL_InputDevice, get_keycode, bool, bool, Keycode_val, key:CL_Key.keycode )

ML_CALL_METH_R0( CL_InputDevice, get_axis_count, int, int )
ML_CALL_METH_R0( CL_InputDevice, get_button_count, int, int )
ML_CALL_METH_R0( CL_InputDevice, in_proximity, bool, bool )
ML_CALL_METH_R1( CL_InputDevice, get_axis, double, float, Int_val, index:int )
#endif

// vim: sw=4 sts=4 ts=4 et
