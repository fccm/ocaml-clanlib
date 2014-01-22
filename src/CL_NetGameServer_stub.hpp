#ifndef _CL_NETGAMESERVER_INC
#define _CL_NETGAMESERVER_INC

#include <ClanLib/Network/NetGame/server.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_NetGameServer(v) (Val_ptr<CL_NetGameServer>(v))
#define CL_NetGameServer_val(v) (Ptr_val<CL_NetGameServer>(v))

#else

#define Val_CL_NetGameServer(srv) ((value)(srv))
#define CL_NetGameServer_val(srv) ((CL_NetGameServer *)(srv))

#endif

#endif // _CL_NETGAMESERVER_INC
