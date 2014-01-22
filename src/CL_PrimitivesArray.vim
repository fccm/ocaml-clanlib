CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_PrimitivesArray.ml \
  CL_PrimitivesArray.mli \
  CL_PrimitivesArray_stub.cpp \
  $CLANWHERE/ClanLib/Display/Render/primitives_array.h \
  CL_PrimitivesArray_stub.hpp \
  #EOL
