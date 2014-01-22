/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/Window/display_window_description.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"
#include "CL_DisplayWindowDescription_stub.hpp"
#include "CL_Rect_stub.hpp"
#include "CL_Size_stub.hpp"
#include "CL_DisplayWindow_stub.hpp"

CAMLextern_C value
caml_CL_DisplayWindowDescription_init(
        value title, value position, value client_area, value unit)
{
    CL_DisplayWindowDescription *desc;
    unsigned int pr = 0;

    if (title       != Val_none) pr |= 0b0001;
    if (position    != Val_none) pr |= 0b0010;
    if (client_area != Val_none) pr |= 0b0100;

    switch (pr) {
        case 0b0000:
            desc = new CL_DisplayWindowDescription();
            break;
        case 0b0001:
            desc = new CL_DisplayWindowDescription(
                            CL_String_val(Some_val(title)));
            break;
        case 0b0110:
            desc = new CL_DisplayWindowDescription(
                            CL_Rect_val(Some_val(position)),
                            Bool_val(Some_val(client_area)));
            break;
        case 0b0111:
            desc = new CL_DisplayWindowDescription(
                            CL_String_val(Some_val(title)),
                            CL_Rect_val(Some_val(position)),
                            Bool_val(Some_val(client_area)));
            break;
        default:
            caml_failwith("CL_DisplayWindowDescription.init");
    }

    return Val_CL_DisplayWindowDescription(desc);
}

CAMLextern_C value
caml_CL_DisplayWindowDescription_delete(value desc)
{
    delete CL_DisplayWindowDescription_val(desc);
    nullify_ptr(desc);
    return Val_unit;
}

CAMLextern_C value
caml_CL_DisplayWindowDescription_copy(value desc)
{
    CL_DisplayWindowDescription *copy =
        new CL_DisplayWindowDescription(
                *CL_DisplayWindowDescription_val(desc));
    return Val_CL_DisplayWindowDescription(copy);
}

CAMLextern_C value
caml_CL_DisplayWindowDescription_get_owner(value desc)
{
    CL_DisplayWindow win = CL_DisplayWindowDescription_val(desc)->get_owner();
    CL_DisplayWindow *win_ptr;
    win_ptr = &win;
    return Val_CL_DisplayWindow(win_ptr);
}

//CALL_METH1(CL_DisplayWindowDescription, set_owner_window, CL_DisplayWindow_val, owner:CL_DisplayWindow.t)


CALL_GETTER(CL_DisplayWindowDescription, get_title,                CL_String, string)
CALL_GETTER(CL_DisplayWindowDescription, get_decorations,          bool, bool)
CALL_GETTER(CL_DisplayWindowDescription, get_size,                 CL_Size, CL_Size.t)
CALL_GETTER(CL_DisplayWindowDescription, get_position,             CL_Rect, CL_Rect.t)
CALL_GETTER(CL_DisplayWindowDescription, get_position_client_area, bool, bool)
CALL_GETTER(CL_DisplayWindowDescription, is_fullscreen,            bool, bool)
CALL_GETTER(CL_DisplayWindowDescription, get_flipping_buffers,     int,  int)
CALL_GETTER(CL_DisplayWindowDescription, get_allow_resize,         bool, bool)
CALL_GETTER(CL_DisplayWindowDescription, get_bpp,                  int,  int)
CALL_GETTER(CL_DisplayWindowDescription, get_refresh_rate,         int,  int)
CALL_GETTER(CL_DisplayWindowDescription, is_layered,               bool, bool)
CALL_GETTER(CL_DisplayWindowDescription, has_caption,              bool, bool)
CALL_GETTER(CL_DisplayWindowDescription, has_sysmenu,              bool, bool)
CALL_GETTER(CL_DisplayWindowDescription, has_minimize_button,      bool, bool)
CALL_GETTER(CL_DisplayWindowDescription, has_maximize_button,      bool, bool)
CALL_GETTER(CL_DisplayWindowDescription, has_border,               bool, bool)
CALL_GETTER(CL_DisplayWindowDescription, is_tool_window,           bool, bool)
CALL_GETTER(CL_DisplayWindowDescription, is_visible,               bool, bool)
CALL_GETTER(CL_DisplayWindowDescription, is_topmost,               bool, bool)
CALL_GETTER(CL_DisplayWindowDescription, get_using_gui_window_cache, bool, bool)
CALL_GETTER(CL_DisplayWindowDescription, has_drop_shadow,          bool, bool)
CALL_GETTER(CL_DisplayWindowDescription, get_tablet_context,       bool, bool)
CALL_GETTER(CL_DisplayWindowDescription, get_depth_size,           int,  int)
CALL_GETTER(CL_DisplayWindowDescription, get_stencil_size,         int,  int)

#ifdef GEN_CAML_CODE
ML_CALL_GETTER(CL_DisplayWindowDescription, get_title,                CL_String, string)
ML_CALL_GETTER(CL_DisplayWindowDescription, get_decorations,          bool, bool)
ML_CALL_GETTER(CL_DisplayWindowDescription, get_size,                 CL_Size, CL_Size.t)
ML_CALL_GETTER(CL_DisplayWindowDescription, get_position,             CL_Rect, CL_Rect.t)
ML_CALL_GETTER(CL_DisplayWindowDescription, get_position_client_area, bool, bool)
ML_CALL_GETTER(CL_DisplayWindowDescription, is_fullscreen,            bool, bool)
ML_CALL_GETTER(CL_DisplayWindowDescription, get_flipping_buffers,     int,  int)
ML_CALL_GETTER(CL_DisplayWindowDescription, get_allow_resize,         bool, bool)
ML_CALL_GETTER(CL_DisplayWindowDescription, get_bpp,                  int,  int)
ML_CALL_GETTER(CL_DisplayWindowDescription, get_refresh_rate,         int,  int)
ML_CALL_GETTER(CL_DisplayWindowDescription, is_layered,               bool, bool)
ML_CALL_GETTER(CL_DisplayWindowDescription, has_caption,              bool, bool)
ML_CALL_GETTER(CL_DisplayWindowDescription, has_sysmenu,              bool, bool)
ML_CALL_GETTER(CL_DisplayWindowDescription, has_minimize_button,      bool, bool)
ML_CALL_GETTER(CL_DisplayWindowDescription, has_maximize_button,      bool, bool)
ML_CALL_GETTER(CL_DisplayWindowDescription, has_border,               bool, bool)
ML_CALL_GETTER(CL_DisplayWindowDescription, is_tool_window,           bool, bool)
ML_CALL_GETTER(CL_DisplayWindowDescription, is_visible,               bool, bool)
ML_CALL_GETTER(CL_DisplayWindowDescription, is_topmost,               bool, bool)
ML_CALL_GETTER(CL_DisplayWindowDescription, get_using_gui_window_cache, bool, bool)
ML_CALL_GETTER(CL_DisplayWindowDescription, has_drop_shadow,          bool, bool)
ML_CALL_GETTER(CL_DisplayWindowDescription, get_tablet_context,       bool, bool)
ML_CALL_GETTER(CL_DisplayWindowDescription, get_depth_size,           int,  int)
ML_CALL_GETTER(CL_DisplayWindowDescription, get_stencil_size,         int,  int)
#endif



CALL_METH0( CL_DisplayWindowDescription, set_fullscreen )
CALL_METH0( CL_DisplayWindowDescription, show_caption )
CALL_METH0( CL_DisplayWindowDescription, show_sysmenu )
CALL_METH0( CL_DisplayWindowDescription, show_minimize_button )
CALL_METH0( CL_DisplayWindowDescription, show_maximize_button )
CALL_METH0( CL_DisplayWindowDescription, show_border )
CALL_METH0( CL_DisplayWindowDescription, set_visible )
CALL_METH0( CL_DisplayWindowDescription, set_topmost )
CALL_METH0( CL_DisplayWindowDescription, set_tool_window )
CALL_METH0( CL_DisplayWindowDescription, set_drop_shadow )

#ifdef GEN_CAML_CODE
ML_CALL_METH0( CL_DisplayWindowDescription, set_fullscreen )
ML_CALL_METH0( CL_DisplayWindowDescription, show_caption )
ML_CALL_METH0( CL_DisplayWindowDescription, show_sysmenu )
ML_CALL_METH0( CL_DisplayWindowDescription, show_minimize_button )
ML_CALL_METH0( CL_DisplayWindowDescription, show_maximize_button )
ML_CALL_METH0( CL_DisplayWindowDescription, show_border )
ML_CALL_METH0( CL_DisplayWindowDescription, set_visible )
ML_CALL_METH0( CL_DisplayWindowDescription, set_topmost )
ML_CALL_METH0( CL_DisplayWindowDescription, set_tool_window )
ML_CALL_METH0( CL_DisplayWindowDescription, set_drop_shadow )
#endif

CALL_METH_NOT( CL_DisplayWindowDescription, set_fullscreen      , unset_fullscreen )
CALL_METH_NOT( CL_DisplayWindowDescription, show_caption        , hide_caption )
CALL_METH_NOT( CL_DisplayWindowDescription, show_sysmenu        , hide_sysmenu )
CALL_METH_NOT( CL_DisplayWindowDescription, show_minimize_button, hide_minimize_button )
CALL_METH_NOT( CL_DisplayWindowDescription, show_maximize_button, hide_maximize_button )
CALL_METH_NOT( CL_DisplayWindowDescription, show_border         , hide_border )
CALL_METH_NOT( CL_DisplayWindowDescription, set_visible         , set_not_visible )
CALL_METH_NOT( CL_DisplayWindowDescription, set_topmost         , set_not_topmost )
CALL_METH_NOT( CL_DisplayWindowDescription, set_tool_window     , set_not_tool_window )
CALL_METH_NOT( CL_DisplayWindowDescription, set_drop_shadow     , set_not_drop_shadow )

#ifdef GEN_CAML_CODE
ML_CALL_METH_NOT( CL_DisplayWindowDescription, set_fullscreen      , unset_fullscreen )
ML_CALL_METH_NOT( CL_DisplayWindowDescription, show_caption        , hide_caption )
ML_CALL_METH_NOT( CL_DisplayWindowDescription, show_sysmenu        , hide_sysmenu )
ML_CALL_METH_NOT( CL_DisplayWindowDescription, show_minimize_button, hide_minimize_button )
ML_CALL_METH_NOT( CL_DisplayWindowDescription, show_maximize_button, hide_maximize_button )
ML_CALL_METH_NOT( CL_DisplayWindowDescription, show_border         , hide_border )
ML_CALL_METH_NOT( CL_DisplayWindowDescription, set_visible         , set_not_visible )
ML_CALL_METH_NOT( CL_DisplayWindowDescription, set_topmost         , set_not_topmost )
ML_CALL_METH_NOT( CL_DisplayWindowDescription, set_tool_window     , set_not_tool_window )
ML_CALL_METH_NOT( CL_DisplayWindowDescription, set_drop_shadow     , set_not_drop_shadow )
#endif



CALL_METH1(CL_DisplayWindowDescription, set_decorations,      Bool_val, bool )
CALL_METH1(CL_DisplayWindowDescription, set_title,            CL_String_val, title:string )
CALL_METH1(CL_DisplayWindowDescription, set_flipping_buffers, Int_val,  num_buffers:int )
CALL_METH1(CL_DisplayWindowDescription, set_allow_resize,     Bool_val, allow_resize:bool )
CALL_METH1(CL_DisplayWindowDescription, set_bpp,              Int_val,  bpp:int )
CALL_METH1(CL_DisplayWindowDescription, set_refresh_rate,     Int_val,  refresh_rate:int )
CALL_METH1(CL_DisplayWindowDescription, set_tablet_context,   Bool_val, create:bool )
CALL_METH1(CL_DisplayWindowDescription, set_using_gui_window_cache, Bool_val, bool )
CALL_METH1(CL_DisplayWindowDescription, set_layered,          Bool_val, bool )
CALL_METH1(CL_DisplayWindowDescription, set_depth_size,       Int_val,  int )
CALL_METH1(CL_DisplayWindowDescription, set_stencil_size,     Int_val,  int )

CALL_METH2(CL_DisplayWindowDescription,set_size, CL_Size_val,size:CL_Size.t, Bool_val,client_area:bool)
CALL_METH2(CL_DisplayWindowDescription,set_position, CL_Rect_val,position:CL_Rect.t, Bool_val,client_area:bool)

#ifdef GEN_CAML_CODE
ML_CALL_METH1(CL_DisplayWindowDescription, set_decorations,      Bool_val, bool )
ML_CALL_METH1(CL_DisplayWindowDescription, set_title,            CL_String_val, title:string )
ML_CALL_METH1(CL_DisplayWindowDescription, set_flipping_buffers, Int_val,  num_buffers:int )
ML_CALL_METH1(CL_DisplayWindowDescription, set_allow_resize,     Bool_val, allow_resize:bool )
ML_CALL_METH1(CL_DisplayWindowDescription, set_bpp,              Int_val,  bpp:int )
ML_CALL_METH1(CL_DisplayWindowDescription, set_refresh_rate,     Int_val,  refresh_rate:int )
ML_CALL_METH1(CL_DisplayWindowDescription, set_tablet_context,   Bool_val, create:bool )
ML_CALL_METH1(CL_DisplayWindowDescription, set_using_gui_window_cache, Bool_val, bool )
ML_CALL_METH1(CL_DisplayWindowDescription, set_layered,          Bool_val, bool )
ML_CALL_METH1(CL_DisplayWindowDescription, set_depth_size,       Int_val,  int )
ML_CALL_METH1(CL_DisplayWindowDescription, set_stencil_size,     Int_val,  int )

ML_CALL_METH2(CL_DisplayWindowDescription,set_size, CL_Size_val,size:CL_Size.t, Bool_val,client_area:bool)
ML_CALL_METH2(CL_DisplayWindowDescription,set_position, CL_Rect_val,position:CL_Rect.t, Bool_val,client_area:bool)
#endif

//  CL_UnknownSharedPtr get_data(const CL_String &data_name)
//  set_data(const CL_String &data_name, const CL_UnknownSharedPtr &ptr);

// vim: sw=4 sts=4 ts=4 et
