CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_Mat4f.ml \
  CL_Mat4f.mli \
  CL_Mat4f_stub.cpp \
  $CLANWHERE/ClanLib/Core/Math/mat4.h \
  CL_Mat4f_stub.hpp \
  #EOL
