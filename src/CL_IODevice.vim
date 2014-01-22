CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_IODevice.ml \
  CL_IODevice.mli \
  CL_IODevice_stub.cpp \
  $CLANWHERE/ClanLib/Core/IOData/iodevice.h \
  CL_IODevice_stub.hpp \
  #EOL
