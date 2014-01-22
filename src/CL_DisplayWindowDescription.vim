CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_DisplayWindowDescription.ml \
  CL_DisplayWindowDescription.mli \
  CL_DisplayWindowDescription_stub.cpp \
  CL_DisplayWindowDescription_stub.hpp \
  $CLANWHERE/ClanLib/Display/Window/display_window_description.h
