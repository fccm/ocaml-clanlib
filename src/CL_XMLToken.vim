CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_XMLToken.ml \
  CL_XMLToken.mli \
  CL_XMLToken_stub.cpp \
  $CLANWHERE/ClanLib/Core/XML/xml_token.h \
  CL_XMLToken_stub.hpp \
  #EOL
