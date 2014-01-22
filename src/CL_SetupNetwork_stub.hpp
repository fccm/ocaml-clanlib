#ifndef _CL_SETUPNETWORK_INC
#define _CL_SETUPNETWORK_INC

#include <ClanLib/Network/setupnetwork.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_SetupNetwork(v) (Val_ptr<CL_SetupNetwork>(v))
#define CL_SetupNetwork_val(v) (Ptr_val<CL_SetupNetwork>(v))

#else

#define Val_CL_SetupNetwork(sn) ((value)(sn))
#define CL_SetupNetwork_val(sn) ((CL_SetupNetwork *)(sn))

#endif

#endif // _CL_SETUPNETWORK_INC
