#ifndef _CL_INPUTEVENT_QUEUE_INC
#define _CL_INPUTEVENT_QUEUE_INC

#include <ClanLib/Display/Window/input_device.h>
#include <ClanLib/Display/Window/input_event.h>

void CL_InputDevice_sig_key_down_connect(
        CL_InputDevice *inDev, int dev_number);
void CL_InputDevice_sig_key_down_disconnect(
        CL_InputDevice *inDev);
void CL_InputDevice_sig_key_up_connect(
        CL_InputDevice *inDev, int dev_number);
void CL_InputDevice_sig_key_up_disconnect(
        CL_InputDevice *inDev);
void CL_InputDevice_sig_pointer_move_connect(
        CL_InputDevice *inDev, int dev_number);
void CL_InputDevice_sig_pointer_move_disconnect(
        CL_InputDevice *inDev);
void CL_InputDevice_sig_axis_move_connect(
        CL_InputDevice *inDev, int dev_number);
void CL_InputDevice_sig_axis_move_disconnect(
        CL_InputDevice *inDev);

bool CL_InputEventQueue_isEmpty();

typedef struct {
    CL_InputEvent * input_event;
    int device_number;
    CL_InputDevice::Type device_type;
} CL_polledEvent;

bool CL_InputEventQueue_pollEvent(CL_polledEvent *pEv);

#endif // _CL_INPUTEVENT_QUEUE_INC
