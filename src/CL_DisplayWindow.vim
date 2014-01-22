CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_DisplayWindow.ml \
  CL_DisplayWindow.mli \
  CL_DisplayWindow_stub.cpp \
  $CLANWHERE/ClanLib/Display/Window/display_window.h \
  CL_DisplayWindow_stub.hpp \
  *.cpp *.hpp
