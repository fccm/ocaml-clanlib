CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_DomElement.ml \
  CL_DomElement.mli \
  CL_DomElement_stub.cpp \
  $CLANWHERE/ClanLib/Core/XML/dom_element.h \
  CL_DomElement_stub.hpp \
  #EOL
