#ifndef _CL_SETUPCORE_INC
#define _CL_SETUPCORE_INC

#include <ClanLib/Core/System/setup_core.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_SetupCore(v) (Val_ptr<CL_SetupCore>(v))
#define CL_SetupCore_val(v) (Ptr_val<CL_SetupCore>(v))

#else

#define Val_CL_SetupCore(setup_core) ((value)(setup_core))
#define CL_SetupCore_val(setup_core) ((CL_SetupCore *)(setup_core))

#endif

#endif // _CL_SETUPCORE_INC
