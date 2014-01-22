CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_Angle.ml \
  CL_Angle.mli \
  CL_Angle_stub.cpp \
  $CLANWHERE/ClanLib/Core/Math/angle.h \
  CL_Angle_stub.hpp \
  #EOL
