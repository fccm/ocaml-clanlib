CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_TCPConnection.ml \
  CL_TCPConnection.mli \
  CL_TCPConnection_stub.cpp \
  $CLANWHERE/ClanLib/Network/Socket/tcp_connection.h \
  $CLANWHERE/ClanLib/Core/IOData/iodevice.h \
  #EOL
