/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/Window/input_event.h>
#include <ClanLib/Display/Window/input_device.h>

#include <queue>
#include <tuple>

static std::queue<
    std::tuple<CL_InputEvent, int, CL_InputDevice::Type>> cl_event_queue;

#define callbacks_for_device(dev) \
static void cb_##dev##_on_key_down( \
    const CL_InputEvent &key, const CL_InputState &state, int dev_num) \
{ cl_event_queue.push(std::make_tuple(key, dev_num, CL_InputDevice::dev)); } \
static void cb_##dev##_on_key_up( \
    const CL_InputEvent &key, const CL_InputState &state, int dev_num) \
{ cl_event_queue.push(std::make_tuple(key, dev_num, CL_InputDevice::dev)); } \
static void cb_##dev##_on_pointer_move( \
    const CL_InputEvent &key, const CL_InputState &state, int dev_num) \
{ cl_event_queue.push(std::make_tuple(key, dev_num, CL_InputDevice::dev)); } \
static void cb_##dev##_on_axis_move( \
    const CL_InputEvent &key, const CL_InputState &state, int dev_num) \
{ cl_event_queue.push(std::make_tuple(key, dev_num, CL_InputDevice::dev)); }

callbacks_for_device(keyboard)
callbacks_for_device(pointer)
callbacks_for_device(joystick)
callbacks_for_device(tablet)
callbacks_for_device(unknown)

/* TODO:
static void cb_on_window_close() {}
  CL_Slot slot_quit = window.sig_window_close().connect(cb_on_window_close);
*/

#include <map>
static std::map<int, CL_Slot *> sig_conn_slots;

#define SWITCH_CB(cb) \
    void (* cb_##cb)(const CL_InputEvent &key, \
            const CL_InputState &state, int dev_number); \
    switch (dev_t) \
    { \
    case CL_InputDevice::keyboard: cb_##cb = cb_keyboard_##cb; break; \
    case CL_InputDevice::pointer:  cb_##cb = cb_pointer_##cb;  break; \
    case CL_InputDevice::joystick: cb_##cb = cb_joystick_##cb; break; \
    case CL_InputDevice::tablet:   cb_##cb = cb_tablet_##cb;   break; \
    case CL_InputDevice::unknown:  cb_##cb = cb_unknown_##cb;  break; \
    }

void
CL_InputDevice_sig_key_down_connect(
        CL_InputDevice *inDev, int dev_number)
{
    CL_InputDevice::Type dev_t = inDev->get_type();
    int id = static_cast<int>(dev_t);
    CL_Slot *slot_input_down = new CL_Slot();
    SWITCH_CB(on_key_down)
    *slot_input_down = inDev->sig_key_down().connect(
            cb_on_key_down, dev_number);
    sig_conn_slots[id] = slot_input_down;
}

void
CL_InputDevice_sig_key_down_disconnect(
        CL_InputDevice *inDev)
{
    CL_InputDevice::Type dev_t = inDev->get_type();
    int id = static_cast<int>(dev_t);
    CL_Slot *slot_input_down = sig_conn_slots[id];
    sig_conn_slots.erase(id);
    delete slot_input_down;
}

void
CL_InputDevice_sig_key_up_connect(
        CL_InputDevice *inDev, int dev_number)
{
    CL_InputDevice::Type dev_t = inDev->get_type();
    int id = static_cast<int>(dev_t);
    CL_Slot *slot_input_up = new CL_Slot();
    SWITCH_CB(on_key_up)
    *slot_input_up = inDev->sig_key_up().connect(
            cb_on_key_up, dev_number);
    sig_conn_slots[id] = slot_input_up;
}

void
CL_InputDevice_sig_key_up_disconnect(
        CL_InputDevice *inDev)
{
    CL_InputDevice::Type dev_t = inDev->get_type();
    int id = static_cast<int>(dev_t);
    CL_Slot *slot_input_up = sig_conn_slots[id];
    sig_conn_slots.erase(id);
    delete slot_input_up;
}

void
CL_InputDevice_sig_pointer_move_connect(
        CL_InputDevice *inDev, int dev_number)
{
    CL_InputDevice::Type dev_t = inDev->get_type();
    int id = static_cast<int>(dev_t);
    CL_Slot *slot_pointer_move = new CL_Slot();
    SWITCH_CB(on_pointer_move)
    *slot_pointer_move = inDev->sig_pointer_move().connect(
            cb_on_pointer_move, dev_number);
    sig_conn_slots[id] = slot_pointer_move;
}

void
CL_InputDevice_sig_pointer_move_disconnect(
        CL_InputDevice *inDev)
{
    CL_InputDevice::Type dev_t = inDev->get_type();
    int id = static_cast<int>(dev_t);
    CL_Slot *slot_pointer_move = sig_conn_slots[id];
    sig_conn_slots.erase(id);
    delete slot_pointer_move;
}

void
CL_InputDevice_sig_axis_move_connect(
        CL_InputDevice *inDev, int dev_number)
{
    CL_InputDevice::Type dev_t = inDev->get_type();
    int id = static_cast<int>(dev_t);
    CL_Slot *slot_axis_move = new CL_Slot();
    SWITCH_CB(on_axis_move)
    *slot_axis_move = inDev->sig_axis_move().connect(
            cb_on_axis_move, dev_number);
    sig_conn_slots[id] = slot_axis_move;
}

void
CL_InputDevice_sig_axis_move_disconnect(
        CL_InputDevice *inDev)
{
    CL_InputDevice::Type dev_t = inDev->get_type();
    int id = static_cast<int>(dev_t);
    CL_Slot *slot_axis_move = sig_conn_slots[id];
    sig_conn_slots.erase(id);
    delete slot_axis_move;
}

bool
CL_InputEventQueue_isEmpty()
{
    return cl_event_queue.empty();
}

typedef struct {
    CL_InputEvent * input_event;
    int device_number;
    CL_InputDevice::Type device_type;
} CL_polledEvent;

bool
CL_InputEventQueue_pollEvent(CL_polledEvent *pEv)
{
    if (CL_InputEventQueue_isEmpty())
        return false;

    pEv->input_event = new CL_InputEvent();

    std::tie(
        *pEv->input_event,
        pEv->device_number,
        pEv->device_type) = cl_event_queue.front();

    cl_event_queue.pop();

    return true;
}

// TODO:
//  CL_Signal_v2<const CL_InputEvent &, const CL_InputState &> &sig_ball_move();
//  CL_Signal_v2<const CL_InputEvent &, const CL_InputState &> &sig_key_dblclk();
//  CL_Signal_v2<const CL_InputEvent &, const CL_InputState &> &sig_proximity_change();

// vim: sw=4 sts=4 ts=4 et
