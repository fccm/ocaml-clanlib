CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_RoundedRect.ml \
  CL_RoundedRect.mli \
  CL_RoundedRect_stub.cpp \
  $CLANWHERE/ClanLib/Display/2D/rounded_rect.h \
  CL_RoundedRect_stub.hpp \
  *.cpp *.hpp
