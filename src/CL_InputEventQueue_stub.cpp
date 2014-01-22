/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include "CL_InputEventQueue.hpp"
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "CL_InputEvent_stub.hpp"
#include "CL_InputDevice_stub.hpp"

static inline
value Val_CL_InputDevice_Type(CL_InputDevice::Type dev_t)
{
    switch (dev_t)
    {
        case CL_InputDevice::keyboard: return Val_int(0);
        case CL_InputDevice::pointer:  return Val_int(1);
        case CL_InputDevice::joystick: return Val_int(2);
        case CL_InputDevice::tablet:   return Val_int(3);
        case CL_InputDevice::unknown:  return Val_int(4);
        default: caml_failwith("CL_InputDevice.kind");
    }
    caml_failwith("CL_InputDevice.kind");
    return Val_int(4);
}


CAMLextern_C value
caml_CL_InputDevice_sig_key_down_connect(value in_dev, value dev_number)
{
    CL_InputDevice_sig_key_down_connect(
            CL_InputDevice_val(in_dev), Int_val(dev_number));
    return Val_unit;
}

CAMLextern_C value
caml_CL_InputDevice_sig_key_down_disconnect(value in_dev)
{
    CL_InputDevice_sig_key_down_disconnect(CL_InputDevice_val(in_dev));
    return Val_unit;
}

CAMLextern_C value
caml_CL_InputDevice_sig_key_up_connect(value in_dev, value dev_number)
{
    CL_InputDevice_sig_key_up_connect(
            CL_InputDevice_val(in_dev), Int_val(dev_number));
    return Val_unit;
}

CAMLextern_C value
caml_CL_InputDevice_sig_key_up_disconnect(value in_dev)
{
    CL_InputDevice_sig_key_up_disconnect(CL_InputDevice_val(in_dev));
    return Val_unit;
}

CAMLextern_C value
caml_CL_InputDevice_sig_pointer_move_connect(value in_dev, value dev_number)
{
    CL_InputDevice_sig_pointer_move_connect(
            CL_InputDevice_val(in_dev), Int_val(dev_number));
    return Val_unit;
}

CAMLextern_C value
caml_CL_InputDevice_sig_pointer_move_disconnect(value in_dev)
{
    CL_InputDevice_sig_pointer_move_disconnect(CL_InputDevice_val(in_dev));
    return Val_unit;
}

CAMLextern_C value
caml_CL_InputDevice_sig_axis_move_connect(value in_dev, value dev_number)
{
    CL_InputDevice_sig_axis_move_connect(
            CL_InputDevice_val(in_dev), Int_val(dev_number));
    return Val_unit;
}

CAMLextern_C value
caml_CL_InputDevice_sig_axis_move_disconnect(value in_dev)
{
    CL_InputDevice_sig_axis_move_disconnect(CL_InputDevice_val(in_dev));
    return Val_unit;
}


CAMLextern_C value
caml_get_InputEvent_list(value unit)
{
    CAMLparam0();
    CAMLlocal3(li, cons, mlev);

    li = Val_emptylist;

    while (!CL_InputEventQueue_isEmpty())
    {
        CL_polledEvent pEv;
        pEv.input_event = new CL_InputEvent();

        bool st = CL_InputEventQueue_pollEvent(&pEv);
        if (!st) { delete pEv.input_event; continue; }

        mlev = caml_alloc(3, 0);
        Store_field(mlev, 0, Val_CL_InputEvent(pEv.input_event));
        Store_field(mlev, 1, Val_int(pEv.device_number));
        Store_field(mlev, 2, Val_CL_InputDevice_Type(pEv.device_type));

        cons = caml_alloc(2, 0);
        Store_field(cons, 0, mlev);
        Store_field(cons, 1, li);
        li = cons;
    }

    CAMLreturn(li);
}

//  CL_Signal_v2<const CL_InputEvent &, const CL_InputState &> &sig_ball_move();
//  CL_Signal_v2<const CL_InputEvent &, const CL_InputState &> &sig_key_dblclk();
//  CL_Signal_v2<const CL_InputEvent &, const CL_InputState &> &sig_proximity_change();

// vim: sw=4 sts=4 ts=4 et
