CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_GraphicContext.ml \
  CL_GraphicContext.mli \
  CL_GraphicContext_stub.cpp \
  $CLANWHERE/ClanLib/Display/Render/graphic_context.h \
  *.cpp *.hpp
