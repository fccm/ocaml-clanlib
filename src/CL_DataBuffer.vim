CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_DataBuffer.ml \
  CL_DataBuffer.mli \
  CL_DataBuffer_stub.cpp \
  $CLANWHERE/ClanLib/Core/System/databuffer.h \
  CL_DataBuffer_stub.hpp \
  #EOL
