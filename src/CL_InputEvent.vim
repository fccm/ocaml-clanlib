CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_InputEvent.ml \
  CL_InputEvent.mli \
  CL_InputEvent_stub.cpp \
  $CLANWHERE/ClanLib/Display/Window/input_event.h \
  *.cpp *.hpp
