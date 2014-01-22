CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_XMLTokenizer.ml \
  CL_XMLTokenizer.mli \
  CL_XMLTokenizer_stub.cpp \
  $CLANWHERE/ClanLib/Core/XML/xml_tokenizer.h \
  CL_XMLTokenizer_stub.hpp \
  #EOL
