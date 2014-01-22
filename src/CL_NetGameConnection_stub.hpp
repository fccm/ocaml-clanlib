#ifndef _CL_NETGAMECONNECTION_INC
#define _CL_NETGAMECONNECTION_INC

#include <ClanLib/Network/NetGame/connection.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_NetGameConnection(v) (Val_ptr<CL_NetGameConnection>(v))
#define CL_NetGameConnection_val(v) (Ptr_val<CL_NetGameConnection>(v))

#else

#define Val_CL_NetGameConnection(v) ((value)(v))
#define CL_NetGameConnection_val(v) ((CL_NetGameConnection *)(v))

#endif

#endif // _CL_NETGAMECONNECTION_INC
