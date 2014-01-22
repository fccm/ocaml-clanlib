#ifndef _CL_UDPSOCKET_INC
#define _CL_UDPSOCKET_INC

#include <ClanLib/Network/Socket/udp_socket.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_UDPSocket(v) (Val_ptr<CL_UDPSocket>(v))
#define CL_UDPSocket_val(v) (Ptr_val<CL_UDPSocket>(v))

#else

#define Val_CL_UDPSocket(sock) ((value)(sock))
#define CL_UDPSocket_val(sock) ((CL_UDPSocket *)(sock))

#endif

#endif // _CL_UDPSOCKET_INC
