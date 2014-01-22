CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_NetGameEventValue.ml \
  CL_NetGameEventValue.mli \
  CL_NetGameEventValue_stub.cpp \
  $CLANWHERE/ClanLib/Network/NetGame/event_value.h \
  CL_NetGameEventValue_stub.hpp \
  #EOL
