CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_DomDocument.ml \
  CL_DomDocument.mli \
  CL_DomDocument_stub.cpp \
  $CLANWHERE/ClanLib/Core/XML/dom_document.h \
  CL_DomDocument_stub.hpp \
  #EOL
