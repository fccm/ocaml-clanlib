cd `dirname $0`
pushd ../src/
make \
  clanlib_core.cma \
  clanlib_display.cma \
  clanlib_gl.cma
popd
/usr/bin/ocaml \
  -I ../src/ \
  clanlib_core.cma \
  clanlib_display.cma \
  clanlib_gl.cma \
  ex_minimal_display.ml
