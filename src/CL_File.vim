CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_File.ml \
  CL_File.mli \
  CL_File_stub.cpp \
  $CLANWHERE/ClanLib/Core/IOData/file.h
