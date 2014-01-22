CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_NetGameServer.ml \
  CL_NetGameServer.mli \
  CL_NetGameServer_stub.cpp \
  CL_NetGameServer_stub.hpp \
  $CLANWHERE/ClanLib/Network/NetGame/server.h
