CLANWHERE="`sh whereis_clan.sh`"
vim \
  CL_InputDevice.ml \
  CL_InputDevice.mli \
  CL_InputDevice_stub.cpp \
  $CLANWHERE/ClanLib/Display/Window/input_device.h \
  *.cpp *.hpp
