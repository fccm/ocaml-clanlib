CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_PerlinNoise.ml \
  CL_PerlinNoise.mli \
  CL_PerlinNoise_stub.cpp \
  $CLANWHERE/ClanLib/Display/Image/perlin_noise.h \
  CL_PerlinNoise_stub.hpp \
  #EOL
