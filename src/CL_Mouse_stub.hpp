#ifndef _CL_MOUSE_INC
#define _CL_MOUSE_INC

#include <ClanLib/Display/Window/keys.h>

static const int caml_table_mousecode[] = {
    CL_MOUSE_LEFT,
    CL_MOUSE_RIGHT,
    CL_MOUSE_MIDDLE,
    CL_MOUSE_WHEEL_UP,
    CL_MOUSE_WHEEL_DOWN,
    CL_MOUSE_XBUTTON1,
    CL_MOUSE_XBUTTON2,
};

#define Mouse_val(v)  (caml_table_mousecode[Long_val(v)])


static inline value
Val_mouse(int e)
{
    switch (e)
    {
        case CL_MOUSE_LEFT:         return Val_int(0);
        case CL_MOUSE_RIGHT:        return Val_int(1);
        case CL_MOUSE_MIDDLE:       return Val_int(2);
        case CL_MOUSE_WHEEL_UP:     return Val_int(3);
        case CL_MOUSE_WHEEL_DOWN:   return Val_int(4);
        case CL_MOUSE_XBUTTON1:     return Val_int(5);
        case CL_MOUSE_XBUTTON2:     return Val_int(6);

        default: caml_failwith("CL_Mouse.t");
    }
    caml_failwith("CL_Mouse.t");
}

#endif // _CL_MOUSE_INC
// vim: sw=4 sts=4 ts=4 et
