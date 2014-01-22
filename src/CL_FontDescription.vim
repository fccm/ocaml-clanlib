CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_FontDescription.ml \
  CL_FontDescription.mli \
  CL_FontDescription_stub.cpp \
  $CLANWHERE/ClanLib/Display/Font/font_description.h
