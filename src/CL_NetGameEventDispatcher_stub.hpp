#ifndef _CL_NETGAMEEVENTDISPATCHER_INC
#define _CL_NETGAMEEVENTDISPATCHER_INC

#include <ClanLib/Network/NetGame/event_dispatcher_v0.h>
#include <ClanLib/Network/NetGame/event_dispatcher_v1.h>
#include <ClanLib/Network/NetGame/event_dispatcher_v2.h>
#include <ClanLib/Network/NetGame/event_dispatcher_v3.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_NetGameEventDispatcher(v) (Val_ptr<CL_NetGameEventDispatcher>(v))
#define CL_NetGameEventDispatcher_val(v) (Ptr_val<CL_NetGameEventDispatcher>(v))

#else

#define Val_CL_NetGameEventDispatcher(v) ((value)(v))
#define CL_NetGameEventDispatcher_val(v) ((CL_NetGameEventDispatcher *)(v))

#endif

#endif // _CL_NETGAMEEVENTDISPATCHER_INC
