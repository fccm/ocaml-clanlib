CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_PixelBuffer.ml \
  CL_PixelBuffer.mli \
  CL_PixelBuffer_stub.cpp \
  $CLANWHERE/ClanLib/Display/Image/pixel_buffer.h \
  CL_PixelBuffer_stub.hpp
