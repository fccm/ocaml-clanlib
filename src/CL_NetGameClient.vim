CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_NetGameClient.ml \
  CL_NetGameClient.mli \
  CL_NetGameClient_stub.cpp \
  $CLANWHERE/ClanLib/Network/NetGame/client.h \
  CL_NetGameClient_stub.hpp \
  #EOL
