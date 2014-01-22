CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_TCPListen.ml \
  CL_TCPListen.mli \
  CL_TCPListen_stub.cpp \
  $CLANWHERE/ClanLib/Network/Socket/tcp_listen.h
