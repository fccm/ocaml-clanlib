/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/System/system.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"

CALL_STATIC_METH1( CL_System, sleep, Long_val, int )

CALL_STATIC_METH_R0( CL_System, get_time,         unsigned_int, uint )
CALL_STATIC_METH_R0( CL_System, get_num_cores,    int,          int  )
//CALL_STATIC_METH_R0( CL_System, detect_mmx,       bool,         bool )
//CALL_STATIC_METH_R0( CL_System, detect_3dnow,     bool,         bool )
//CALL_STATIC_METH_R0( CL_System, detect_ext_3dnow, bool,         bool )

#ifdef GEN_CAML_CODE
ML_CALL_STATIC_METH_R0( CL_System, get_time,         unsigned_int, uint )
ML_CALL_STATIC_METH_R0( CL_System, get_num_cores,    int,          int  )
//ML_CALL_STATIC_METH_R0( CL_System, detect_mmx,       bool,         bool )
//ML_CALL_STATIC_METH_R0( CL_System, detect_3dnow,     bool,         bool )
//ML_CALL_STATIC_METH_R0( CL_System, detect_ext_3dnow, bool,         bool )
#endif

// vim: sw=4 sts=4 ts=4 et
