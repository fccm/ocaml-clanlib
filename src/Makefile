# Makefile for ocaml-clanlib
# Copyright (C) 2013 Florent Monnier (monnier dot florent on gmail)
# 
# This makefile is provided 'as-is', without any express or implied warranty.
# In no event will the authors be held liable for any damages arising from the
# use of this makefile.
# 
# Permission is granted to anyone to use this makefile for any purpose,
# including commercial applications, and to alter it and redistribute it
# freely.

OCAML := ocaml
CXX_PARAMS := -Wall -Werror
CXX := g++ -g -fPIC -std=c++0x
CXX_MM = g++ -MM -std=c++0x $(CL_INC)
OCAMLOPT_PARAMS := -g -w A -warn-error A -ccopt "$(CXX_PARAMS)"
OCAMLOPT := ocamlopt $(OCAMLOPT_PARAMS)
OCAMLC_PARAMS := -g -w A -warn-error A
OCAMLC := ocamlc $(OCAMLC_PARAMS)
OCAMLDOC := ocamldoc
OCAMLMKLIB := ocamlmklib
OCAMLDEP := ocamldep
OCAML_DIR := $(shell ocamlc -where)
OCAML_INC := -I$(OCAML_DIR)
BINDING_DIR := clanlib
PREFIX := $(OCAML_DIR)/$(BINDING_DIR)
#DLL_PREFIX := $(OCAML_DIR)/stublibs
DLL_PREFIX := $(PREFIX)
VERSION := $(shell date --iso)

CL_VER := 2.3
CLV_SUF := -$(CL_VER)

# Default is: CL_INC_DIR=/usr/include/ClanLib-2.1

LIB_BASEDIR := /usr
INC_DIR := $(LIB_BASEDIR)/include
CL_INC_DIR := $(INC_DIR)/ClanLib-$(CL_VER)

CL_INC := -I$(CL_INC_DIR)

LIBDIRSUFFIX :=
#LIBDIRSUFFIX := 64
LIBDIR := lib$(LIBDIRSUFFIX)

LD_DIR := $(LIB_BASEDIR)/$(LIBDIR)/
LD_PATH := -L$(LD_DIR)

# pkg-config --cflags --libs clanCore-2.1 clanDisplay-2.1 clanGL-2.1 clanGL1-2.1 clanApp-2.1

PKG_CONF_DIR := /usr/lib/pkgconfig
PKG_CONF := pkg-config

CL_LIB_CORE     := $(shell PKG_CONFIG_PATH="$(PKG_CONF_DIR)" $(PKG_CONF) --cflags --libs clanCore$(CLV_SUF))
CL_LIB_APP      := $(shell PKG_CONFIG_PATH="$(PKG_CONF_DIR)" $(PKG_CONF) --cflags --libs clanApp$(CLV_SUF))
CL_LIB_DISPLAY  := $(shell PKG_CONFIG_PATH="$(PKG_CONF_DIR)" $(PKG_CONF) --cflags --libs clanDisplay$(CLV_SUF))
CL_LIB_GL       := $(shell PKG_CONFIG_PATH="$(PKG_CONF_DIR)" $(PKG_CONF) --cflags --libs clanGL$(CLV_SUF))
CL_LIB_GUI      := $(shell PKG_CONFIG_PATH="$(PKG_CONF_DIR)" $(PKG_CONF) --cflags --libs clanGUI$(CLV_SUF))
CL_LIB_SOUND    := $(shell PKG_CONFIG_PATH="$(PKG_CONF_DIR)" $(PKG_CONF) --cflags --libs clanSound$(CLV_SUF))
CL_LIB_NETWORK  := $(shell PKG_CONFIG_PATH="$(PKG_CONF_DIR)" $(PKG_CONF) --cflags --libs clanNetwork$(CLV_SUF))

# clanCSSLayout-
# clanDatabase-
# clanGL1-
# clanMikMod-
# clanRegExp-
# clanSqlite-
# clanSWRender-
# clanVorbis-

#CL_LIB_CORE     := -lclan21Core
#CL_LIB_APP      := -lclan21App
#CL_LIB_DISPLAY  := -lclan21Display -lclan21App -lclan21Core
#CL_LIB_GL       := -lclan21GL -lclan21Display -lclan21App -lclan21Core
#CL_LIB_GUI      := -lclan21GUI
#CL_LIB_SOUND    := -lclan21Sound
#CL_LIB_NETWORK  := -lclan21Network

LD_LIBS  := -lpthread -lstdc++


.PHONY: all cma opt cmxs
all: opt
cma: \
  clanlib_core.cma \
  clanlib_display.cma \
  clanlib_gl.cma \
  clanlib_sound.cma \
  clanlib_net.cma
opt: \
  clanlib_core.cmxa \
  clanlib_display.cmxa \
  clanlib_gl.cmxa \
  clanlib_sound.cmxa \
  clanlib_net.cmxa
cmxs: \
  clanlib_core.cmxs \
  clanlib_display.cmxs \
  clanlib_gl.cmxs \
  clanlib_sound.cmxs \
  clanlib_net.cmxs


CL_LIBS := $(shell PKG_CONFIG_PATH="$(PKG_CONF_DIR)" $(PKG_CONF) --cflags --libs clanCore$(CLV_SUF) clanApp$(CLV_SUF) clanDisplay$(CLV_SUF) clanGL$(CLV_SUF) clanGUI$(CLV_SUF) clanSound$(CLV_SUF) clanNetwork$(CLV_SUF))
.PHONY: echo_libs
echo_libs:
	@echo $(CL_LIBS)


.SECONDARY:


CLANLIB_CORE := \
  CL_SetupCore.ml \
  CL_System.ml \
  CL_Console.ml \
  CL_Version.ml \
  CL_Type.ml \
  CL_String16.ml \
  CL_Color.ml \
  CL_Colorf.ml \
  CL_Rect.ml \
  CL_Rectf.ml \
  CL_Mat4f.ml \
  CL_Vec3f.ml \
  CL_Angle.ml \
  CL_Point.ml \
  CL_Pointf.ml \
  CL_IODevice.ml \
  CL_File.ml \
  CL_DataBuffer.ml \
  CL_VirtualDirectory.ml \
  CL_Timer.ml \
  CL_KeepAlive.ml \
  CL_LineMath.ml \
  CL_Quad.ml \
  CL_Quadf.ml \
  CL_DomNode.ml \
  CL_DomDocument.ml \
  CL_DomElement.ml \
  CL_XMLTokenizer.ml \
  CL_XMLToken.ml \
  #End
CLANLIB_DISPLAY := \
  CL_SetupDisplay.ml \
  CL_DisplayWindowDescription.ml \
  CL_DisplayWindow.ml \
  CL_DisplayTarget.ml \
  CL_Gradient.ml \
  CL_GraphicContext.ml \
  CL_BlendEquation.ml \
  CL_BlendFunc.ml \
  CL_BlendMode.ml \
  CL_FontDescription.ml \
  CL_Font.ml \
  CL_Font_Vector.ml \
  CL_Draw.ml \
  CL_RoundedRect.ml \
  CL_InputContext.ml \
  CL_InputDevice.ml \
  CL_InputEvent.ml \
  CL_InputEventQueue.ml \
  CL_Texture.ml \
  CL_Image.ml \
  \
  CL_Sprite.ml \
  CL_Palette.ml \
  CL_PrimitivesArray.ml \
  CL_PixelFormat.ml \
  CL_PixelBuffer.ml \
  #End
#  CL_PerlinNoise.ml \
#
CLANLIB_GL := \
  CL_SetupGL.ml \
  #End
CLANLIB_SOUND := \
  CL_SetupSound.ml \
  CL_SetupVorbis.ml \
  #End
CLANLIB_NETWORK := \
  CL_SetupNetwork.ml \
  CL_SocketName.ml \
  CL_TCPListen.ml \
  CL_TCPConnection.ml \
  CL_UDPSocket.ml \
  CL_NetGameServer.ml \
  CL_NetGameClient.ml \
  CL_NetGameConnection.ml \
  CL_NetGameEvent.ml \
  CL_NetGameEventDispatcher.ml \
  #End

TYPE_MLI_FILES := \
  CL_Key.mli \
  CL_Mouse.mli \
  CL_Size.mli \
  CL_Sizef.mli \
  #End


CLANLIB_ML_FILES := \
  $(CLANLIB_CORE) \
  $(CLANLIB_DISPLAY) \
  $(CLANLIB_GL) \
  $(CLANLIB_GUI) \
  $(CLANLIB_SOUND) \
  $(CLANLIB_NETWORK) \
  #End


STUBS_CORE := \
  cl_caml_conv.cpp \
  CL_SetupCore_stub.cpp \
  CL_System_stub.cpp \
  CL_Console_stub.cpp \
  CL_Version_stub.cpp \
  CL_String16_stub.cpp \
  CL_Type_stub.cpp \
  CL_Color_stub.cpp \
  CL_Rect_stub.cpp \
  CL_Mat4f_stub.cpp \
  CL_Vec3f_stub.cpp \
  CL_Angle_stub.cpp \
  CL_Point_stub.cpp \
  CL_Size_stub.cpp \
  CL_IODevice_stub.cpp \
  CL_File_stub.cpp \
  CL_DataBuffer_stub.cpp \
  CL_VirtualDirectory_stub.cpp \
  CL_Timer_stub.cpp \
  CL_KeepAlive_stub.cpp \
  CL_LineMath_stub.cpp \
  CL_Quad_stub.cpp \
  CL_DomNode_stub.cpp \
  CL_DomDocument_stub.cpp \
  CL_DomElement_stub.cpp \
  CL_XMLTokenizer_stub.cpp \
  CL_XMLToken_stub.cpp \
  #End
STUBS_DISPLAY := \
  CL_SetupDisplay_stub.cpp \
  CL_GraphicContext_stub.cpp \
  CL_DisplayWindow_stub.cpp \
  CL_DisplayWindowDescription_stub.cpp \
  CL_DisplayTarget_stub.cpp \
  CL_BlendMode_stub.cpp \
  CL_FontDescription_stub.cpp \
  CL_Font_stub.cpp \
  CL_Font_Vector_stub.cpp \
  CL_Draw_stub.cpp \
  CL_RoundedRect_stub.cpp \
  CL_InputContext_stub.cpp \
  CL_InputDevice_stub.cpp \
  CL_InputEvent_stub.cpp \
  CL_InputEventQueue_impl.cpp \
  CL_InputEventQueue_stub.cpp \
  CL_Texture_stub.cpp \
  CL_Image_stub.cpp \
  CL_Sprite_stub.cpp \
  \
  CL_Palette_stub.cpp \
  CL_PrimitivesArray_stub.cpp \
  CL_PixelFormat_stub.cpp \
  CL_PixelBuffer_stub.cpp \
  #End
#  CL_PerlinNoise_stub.cpp \
#
STUBS_GL := \
  CL_SetupGL_stub.cpp \
  #End
STUBS_GUI := \
  #End
STUBS_SOUND := \
  CL_SetupSound_stub.cpp \
  CL_SetupVorbis_stub.cpp \
  #End
STUBS_NETWORK := \
  CL_SetupNetwork_stub.cpp \
  CL_SocketName_stub.cpp \
  CL_TCPListen_stub.cpp \
  CL_TCPConnection_stub.cpp \
  CL_UDPSocket_stub.cpp \
  CL_NetGameServer_stub.cpp \
  CL_NetGameClient_stub.cpp \
  CL_NetGameConnection_stub.cpp \
  CL_NetGameEvent_stub.cpp \
  CL_NetGameEventDispatcher_stub.cpp \
  #End


CLANLIB_CXX_FILES := \
  $(STUBS_CORE) \
  $(STUBS_DISPLAY) \
  $(STUBS_GL) \
  $(STUBS_GUI) \
  $(STUBS_SOUND) \
  $(STUBS_NETWORK) \
  #End

STUBS_CORE_OBJ      := $(patsubst %.cpp, %.o, $(STUBS_CORE))
STUBS_DISPLAY_OBJ   := $(patsubst %.cpp, %.o, $(STUBS_DISPLAY))
STUBS_GL_OBJ        := $(patsubst %.cpp, %.o, $(STUBS_GL))
STUBS_GUI_OBJ       := $(patsubst %.cpp, %.o, $(STUBS_GUI))
STUBS_SOUND_OBJ     := $(patsubst %.cpp, %.o, $(STUBS_SOUND))
STUBS_NETWORK_OBJ   := $(patsubst %.cpp, %.o, $(STUBS_NETWORK))


MOD_CLANLIB_CORE_CMO := $(patsubst %.ml, %.cmo, $(CLANLIB_CORE))
MOD_CLANLIB_CORE_CMX := $(patsubst %.ml, %.cmx, $(CLANLIB_CORE))

MOD_CLANLIB_DISPLAY_CMO := $(patsubst %.ml, %.cmo, $(CLANLIB_DISPLAY))
MOD_CLANLIB_DISPLAY_CMX := $(patsubst %.ml, %.cmx, $(CLANLIB_DISPLAY))

MOD_CLANLIB_GL_CMO := $(patsubst %.ml, %.cmo, $(CLANLIB_GL))
MOD_CLANLIB_GL_CMX := $(patsubst %.ml, %.cmx, $(CLANLIB_GL))

MOD_CLANLIB_GUI_CMO := $(patsubst %.ml, %.cmo, $(CLANLIB_GUI))
MOD_CLANLIB_GUI_CMX := $(patsubst %.ml, %.cmx, $(CLANLIB_GUI))

MOD_CLANLIB_SOUND_CMO := $(patsubst %.ml, %.cmo, $(CLANLIB_SOUND))
MOD_CLANLIB_SOUND_CMX := $(patsubst %.ml, %.cmx, $(CLANLIB_SOUND))

MOD_CLANLIB_NETWORK_CMO := $(patsubst %.ml, %.cmo, $(CLANLIB_NETWORK))
MOD_CLANLIB_NETWORK_CMX := $(patsubst %.ml, %.cmx, $(CLANLIB_NETWORK))

CLANLIB_MLI_FILES := $(patsubst %.ml, %.mli, $(CLANLIB_ML_FILES))
CLANLIB_CMI_FILES := $(patsubst %.ml, %.cmi, $(CLANLIB_ML_FILES))


.PHONY: dep
dep: cxx_depend.mk ml_depend.mk

-include ml_depend.mk
ml_depend.mk: $(CLANLIB_ML_FILES)
	$(OCAMLDEP) CL_*.ml CL_*.mli > $@

-include cxx_depend.mk
cxx_depend.mk: $(CLANLIB_CXX_FILES)
	$(CXX_MM) CL_*.cpp CL_*.hpp > $@


dllclan_core_stubs.so: $(STUBS_CORE_OBJ)
	$(OCAMLMKLIB) -oc clan_core_stubs $^ \
	    $(CL_LIB_CORE) \
	    $(LD_PATH) \
	    $(LD_LIBS)

dllclan_display_stubs.so: $(STUBS_DISPLAY_OBJ)
	$(OCAMLMKLIB) -oc clan_display_stubs $^ \
	    $(CL_LIB_DISPLAY) \
	    $(LD_PATH) \
	    $(LD_LIBS)

dllclan_gl_stubs.so: $(STUBS_GL_OBJ)
	$(OCAMLMKLIB) -oc clan_gl_stubs $^ \
	    $(CL_LIB_GL) \
	    $(LD_PATH) \
	    $(LD_LIBS)

dllclan_sound_stubs.so: $(STUBS_SOUND_OBJ)
	$(OCAMLMKLIB) -oc clan_sound_stubs $^ \
	    $(CL_LIB_SOUND) \
	    $(LD_PATH) \
	    $(LD_LIBS)

dllclan_net_stubs.so: $(STUBS_NETWORK_OBJ)
	$(OCAMLMKLIB) -oc clan_net_stubs $^ \
	    $(CL_LIB_NETWORK) \
	    $(LD_PATH) \
	    $(LD_LIBS)


clanlib_core.cma: dllclan_core_stubs.so $(MOD_CLANLIB_CORE_CMO)
	$(OCAMLC) -a -o $@ $(MOD_CLANLIB_CORE_CMO) \
	    -dllib -lclan_core_stubs \
	    -cclib -lclan_core_stubs \
	    -ccopt "$(LD_PATH)" \
	    -cclib "$(CL_LIB_CORE) $(LD_LIBS)"

clanlib_core.cmxa: dllclan_core_stubs.so $(MOD_CLANLIB_CORE_CMX)
	$(OCAMLOPT) -a -o $@ \
	    $(MOD_CLANLIB_CORE_CMX) \
	    -cclib -lclan_core_stubs \
	    -ccopt "$(LD_PATH)" \
	    -cclib "$(CL_LIB_CORE) $(LD_LIBS)"


clanlib_display.cma: dllclan_display_stubs.so $(MOD_CLANLIB_DISPLAY_CMO)
	$(OCAMLC) -a -o $@ $(MOD_CLANLIB_DISPLAY_CMO) \
	    -dllib -lclan_display_stubs \
	    -cclib -lclan_display_stubs \
	    -ccopt "$(LD_PATH)" \
	    -cclib "$(CL_LIB_DISPLAY) $(LD_LIBS)"

clanlib_display.cmxa: dllclan_display_stubs.so $(MOD_CLANLIB_DISPLAY_CMX)
	$(OCAMLOPT) -a -o $@ \
	    $(MOD_CLANLIB_DISPLAY_CMX) \
	    -cclib -lclan_display_stubs \
	    -ccopt "$(LD_PATH)" \
	    -cclib "$(CL_LIB_DISPLAY) $(LD_LIBS)"


clanlib_gl.cma: dllclan_gl_stubs.so $(MOD_CLANLIB_GL_CMO)
	$(OCAMLC) -a -o $@ $(MOD_CLANLIB_GL_CMO) \
	    -dllib -lclan_gl_stubs \
	    -cclib -lclan_gl_stubs \
	    -ccopt "$(LD_PATH)" \
	    -cclib "$(CL_LIB_GL) $(LD_LIBS)"

clanlib_gl.cmxa: dllclan_gl_stubs.so $(MOD_CLANLIB_GL_CMX)
	$(OCAMLOPT) -a -o $@ \
	    $(MOD_CLANLIB_GL_CMX) \
	    -cclib -lclan_gl_stubs \
	    -ccopt "$(LD_PATH)" \
	    -cclib "$(CL_LIB_GL) $(LD_LIBS)"


clanlib_sound.cma: dllclan_sound_stubs.so $(MOD_CLANLIB_SOUND_CMO)
	$(OCAMLC) -a -o $@ $(MOD_CLANLIB_SOUND_CMO) \
	    -dllib -lclan_sound_stubs \
	    -cclib -lclan_sound_stubs \
	    -ccopt "$(LD_PATH)" \
	    -cclib "$(CL_LIB_SOUND) $(LD_LIBS)"

clanlib_sound.cmxa: dllclan_sound_stubs.so $(MOD_CLANLIB_SOUND_CMX)
	$(OCAMLOPT) -a -o $@ \
	    $(MOD_CLANLIB_SOUND_CMX) \
	    -cclib -lclan_sound_stubs \
	    -ccopt "$(LD_PATH)" \
	    -cclib "$(CL_LIB_SOUND) $(LD_LIBS)"


clanlib_net.cma: dllclan_net_stubs.so $(MOD_CLANLIB_NETWORK_CMO)
	$(OCAMLC) -a -o $@ $(MOD_CLANLIB_NETWORK_CMO) \
	    -dllib -lclan_net_stubs \
	    -cclib -lclan_net_stubs \
	    -ccopt "$(LD_PATH)" \
	    -cclib "$(CL_LIB_NETWORK) $(LD_LIBS)"

clanlib_net.cmxa: dllclan_net_stubs.so $(MOD_CLANLIB_NETWORK_CMX)
	$(OCAMLOPT) -a -o $@ \
	    $(MOD_CLANLIB_NETWORK_CMX) \
	    -cclib -lclan_net_stubs \
	    -ccopt "$(LD_PATH)" \
	    -cclib "$(CL_LIB_NETWORK) $(LD_LIBS)"


%.o: %.cpp cl_caml_incs.hpp
	$(CXX) $(CXX_PARAMS) -c $(OCAML_INC) $(CL_INC) $<

# don't use -Wall -Werror for these files:

CL_NetGameClient_stub.o: CL_NetGameClient_stub.cpp
	$(CXX) -c $(OCAML_INC) $(CL_INC) $<
CL_NetGameServer_stub.o: CL_NetGameServer_stub.cpp
	$(CXX) -c $(OCAML_INC) $(CL_INC) $<


%.cmi: %.mli
	$(OCAMLC) -c -o $@ $<
%.cmo: %.ml %.cmi
	$(OCAMLC) -c -o $@ $<
%.cmx: %.ml %.cmi
	$(OCAMLOPT) -c -o $@ $<

%.cmxs: %.cmxa
	$(OCAMLOPT) -shared -linkall -ccopt -L. -o $@ $<


DOC_DIR := doc
DOC_FMT := -html -css-style style.css
.PHONY: doc
doc: $(CLANLIB_MLI_FILES) $(CLANLIB_CMI_FILES)
	mkdir -p $(DOC_DIR)
	$(OCAMLDOC) \
	    $(TYPE_MLI_FILES) \
	    $(CLANLIB_MLI_FILES) \
	    -colorize-code $(DOC_FMT) \
	    -d $(DOC_DIR)


.PHONY: findinstall
findinstall:
	ocamlfind install clanlib META *.cma *.cmxa *.cmi *.mli *.so *.a


# Dependency visualisation:

.PHONY: deps_viz
deps_viz: deps.svg

deps.raw: $(CLANLIB_MLI_FILES)
	$(OCAMLDEP) -modules CL_*.mli > $@

deps.dot: deps.raw
	cat style1.dot > deps.dot
	ocaml dep2dot.ml deps.raw >> deps.dot
	echo "}" >> deps.dot

deps.svg: deps.dot
	dot -Tsvg $< -o  $@

clean:
	$(RM) *.[oa] *.cm[ixoa] *.cmx[as] *.so *.bin *.opt *.byte *_depend.mk

clean_obj:
	$(RM) *.o

clean_baks:
	$(RM) *~ */*~

clean_doc:
	$(RM) $(DOC_DIR)/*
	$(RM) -r $(DOC_DIR)

clean_all: clean clean_doc clean_obj clean_baks

.PHONY: clean clean_doc clean_obj clean_baks clean_all
