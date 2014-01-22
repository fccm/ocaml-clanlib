#ifndef _CL_INPUTEVENT_TYPE_INC
#define _CL_INPUTEVENT_TYPE_INC

#include <ClanLib/Display/Window/input_event.h>

static const CL_InputEvent::Type caml_table_inputevent_type[] = {
    CL_InputEvent::no_key,
    CL_InputEvent::pressed,
    CL_InputEvent::released,
    CL_InputEvent::doubleclick,
    CL_InputEvent::pointer_moved,
    CL_InputEvent::axis_moved,
//  CL_InputEvent::ball_moved,
    CL_InputEvent::proximity_change,
};

#define CL_InputEvent_Type_val(v)  (caml_table_inputevent_type[Long_val(v)])

static inline value
Val_CL_InputEvent_Type(CL_InputEvent::Type evt)
{
    switch (evt)
    {
        case CL_InputEvent::no_key:             return Val_int(CL_InputEvent::no_key);
        case CL_InputEvent::pressed:            return Val_int(CL_InputEvent::pressed);
        case CL_InputEvent::released:           return Val_int(CL_InputEvent::released);
        case CL_InputEvent::doubleclick:        return Val_int(CL_InputEvent::doubleclick);
        case CL_InputEvent::pointer_moved:      return Val_int(CL_InputEvent::pointer_moved);
        case CL_InputEvent::axis_moved:         return Val_int(CL_InputEvent::axis_moved);
//      case CL_InputEvent::ball_moved:         return Val_int(CL_InputEvent::ball_moved);
        case CL_InputEvent::proximity_change:   return Val_int(CL_InputEvent::proximity_change);

        default: caml_failwith("CL_InputEvent.kind");
    }
    caml_failwith("CL_InputEvent.kind");
}

#endif // _CL_INPUTEVENT_TYPE_INC
// vim: sw=4 sts=4 ts=4 et
