CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_NetGameEvent.ml \
  CL_NetGameEvent.mli \
  CL_NetGameEvent_stub.cpp \
  $CLANWHERE/ClanLib/Network/NetGame/event.h \
  CL_NetGameEvent_stub.hpp \
  #EOL
