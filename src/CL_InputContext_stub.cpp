/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/Window/input_context.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"
#include "CL_InputContext_stub.hpp"
#include "CL_InputDevice_stub.hpp"

CALL_GETTER( CL_InputContext, get_keyboard_count, int, int )
CALL_GETTER( CL_InputContext, get_mouse_count,    int, int )
CALL_GETTER( CL_InputContext, get_joystick_count, int, int )
CALL_GETTER( CL_InputContext, get_tablet_count,   int, int )

#ifdef GEN_CAML_CODE
ML_CALL_GETTER( CL_InputContext, get_keyboard_count, int, int )
ML_CALL_GETTER( CL_InputContext, get_mouse_count,    int, int )
ML_CALL_GETTER( CL_InputContext, get_joystick_count, int, int )
ML_CALL_GETTER( CL_InputContext, get_tablet_count,   int, int )
#endif

CAMLextern_C value
caml_CL_InputContext_get_keyboard(value ic, value keyboard, value unit)
{
    CL_InputDevice *idev = new CL_InputDevice();
    if (keyboard == Val_none) {
        *idev = CL_InputContext_val(ic)->get_keyboard();
    } else {
        int _keyboard = Int_val(Some_val(keyboard));
        *idev = CL_InputContext_val(ic)->get_keyboard(_keyboard);
    }
    return Val_CL_InputDevice(idev);
}

CAMLextern_C value
caml_CL_InputContext_get_mouse(value ic, value mouse, value unit)
{
    CL_InputDevice *idev = new CL_InputDevice();
    if (mouse == Val_none) {
        *idev = CL_InputContext_val(ic)->get_mouse();
    } else {
        int _mouse = Int_val(Some_val(mouse));
        *idev = CL_InputContext_val(ic)->get_mouse(_mouse);
    }
    return Val_CL_InputDevice(idev);
}

CAMLextern_C value
caml_CL_InputContext_get_joystick(value ic, value joystick, value unit)
{
    CL_InputDevice *idev = new CL_InputDevice();
    if (joystick == Val_none) {
        *idev = CL_InputContext_val(ic)->get_joystick();
    } else {
        int _joystick = Int_val(Some_val(joystick));
        *idev = CL_InputContext_val(ic)->get_joystick(_joystick);
    }
    return Val_CL_InputDevice(idev);
}

CAMLextern_C value
caml_CL_InputContext_get_tablet(value ic, value tablet, value unit)
{
    CL_InputDevice *idev = new CL_InputDevice();
    if (tablet == Val_none) {
        *idev = CL_InputContext_val(ic)->get_tablet();
    } else {
        int _tablet = Int_val(Some_val(tablet));
        *idev = CL_InputContext_val(ic)->get_tablet(_tablet);
    }
    return Val_CL_InputDevice(idev);
}

CAMLextern_C value
caml_CL_InputContext_get_device(value ic, value device_name)
{
    CL_InputDevice *idev = new CL_InputDevice();
    *idev = CL_InputContext_val(ic)->get_device(
            CL_StringRef_val(device_name));
    return Val_CL_InputDevice(idev);
}

// vim: sw=4 sts=4 ts=4 et
