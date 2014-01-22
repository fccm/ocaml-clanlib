CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_Texture.ml \
  CL_Texture.mli \
  CL_Texture_stub.cpp \
  CL_Texture_stub.hpp \
  $CLANWHERE/ClanLib/Display/Render/texture.h
