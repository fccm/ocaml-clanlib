#ifndef _CL_NETGAMEEVENT_INC
#define _CL_NETGAMEEVENT_INC

#include <ClanLib/Network/NetGame/event.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_NetGameEvent(v) (Val_ptr<CL_NetGameEvent>(v))
#define CL_NetGameEvent_val(v) (Ptr_val<CL_NetGameEvent>(v))

#else

#define Val_CL_NetGameEvent(v) ((value)(v))
#define CL_NetGameEvent_val(v) ((CL_NetGameEvent *)(v))

#endif

#endif // _CL_NETGAMEEVENT_INC
