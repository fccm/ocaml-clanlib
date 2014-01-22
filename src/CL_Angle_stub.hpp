#ifndef _CL_ANGLE_INC
#define _CL_ANGLE_INC

#include <ClanLib/Core/Math/angle.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_Angle(v) (Val_ptr<CL_Angle>(v))
#define CL_Angle_val(v) (Ptr_val<CL_Angle>(v))

#else

#define Val_CL_Angle(v) ((value)(v))
#define CL_Angle_val(v) ((CL_Angle *)(v))

#endif

#define caml_copy_CL_Angle(a) \
    Val_CL_Angle(new CL_Angle(a.to_radians(), cl_radians))

#endif // _CL_ANGLE_INC
