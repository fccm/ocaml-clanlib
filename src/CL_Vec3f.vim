CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_Vec3f.ml \
  CL_Vec3f.mli \
  CL_Vec3f_stub.cpp \
  $CLANWHERE/ClanLib/Core/Math/vec3.h \
  CL_Vec3f_stub.hpp \
  #EOL
