CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_SocketName.ml \
  CL_SocketName.mli \
  CL_SocketName_stub.cpp \
  CL_SocketName_stub.hpp \
  $CLANWHERE/ClanLib/Network/Socket/socket_name.h \
  *.cpp *.hpp
