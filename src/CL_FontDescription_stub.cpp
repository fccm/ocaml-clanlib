/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Display/Font/font_description.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"
#include "CL_FontDescription_stub.hpp"

OBJ_INIT( CL_FontDescription )
OBJ_DELETE( CL_FontDescription )
#ifdef GEN_CAML_CODE
ML_OBJ_INIT( CL_FontDescription )
ML_OBJ_DELETE( CL_FontDescription )
#endif

CALL_METH1( CL_FontDescription, set_typeface_name, CL_String_val, name:string )

CALL_METH1( CL_FontDescription, set_height,        Int_val,    int )
CALL_METH1( CL_FontDescription, set_average_width, Int_val,    int )
CALL_METH1( CL_FontDescription, set_escapement,    Double_val, float )
CALL_METH1( CL_FontDescription, set_orientation,   Double_val, float )
CALL_METH1( CL_FontDescription, set_weight,        Int_val,    int )

#ifdef GEN_CAML_CODE
ML_CALL_METH1( CL_FontDescription, set_typeface_name, CL_String_val, name:string )

ML_CALL_METH1( CL_FontDescription, set_height,        Int_val,    int )
ML_CALL_METH1( CL_FontDescription, set_average_width, Int_val,    int )
ML_CALL_METH1( CL_FontDescription, set_escapement,    Double_val, float )
ML_CALL_METH1( CL_FontDescription, set_orientation,   Double_val, float )
ML_CALL_METH1( CL_FontDescription, set_weight,        Int_val,    int )
#endif

CALL_METH0( CL_FontDescription, set_italic )
CALL_METH0( CL_FontDescription, set_underline )
CALL_METH0( CL_FontDescription, set_strikeout )
CALL_METH0( CL_FontDescription, set_fixed_pitch )
CALL_METH0( CL_FontDescription, set_anti_alias )

#ifdef GEN_CAML_CODE
ML_CALL_METH0( CL_FontDescription, set_italic )
ML_CALL_METH0( CL_FontDescription, set_underline )
ML_CALL_METH0( CL_FontDescription, set_strikeout )
ML_CALL_METH0( CL_FontDescription, set_fixed_pitch )
ML_CALL_METH0( CL_FontDescription, set_anti_alias )
#endif


CALL_METH_NOT( CL_FontDescription, set_italic,      set_not_italic )
CALL_METH_NOT( CL_FontDescription, set_underline,   set_not_underline )
CALL_METH_NOT( CL_FontDescription, set_strikeout,   set_not_strikeout )
CALL_METH_NOT( CL_FontDescription, set_fixed_pitch, set_not_fixed_pitch )
CALL_METH_NOT( CL_FontDescription, set_anti_alias,  set_not_anti_alias )

#ifdef GEN_CAML_CODE
ML_CALL_METH_NOT( CL_FontDescription, set_italic,      set_not_italic )
ML_CALL_METH_NOT( CL_FontDescription, set_underline,   set_not_underline )
ML_CALL_METH_NOT( CL_FontDescription, set_strikeout,   set_not_strikeout )
ML_CALL_METH_NOT( CL_FontDescription, set_fixed_pitch, set_not_fixed_pitch )
ML_CALL_METH_NOT( CL_FontDescription, set_anti_alias,  set_not_anti_alias )
#endif

// vim: sw=4 sts=4 ts=4 et
