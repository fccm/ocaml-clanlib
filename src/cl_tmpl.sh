MOD="$1"
sed -e "s/CL_Foo/$MOD/g" cl_tmpl.ml  >> "$MOD".ml
sed -e "s/CL_Foo/$MOD/g" cl_tmpl.mli >> "$MOD".mli
sed -e "s/CL_Foo/$MOD/g" cl_tmpl.cpp >> "$MOD"_stub.cpp
sed -e "s/CL_Foo/$MOD/g" cl_tmpl.hpp >> "$MOD"_stub.hpp
sed -e "s/CL_Foo/$MOD/g" cl_tmpl.vim >> "$MOD".vim

LINK=`echo $MOD | sed -e "s/_/__/g"`
sed -e "s/CL__Foo/$LINK/g" -i "$MOD".mli
