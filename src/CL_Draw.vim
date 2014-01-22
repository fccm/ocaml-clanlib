CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_Draw.ml \
  CL_Draw.mli \
  CL_Draw_stub.cpp \
  $CLANWHERE/ClanLib/Display/2D/draw.h
