#ifndef _CL_KEYS_INC
#define _CL_KEYS_INC

#include <ClanLib/Display/Window/keys.h>

/* Conversions of enum: keycode */

static const int caml_table_keycode[] = {
    CL_KEY_BACKSPACE,
    CL_KEY_TAB,
    CL_KEY_CLEAR,
    CL_KEY_RETURN,
    CL_KEY_CONTROL,
    CL_KEY_PAUSE,
    CL_KEY_ESCAPE,
    CL_KEY_SPACE,
    CL_KEY_PRIOR,
    CL_KEY_NEXT,
    CL_KEY_END,
    CL_KEY_HOME,
    CL_KEY_LEFT,
    CL_KEY_UP,
    CL_KEY_RIGHT,
    CL_KEY_DOWN,
    CL_KEY_SELECT,
    CL_KEY_PRINT,
    CL_KEY_EXECUTE,
    CL_KEY_INSERT,
    CL_KEY_DELETE,
    CL_KEY_HELP,
    CL_KEY_0,
    CL_KEY_1,
    CL_KEY_2,
    CL_KEY_3,
    CL_KEY_4,
    CL_KEY_5,
    CL_KEY_6,
    CL_KEY_7,
    CL_KEY_8,
    CL_KEY_9,
    CL_KEY_A,
    CL_KEY_B,
    CL_KEY_C,
    CL_KEY_D,
    CL_KEY_E,
    CL_KEY_F,
    CL_KEY_G,
    CL_KEY_H,
    CL_KEY_I,
    CL_KEY_J,
    CL_KEY_K,
    CL_KEY_L,
    CL_KEY_M,
    CL_KEY_N,
    CL_KEY_O,
    CL_KEY_P,
    CL_KEY_Q,
    CL_KEY_R,
    CL_KEY_S,
    CL_KEY_T,
    CL_KEY_U,
    CL_KEY_V,
    CL_KEY_W,
    CL_KEY_X,
    CL_KEY_Y,
    CL_KEY_Z,
    CL_KEY_LWIN,
    CL_KEY_RWIN,
    CL_KEY_APPS,
    CL_KEY_NUMPAD0,
    CL_KEY_NUMPAD1,
    CL_KEY_NUMPAD2,
    CL_KEY_NUMPAD3,
    CL_KEY_NUMPAD4,
    CL_KEY_NUMPAD5,
    CL_KEY_NUMPAD6,
    CL_KEY_NUMPAD7,
    CL_KEY_NUMPAD8,
    CL_KEY_NUMPAD9,
    CL_KEY_MULTIPLY,
    CL_KEY_ADD,
    CL_KEY_SEPARATOR,
    CL_KEY_SUBTRACT,
    CL_KEY_DECIMAL,
    CL_KEY_DIVIDE,
    CL_KEY_F1,
    CL_KEY_F2,
    CL_KEY_F3,
    CL_KEY_F4,
    CL_KEY_F5,
    CL_KEY_F6,
    CL_KEY_F7,
    CL_KEY_F8,
    CL_KEY_F9,
    CL_KEY_F10,
    CL_KEY_F11,
    CL_KEY_F12,
    CL_KEY_F13,
    CL_KEY_F14,
    CL_KEY_F15,
    CL_KEY_F16,
    CL_KEY_F17,
    CL_KEY_F18,
    CL_KEY_F19,
    CL_KEY_F20,
    CL_KEY_F21,
    CL_KEY_F22,
    CL_KEY_F23,
    CL_KEY_F24,
    CL_KEY_NUMLOCK,
    CL_KEY_SCROLL,
    CL_KEY_LSHIFT,
    CL_KEY_RSHIFT,
    CL_KEY_LCONTROL,
    CL_KEY_RCONTROL,
    CL_KEY_LMENU,
    CL_KEY_RMENU,
};

#define Keycode_val(v)  (caml_table_keycode[Long_val(v)])


static inline value
Val_keycode(int e)
{
    switch (e)
    {
        case CL_KEY_BACKSPACE:  return Val_int(0);
        case CL_KEY_TAB:        return Val_int(1);
        case CL_KEY_CLEAR:      return Val_int(2);
        case CL_KEY_RETURN:     return Val_int(3);
        case CL_KEY_CONTROL:    return Val_int(4); // duplicated with CL_KEY_LCONTROL
        case CL_KEY_PAUSE:      return Val_int(5);
        case CL_KEY_ESCAPE:     return Val_int(6);
        case CL_KEY_SPACE:      return Val_int(7);
        case CL_KEY_PRIOR:      return Val_int(8);
        case CL_KEY_NEXT:       return Val_int(9);
        case CL_KEY_END:        return Val_int(10);
        case CL_KEY_HOME:       return Val_int(11);
        case CL_KEY_LEFT:       return Val_int(12);
        case CL_KEY_UP:         return Val_int(13);
        case CL_KEY_RIGHT:      return Val_int(14);
        case CL_KEY_DOWN:       return Val_int(15);
        case CL_KEY_SELECT:     return Val_int(16);
        case CL_KEY_PRINT:      return Val_int(17);
        case CL_KEY_EXECUTE:    return Val_int(18);
        case CL_KEY_INSERT:     return Val_int(19);
        case CL_KEY_DELETE:     return Val_int(20);
        case CL_KEY_HELP:       return Val_int(21);
        case CL_KEY_0:          return Val_int(22);
        case CL_KEY_1:          return Val_int(23);
        case CL_KEY_2:          return Val_int(24);
        case CL_KEY_3:          return Val_int(25);
        case CL_KEY_4:          return Val_int(26);
        case CL_KEY_5:          return Val_int(27);
        case CL_KEY_6:          return Val_int(28);
        case CL_KEY_7:          return Val_int(29);
        case CL_KEY_8:          return Val_int(30);
        case CL_KEY_9:          return Val_int(31);
        case CL_KEY_A:          return Val_int(32);
        case CL_KEY_B:          return Val_int(33);
        case CL_KEY_C:          return Val_int(34);
        case CL_KEY_D:          return Val_int(35);
        case CL_KEY_E:          return Val_int(36);
        case CL_KEY_F:          return Val_int(37);
        case CL_KEY_G:          return Val_int(38);
        case CL_KEY_H:          return Val_int(39);
        case CL_KEY_I:          return Val_int(40);
        case CL_KEY_J:          return Val_int(41);
        case CL_KEY_K:          return Val_int(42);
        case CL_KEY_L:          return Val_int(43);
        case CL_KEY_M:          return Val_int(44);
        case CL_KEY_N:          return Val_int(45);
        case CL_KEY_O:          return Val_int(46);
        case CL_KEY_P:          return Val_int(47);
        case CL_KEY_Q:          return Val_int(48);
        case CL_KEY_R:          return Val_int(49);
        case CL_KEY_S:          return Val_int(50);
        case CL_KEY_T:          return Val_int(51);
        case CL_KEY_U:          return Val_int(52);
        case CL_KEY_V:          return Val_int(53);
        case CL_KEY_W:          return Val_int(54);
        case CL_KEY_X:          return Val_int(55);
        case CL_KEY_Y:          return Val_int(56);
        case CL_KEY_Z:          return Val_int(57);
        case CL_KEY_LWIN:       return Val_int(58);
        case CL_KEY_RWIN:       return Val_int(59);
        case CL_KEY_APPS:       return Val_int(60);
        case CL_KEY_NUMPAD0:    return Val_int(61);
        case CL_KEY_NUMPAD1:    return Val_int(62);
        case CL_KEY_NUMPAD2:    return Val_int(63);
        case CL_KEY_NUMPAD3:    return Val_int(64);
        case CL_KEY_NUMPAD4:    return Val_int(65);
        case CL_KEY_NUMPAD5:    return Val_int(66);
        case CL_KEY_NUMPAD6:    return Val_int(67);
        case CL_KEY_NUMPAD7:    return Val_int(68);
        case CL_KEY_NUMPAD8:    return Val_int(69);
        case CL_KEY_NUMPAD9:    return Val_int(70);
        case CL_KEY_MULTIPLY:   return Val_int(71);
        case CL_KEY_ADD:        return Val_int(72);
        case CL_KEY_SEPARATOR:  return Val_int(73);
        case CL_KEY_SUBTRACT:   return Val_int(74);
        case CL_KEY_DECIMAL:    return Val_int(75);
        case CL_KEY_DIVIDE:     return Val_int(76);
        case CL_KEY_F1:         return Val_int(77);
        case CL_KEY_F2:         return Val_int(78);
        case CL_KEY_F3:         return Val_int(79);
        case CL_KEY_F4:         return Val_int(80);
        case CL_KEY_F5:         return Val_int(81);
        case CL_KEY_F6:         return Val_int(82);
        case CL_KEY_F7:         return Val_int(83);
        case CL_KEY_F8:         return Val_int(84);
        case CL_KEY_F9:         return Val_int(85);
        case CL_KEY_F10:        return Val_int(86);
        case CL_KEY_F11:        return Val_int(87);
        case CL_KEY_F12:        return Val_int(88);
        case CL_KEY_F13:        return Val_int(89);
        case CL_KEY_F14:        return Val_int(90);
        case CL_KEY_F15:        return Val_int(91);
        case CL_KEY_F16:        return Val_int(92);
        case CL_KEY_F17:        return Val_int(93);
        case CL_KEY_F18:        return Val_int(94);
        case CL_KEY_F19:        return Val_int(95);
        case CL_KEY_F20:        return Val_int(96);
        case CL_KEY_F21:        return Val_int(97);
        case CL_KEY_F22:        return Val_int(98);
        case CL_KEY_F23:        return Val_int(99);
        case CL_KEY_F24:        return Val_int(100);
        case CL_KEY_NUMLOCK:    return Val_int(101);
        case CL_KEY_SCROLL:     return Val_int(102);
        case CL_KEY_LSHIFT:     return Val_int(103);
        case CL_KEY_RSHIFT:     return Val_int(104);
    //  case CL_KEY_LCONTROL:   return Val_int(105); // duplicated with CL_KEY_CONTROL
        case CL_KEY_RCONTROL:   return Val_int(106);
        case CL_KEY_LMENU:      return Val_int(107);
        case CL_KEY_RMENU:      return Val_int(108);

        default: caml_failwith("CL_Key.keycode");
    }
    caml_failwith("CL_Key.keycode");
}

#endif // _CL_KEYS_INC
// vim: sw=4 sts=4 ts=4 et
