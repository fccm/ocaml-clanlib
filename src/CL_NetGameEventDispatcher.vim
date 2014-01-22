CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_NetGameEventDispatcher.ml \
  CL_NetGameEventDispatcher.mli \
  CL_NetGameEventDispatcher_stub.cpp \
  $CLANWHERE/ClanLib/Network/NetGame/event_dispatcher_v0.h \
  $CLANWHERE/ClanLib/Network/NetGame/event_dispatcher_v1.h \
  $CLANWHERE/ClanLib/Network/NetGame/event_dispatcher_v2.h \
  $CLANWHERE/ClanLib/Network/NetGame/event_dispatcher_v3.h \
  CL_NetGameEventDispatcher_stub.hpp \
  #EOL
