CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_Image.ml \
  CL_Image.mli \
  CL_Image_stub.cpp \
  CL_Image_stub.hpp \
  $CLANWHERE/ClanLib/Display/2D/image.h *.cpp
