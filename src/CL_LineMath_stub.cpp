/* ocaml-clanlib: OCaml bindings to the ClanLib SDK
 Copyright (C) 2013 Florent Monnier
 
 This software is provided "AS-IS", without any express or implied
 warranty.  In no event will the authors be held liable for any damages
 arising from the use of this software.
 
 Permission is granted to anyone to use this software for any purpose,
 including commercial applications, and to alter it and redistribute it
 freely. */

#include <ClanLib/Core/Math/line_math.h>
#include "cl_caml_incs.hpp"
#include "cl_caml_conv.hpp"
#include "cl_caml_gen.hpp"
#include "CL_Point_stub.hpp"

CALL_STATIC_METH_R3(CL_LineMath, point_right_of_line, float, float,
    CL_Pointf_val, a:pointf,
    CL_Pointf_val, b:pointf,
    CL_Pointf_val, p:pointf)

CALL_STATIC_METH_R2(CL_LineMath, midpoint, CL_Pointf, pointf,
    CL_Pointf_val, a:pointf,
    CL_Pointf_val, b:pointf)

CALL_STATIC_METH_R3(CL_LineMath, closest_point, CL_Pointf, pointf,
    CL_Pointf_val, p:pointf,
    CL_Pointf_val, a:pointf,
    CL_Pointf_val, b:pointf)

CALL_STATIC_METH_R3(CL_LineMath, closest_point_relative, float, float,
    CL_Pointf_val, p:pointf,
    CL_Pointf_val, a:pointf,
    CL_Pointf_val, b:pointf)

#ifdef GEN_CAML_CODE

ML_CALL_STATIC_METH_R3(CL_LineMath, point_right_of_line, float, float,
    CL_Pointf_val, a:pointf,
    CL_Pointf_val, b:pointf,
    CL_Pointf_val, p:pointf)

ML_CALL_STATIC_METH_R2(CL_LineMath, midpoint, CL_Pointf, pointf,
    CL_Pointf_val, a:pointf,
    CL_Pointf_val, b:pointf)

ML_CALL_STATIC_METH_R3(CL_LineMath, closest_point, CL_Pointf, pointf,
    CL_Pointf_val, p:pointf,
    CL_Pointf_val, a:pointf,
    CL_Pointf_val, b:pointf)

ML_CALL_STATIC_METH_R3(CL_LineMath, closest_point_relative, float, float,
    CL_Pointf_val, p:pointf,
    CL_Pointf_val, a:pointf,
    CL_Pointf_val, b:pointf)

#endif

// vim: sw=4 sts=4 ts=4 et
