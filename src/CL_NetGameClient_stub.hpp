#ifndef _CL_NETGAMECLIENT_INC
#define _CL_NETGAMECLIENT_INC

#include <ClanLib/Network/NetGame/client.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_NetGameClient(v) (Val_ptr<CL_NetGameClient>(v))
#define CL_NetGameClient_val(v) (Ptr_val<CL_NetGameClient>(v))

#else

#define Val_CL_NetGameClient(v) ((value)(v))
#define CL_NetGameClient_val(v) ((CL_NetGameClient *)(v))

#endif

#endif // _CL_NETGAMECLIENT_INC
