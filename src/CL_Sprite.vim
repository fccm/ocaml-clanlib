CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_Sprite.ml \
  CL_Sprite.mli \
  CL_Sprite_stub.cpp \
  $CLANWHERE/ClanLib/Display/2D/sprite.h \
  CL_Sprite_stub.hpp \
  #EOL
