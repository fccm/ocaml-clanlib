#ifndef _CL_TCPCONNECTION_INC
#define _CL_TCPCONNECTION_INC

#include <ClanLib/Network/Socket/tcp_connection.h>

#ifdef CL_WRAP_POINTERS

#define Val_CL_TCPConnection(v) (Val_ptr<CL_TCPConnection>(v))
#define CL_TCPConnection_val(v) (Ptr_val<CL_TCPConnection>(v))

#else

#define Val_CL_TCPConnection(conn) ((value)(conn))
#define CL_TCPConnection_val(conn) ((CL_TCPConnection *)(conn))

#endif

#endif // _CL_TCPCONNECTION_INC
