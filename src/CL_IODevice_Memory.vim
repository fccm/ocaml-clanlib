CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_IODevice_Memory.ml \
  CL_IODevice_Memory.mli \
  CL_IODevice_Memory_stub.cpp \
  $CLANWHERE/ClanLib/Core/IOData/iodevice_memory.h \
  CL_IODevice_Memory_stub.hpp \
  #EOL
