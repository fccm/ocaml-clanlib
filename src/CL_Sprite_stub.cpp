/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/2D/sprite.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"
#include "CL_Sprite_stub.hpp"
#include "CL_GraphicContext_stub.hpp"
#include "CL_VirtualDirectory_stub.hpp"
#include "CL_IODevice_stub.hpp"
#include "CL_Angle_stub.hpp"
#include "CL_Point_stub.hpp"
#include "CL_Size_stub.hpp"
#include "CL_Color_stub.hpp"

CAMLextern_C value
caml_CL_Sprite_init(value unit)
{
    CL_Sprite *sprite = new CL_Sprite();
    return Val_CL_Sprite(sprite);
}

CAMLextern_C value
caml_CL_Sprite_init_with_gc_and_fullname(value gc, value fullname)
{
    CL_Sprite *sprite = new CL_Sprite(
            *CL_GraphicContext_val(gc),
            CL_StringRef_val(fullname));
    return Val_CL_Sprite(sprite);
}

CAMLextern_C value
caml_CL_Sprite_init_with_gc_filename_vdir(
        value gc, value filename, value dir)
{
    CL_Sprite *sprite = new CL_Sprite(
            *CL_GraphicContext_val(gc),
            CL_StringRef_val(filename),
            *CL_VirtualDirectory_val(dir));
    return Val_CL_Sprite(sprite);
}

CAMLextern_C value
caml_CL_Sprite_init_with_gc_and_io(
        value gc, value file, value image_type)
{
    CL_Sprite *sprite = new CL_Sprite(
            *CL_GraphicContext_val(gc),
            *CL_IODevice_val(file),
            CL_String_val(image_type));
    return Val_CL_Sprite(sprite);
}

CAMLextern_C value
caml_CL_Sprite_delete(value sprite)
{
    delete CL_Sprite_val(sprite);
    nullify_ptr(sprite);
    return Val_unit;
}


CALL_METH1( CL_Sprite, set_angle,       *CL_Angle_val, angle:CL_Angle.t )
CALL_METH1( CL_Sprite, set_angle_pitch, *CL_Angle_val, angle:CL_Angle.t )
CALL_METH1( CL_Sprite, set_angle_yaw,   *CL_Angle_val, angle:CL_Angle.t )
CALL_METH1( CL_Sprite, rotate,          *CL_Angle_val, angle:CL_Angle.t )
CALL_METH1( CL_Sprite, rotate_pitch,    *CL_Angle_val, angle:CL_Angle.t )
CALL_METH1( CL_Sprite, rotate_yaw,      *CL_Angle_val, angle:CL_Angle.t )

CALL_METH1( CL_Sprite, set_base_angle,  *CL_Angle_val, angle:CL_Angle.t )
CALL_METH2( CL_Sprite, set_scale,       Float_val, x:float, Float_val, y:float )
CALL_METH1( CL_Sprite, set_alpha,       Float_val, alpha:float )
//void set_linear_filter(bool linear_filter = true);
//void set_alignment(CL_Origin origin, int x = 0, int y = 0);
//void set_rotation_hotspot(CL_Origin origin, int x = 0, int y = 0);
CALL_METH1( CL_Sprite, set_frame,       UInt_val, frame:uint )
CALL_METH1( CL_Sprite, set_delay,       Int_val, delay_ms:int )
CALL_METH2( CL_Sprite, set_frame_delay, Int_val, frame:int, Int_val, delay_ms:int )
CALL_METH2( CL_Sprite, set_frame_offset, Int_val, frame:int, CL_Point_val, offset:CL_Point.t )
CALL_METH1( CL_Sprite, set_id,          Int_val, id:int )
CALL_METH0( CL_Sprite, finish )
CALL_METH0( CL_Sprite, restart )

CALL_METH0( CL_Sprite, set_play_loop )
CALL_METH0( CL_Sprite, set_play_pingpong )
CALL_METH0( CL_Sprite, set_play_backward )
CALL_METH_NOT( CL_Sprite, set_play_loop,     unset_play_loop )
CALL_METH_NOT( CL_Sprite, set_play_pingpong, unset_play_pingpong )
CALL_METH_NOT( CL_Sprite, set_play_backward, unset_play_backward )

//void set_show_on_finish(CL_Sprite::ShowOnFinish show_on_finish);

/*
void set_color(const CL_Colorf &color);
void set_color(const CL_Color& c) {CL_Colorf color; color.r = c.get_red() / 255.0f; color.g = c.get_green() / 255.0f; color.b = c.get_blue() / 255.0f; color.a = c.get_alpha() / 255.0f; set_color(color);}
*/


#if GEN_CAML_CODE
ML_CALL_METH1( CL_Sprite, set_angle,       CL_Angle_val, angle:CL_Angle.t )
ML_CALL_METH1( CL_Sprite, set_angle_pitch, CL_Angle_val, angle:CL_Angle.t )
ML_CALL_METH1( CL_Sprite, set_angle_yaw,   CL_Angle_val, angle:CL_Angle.t )
ML_CALL_METH1( CL_Sprite, rotate,          CL_Angle_val, angle:CL_Angle.t )
ML_CALL_METH1( CL_Sprite, rotate_pitch,    CL_Angle_val, angle:CL_Angle.t )
ML_CALL_METH1( CL_Sprite, rotate_yaw,      CL_Angle_val, angle:CL_Angle.t )
ML_CALL_METH1( CL_Sprite, set_base_angle,  CL_Angle_val, angle:CL_Angle.t )
ML_CALL_METH2( CL_Sprite, set_scale, Float_val, x:float, Float_val, y:float )
ML_CALL_METH1( CL_Sprite, set_alpha, Float_val, alpha:float )
ML_CALL_METH1( CL_Sprite, set_frame, UInt_val, frame:uint )
ML_CALL_METH1( CL_Sprite, set_delay, Int_val, delay_ms:int )
ML_CALL_METH2( CL_Sprite, set_frame_delay, Int_val, frame:int, Int_val, delay_ms:int )
ML_CALL_METH2( CL_Sprite, set_frame_offset, Int_val, frame:int, CL_Point_val, offset:CL_Point.t )
ML_CALL_METH1( CL_Sprite, set_id, Int_val, id:int )
ML_CALL_METH0( CL_Sprite, finish )
ML_CALL_METH0( CL_Sprite, restart )

ML_CALL_METH0( CL_Sprite, set_play_loop )
ML_CALL_METH0( CL_Sprite, set_play_pingpong )
ML_CALL_METH0( CL_Sprite, set_play_backward )
ML_CALL_METH_NOT( CL_Sprite, set_play_loop,     unset_play_loop )
ML_CALL_METH_NOT( CL_Sprite, set_play_pingpong, unset_play_pingpong )
ML_CALL_METH_NOT( CL_Sprite, set_play_backward, unset_play_backward )
#endif

CAMLextern_C value
caml_CL_Sprite_get_scale(value sprite)
{
    CAMLparam1(sprite);
    CAMLlocal1(ret);
    float x, y;
    CL_Sprite_val(sprite)->get_scale(x, y);
    ret = caml_alloc(2, 0);
    Store_field(ret, 0, caml_copy_double(x));
    Store_field(ret, 1, caml_copy_double(y));
    CAMLreturn(ret);
}

CALL_METH_R0( CL_Sprite, is_null, bool, bool )
CALL_METH_RET0( CL_Sprite, get_angle,      CL_Angle, caml_copy_CL_Angle, CL_Angle.t )
CALL_METH_RET0( CL_Sprite, get_base_angle, CL_Angle, caml_copy_CL_Angle, CL_Angle.t )


// TODO:
//  void get_alignment(CL_Origin &origin, int &x, int &y)
//  void get_rotation_hotspot(CL_Origin &origin, int &x, int &y)

CALL_METH_R0( CL_Sprite, get_alpha, float, float )
CALL_METH_R0( CL_Sprite, get_color, CL_Colorf, CL_Colorf.t )
CALL_METH_R0( CL_Sprite, get_size,  CL_Size,   CL_Size.t )
CALL_METH_R0( CL_Sprite, get_current_frame, int, int )
CALL_METH_R0( CL_Sprite, get_frame_count,   int, int )
CALL_METH_R0( CL_Sprite, get_id,            int, int )
CALL_METH_R0( CL_Sprite, get_width,         int, int )
CALL_METH_R0( CL_Sprite, get_height,        int, int )
CALL_METH_R0( CL_Sprite, get_linear_filter, bool, bool )
CALL_METH_R0( CL_Sprite, is_play_loop,      bool, bool )
CALL_METH_R0( CL_Sprite, is_play_backward,  bool, bool )
CALL_METH_R0( CL_Sprite, is_play_pingpong,  bool, bool )
CALL_METH_R0( CL_Sprite, is_finished,       bool, bool )
CALL_METH_R0( CL_Sprite, is_looping,        bool, bool )

//  ShowOnFinish get_show_on_finish()

CALL_METH_R1( CL_Sprite, get_frame_delay, int, int, Int_val, frame:int )
CALL_METH_R1( CL_Sprite, get_frame_offset, CL_Point, CL_Point.t, Int_val, frame:int )
CALL_METH_R1( CL_Sprite, get_frame_size, CL_Size, CL_Size.t, Int_val, frame:int )

#if GEN_CAML_CODE
ML_CALL_METH_R0( CL_Sprite, is_null, bool, bool )
ML_CALL_METH_R0( CL_Sprite, get_angle,      CL_Angle, CL_Angle.t )
ML_CALL_METH_R0( CL_Sprite, get_base_angle, CL_Angle, CL_Angle.t )

ML_CALL_METH_R0( CL_Sprite, get_alpha, float, float )
ML_CALL_METH_R0( CL_Sprite, get_color, CL_Colorf, CL_Colorf.t )
ML_CALL_METH_R0( CL_Sprite, get_size,  CL_Size,   CL_Size.t )
ML_CALL_METH_R0( CL_Sprite, get_current_frame, int, int )
ML_CALL_METH_R0( CL_Sprite, get_frame_count,   int, int )
ML_CALL_METH_R0( CL_Sprite, get_id,            int, int )
ML_CALL_METH_R0( CL_Sprite, get_width,         int, int )
ML_CALL_METH_R0( CL_Sprite, get_height,        int, int )
ML_CALL_METH_R0( CL_Sprite, get_linear_filter, bool, bool )
ML_CALL_METH_R0( CL_Sprite, is_play_loop,      bool, bool )
ML_CALL_METH_R0( CL_Sprite, is_play_backward,  bool, bool )
ML_CALL_METH_R0( CL_Sprite, is_play_pingpong,  bool, bool )
ML_CALL_METH_R0( CL_Sprite, is_finished,       bool, bool )
ML_CALL_METH_R0( CL_Sprite, is_looping,        bool, bool )

ML_CALL_METH_R1( CL_Sprite, get_frame_delay, int, int, Int_val, frame:int )
ML_CALL_METH_R1( CL_Sprite, get_frame_offset, CL_Point, CL_Point.t, Int_val, frame:int )
ML_CALL_METH_R1( CL_Sprite, get_frame_size, CL_Size, CL_Size.t, Int_val, frame:int )
#endif

// vim: sw=4 sts=4 ts=4 et
