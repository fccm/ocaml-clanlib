#ifndef _CL_SETUPSOUND_INC
#define _CL_SETUPSOUND_INC

#include <ClanLib/Sound/setupsound.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_SetupSound(v) (Val_ptr<CL_SetupSound>(v))
#define CL_SetupSound_val(v) (Ptr_val<CL_SetupSound>(v))

#else

#define Val_CL_SetupSound(setup_sound) ((value)(setup_sound))
#define CL_SetupSound_val(setup_sound) ((CL_SetupSound *)(setup_sound))

#endif

#endif // _CL_SETUPSOUND_INC
