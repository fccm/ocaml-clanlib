/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/Render/graphic_context.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"
#include "CL_GraphicContext_stub.hpp"
#include "CL_PrimitivesArray_stub.hpp"
#include "CL_PrimitivesType_stub.hpp"
#include "CL_StandardProgram_stub.hpp"
#include "CL_MapMode_stub.hpp"
#include "CL_Color_stub.hpp"
#include "CL_Rect_stub.hpp"
#include "CL_Size_stub.hpp"


OBJ_INIT( CL_GraphicContext )
OBJ_DELETE( CL_GraphicContext )

#ifdef GEN_CAML_CODE
ML_OBJ_INIT( CL_GraphicContext )
ML_OBJ_DELETE( CL_GraphicContext )
#endif


//void clear(const CL_Colorf &color = CL_Colorf::black);
CALL_METH1( CL_GraphicContext, clear, CL_Colorf_val, CL_Colorf.t )

#ifdef GEN_CAML_CODE
ML_CALL_METH1( CL_GraphicContext, clear, CL_Colorf_val, CL_Colorf.t )
#endif


CALL_GETTER( CL_GraphicContext, get_width,            int, int )
CALL_GETTER( CL_GraphicContext, get_height,           int, int )
CALL_GETTER( CL_GraphicContext, get_size,             CL_Size, CL_Size.t )
CALL_GETTER( CL_GraphicContext, get_cliprect,         CL_Rect, CL_Rect.t )
CALL_GETTER( CL_GraphicContext, get_max_texture_size, CL_Size, CL_Size.t )

#ifdef GEN_CAML_CODE
ML_CALL_GETTER( CL_GraphicContext, get_width,            int, int )
ML_CALL_GETTER( CL_GraphicContext, get_height,           int, int )
ML_CALL_GETTER( CL_GraphicContext, get_size,             CL_Size, CL_Size.t )
ML_CALL_GETTER( CL_GraphicContext, get_cliprect,         CL_Rect, CL_Rect.t )
ML_CALL_GETTER( CL_GraphicContext, get_max_texture_size, CL_Size, CL_Size.t )
#endif


CALL_METH0( CL_GraphicContext, reset_frame_buffer )
CALL_METH0( CL_GraphicContext, reset_program_object )
CALL_METH0( CL_GraphicContext, reset_blend_mode )
CALL_METH0( CL_GraphicContext, reset_buffer_control )
CALL_METH0( CL_GraphicContext, reset_pen )
CALL_METH0( CL_GraphicContext, reset_polygon_rasterizer )
CALL_METH0( CL_GraphicContext, push_cliprect )
CALL_METH0( CL_GraphicContext, pop_cliprect )
CALL_METH0( CL_GraphicContext, reset_cliprect )
CALL_METH0( CL_GraphicContext, push_modelview )
CALL_METH0( CL_GraphicContext, pop_modelview )
CALL_METH0( CL_GraphicContext, flush_batcher )

#ifdef GEN_CAML_CODE
ML_CALL_METH0( CL_GraphicContext, reset_frame_buffer )
ML_CALL_METH0( CL_GraphicContext, reset_program_object )
ML_CALL_METH0( CL_GraphicContext, reset_blend_mode )
ML_CALL_METH0( CL_GraphicContext, reset_buffer_control )
ML_CALL_METH0( CL_GraphicContext, reset_pen )
ML_CALL_METH0( CL_GraphicContext, reset_polygon_rasterizer )
ML_CALL_METH0( CL_GraphicContext, push_cliprect )
ML_CALL_METH0( CL_GraphicContext, pop_cliprect )
ML_CALL_METH0( CL_GraphicContext, reset_cliprect )
ML_CALL_METH0( CL_GraphicContext, push_modelview )
ML_CALL_METH0( CL_GraphicContext, pop_modelview )
ML_CALL_METH0( CL_GraphicContext, flush_batcher )
#endif


#define set_scale3D(x, y, z)    set_scale(x, y, z)
#define set_scale2D(x, y)       set_scale(x, y)
#define mult_scale3D(x, y, z)   mult_scale(x, y, z)
#define mult_scale2D(x, y)      mult_scale(x, y)
#define push_scale3D(x, y, z)   push_scale(x, y, z)
#define push_scale2D(x, y)      push_scale(x, y)

#define set_translate3D(x, y, z)    set_translate(x, y, z)
#define set_translate2D(x, y)       set_translate(x, y)
#define mult_translate3D(x, y, z)   mult_translate(x, y, z)
#define mult_translate2D(x, y)      mult_translate(x, y)
#define push_translate3D(x, y, z)   push_translate(x, y, z)
#define push_translate2D(x, y)      push_translate(x, y)

CALL_METH2( CL_GraphicContext, set_scale2D, Float_val, x:float, Float_val, y:float )
CALL_METH3( CL_GraphicContext, set_scale3D, Float_val, x:float, Float_val, y:float, Float_val, z:float )
CALL_METH2( CL_GraphicContext, mult_scale2D, Float_val, x:float, Float_val, y:float )
CALL_METH3( CL_GraphicContext, mult_scale3D, Float_val, x:float, Float_val, y:float, Float_val, z:float )
CALL_METH2( CL_GraphicContext, push_scale2D, Float_val, x:float, Float_val, y:float )
CALL_METH3( CL_GraphicContext, push_scale3D, Float_val, x:float, Float_val, y:float, Float_val, z:float )
CALL_METH2( CL_GraphicContext, set_translate2D, Float_val, x:float, Float_val, y:float )
CALL_METH3( CL_GraphicContext, set_translate3D, Float_val, x:float, Float_val, y:float, Float_val, z:float )
CALL_METH2( CL_GraphicContext, mult_translate2D, Float_val, x:float, Float_val, y:float )
CALL_METH3( CL_GraphicContext, mult_translate3D, Float_val, x:float, Float_val, y:float, Float_val, z:float )
CALL_METH2( CL_GraphicContext, push_translate2D, Float_val, x:float, Float_val, y:float )
CALL_METH3( CL_GraphicContext, push_translate3D, Float_val, x:float, Float_val, y:float, Float_val, z:float )
#ifdef GEN_CAML_CODE
ML_CALL_METH2( CL_GraphicContext, set_scale2D, Float_val, x:float, Float_val, y:float )
ML_CALL_METH3( CL_GraphicContext, set_scale3D, Float_val, x:float, Float_val, y:float, Float_val, z:float )
ML_CALL_METH2( CL_GraphicContext, mult_scale2D, Float_val, x:float, Float_val, y:float )
ML_CALL_METH3( CL_GraphicContext, mult_scale3D, Float_val, x:float, Float_val, y:float, Float_val, z:float )
ML_CALL_METH2( CL_GraphicContext, push_scale2D, Float_val, x:float, Float_val, y:float )
ML_CALL_METH3( CL_GraphicContext, push_scale3D, Float_val, x:float, Float_val, y:float, Float_val, z:float )
ML_CALL_METH2( CL_GraphicContext, set_translate2D, Float_val, x:float, Float_val, y:float )
ML_CALL_METH3( CL_GraphicContext, set_translate3D, Float_val, x:float, Float_val, y:float, Float_val, z:float )
ML_CALL_METH2( CL_GraphicContext, mult_translate2D, Float_val, x:float, Float_val, y:float )
ML_CALL_METH3( CL_GraphicContext, mult_translate3D, Float_val, x:float, Float_val, y:float, Float_val, z:float )
ML_CALL_METH2( CL_GraphicContext, push_translate2D, Float_val, x:float, Float_val, y:float )
ML_CALL_METH3( CL_GraphicContext, push_translate3D, Float_val, x:float, Float_val, y:float, Float_val, z:float )
#endif


//  void draw_primitives(CL_PrimitivesType type, int num_vertices, const CL_PrimitivesArray &array);

//  set_primitives_array(const CL_PrimitivesArray &array)
CALL_METH1( CL_GraphicContext, set_primitives_array, *CL_PrimitivesArray_val, CL_Type.primitives_array )
#ifdef GEN_CAML_CODE
ML_CALL_METH1( CL_GraphicContext, set_primitives_array, *CL_PrimitivesArray_val, CL_Type.primitives_array )
#endif

// vim: sw=4 sts=4 ts=4 et
