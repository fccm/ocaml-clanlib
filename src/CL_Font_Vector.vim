CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_Font_Vector.ml \
  CL_Font_Vector.mli \
  CL_Font_Vector_stub.cpp \
  CL_Font_Vector_stub.hpp \
  $CLANWHERE/ClanLib/Display/Font/font_vector.h
