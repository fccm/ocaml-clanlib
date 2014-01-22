#ifndef _CL_SETUPVORBIS_INC
#define _CL_SETUPVORBIS_INC

#include <ClanLib/Vorbis/setupvorbis.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_SetupVorbis(v) (Val_ptr<CL_SetupVorbis>(v))
#define CL_SetupVorbis_val(v) (Ptr_val<CL_SetupVorbis>(v))

#else

#define Val_CL_SetupVorbis(setup_vorbis) ((value)(setup_vorbis))
#define CL_SetupVorbis_val(setup_vorbis) ((CL_SetupVorbis *)(setup_vorbis))

#endif

#endif // _CL_SETUPVORBIS_INC
