CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_Font.ml \
  CL_Font.mli \
  CL_Font_stub.cpp \
  $CLANWHERE/ClanLib/Display/Font/font.h
