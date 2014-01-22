CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_Foo.ml \
  CL_Foo.mli \
  CL_Foo_stub.cpp \
  $CLANWHERE/ClanLib/ \
  CL_Foo_stub.hpp \
  #EOL
