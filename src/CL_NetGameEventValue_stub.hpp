#ifndef _CL_NETGAMEEVENTVALUE_INC
#define _CL_NETGAMEEVENTVALUE_INC

#include <ClanLib/Network/NetGame/event_value.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_NetGameEventValue(v) (Val_ptr<CL_NetGameEventValue>(v))
#define CL_NetGameEventValue_val(v) (Ptr_val<CL_NetGameEventValue>(v))

#else

#define Val_CL_NetGameEventValue(v) ((value)(v))
#define CL_NetGameEventValue_val(v) ((CL_NetGameEventValue *)(v))

#endif

#endif // _CL_NETGAMEEVENTVALUE_INC
