#ifndef _CL_SOCKETNAME_INC
#define _CL_SOCKETNAME_INC

#include <ClanLib/Network/Socket/socket_name.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_SocketName(v) (Val_ptr<CL_SocketName>(v))
#define CL_SocketName_val(v) (Ptr_val<CL_SocketName>(v))

#else

#define Val_CL_SocketName(sn) ((value)(sn))
#define CL_SocketName_val(sn) ((CL_SocketName *)(sn))

#endif

#endif // _CL_SOCKETNAME_INC
