CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_DomNode.ml \
  CL_DomNode.mli \
  CL_DomNode_stub.cpp \
  $CLANWHERE/ClanLib/Core/XML/dom_node.h \
  CL_DomNode_stub.hpp \
  #EOL
