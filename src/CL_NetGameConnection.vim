CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_NetGameConnection.ml \
  CL_NetGameConnection.mli \
  CL_NetGameConnection_stub.cpp \
  $CLANWHERE/ClanLib/Network/NetGame/connection.h \
  CL_NetGameConnection_stub.hpp \
  #EOL
