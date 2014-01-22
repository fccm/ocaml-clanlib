cd `dirname $0`
pushd ../src/
  make clanlib_core.cma
popd
/usr/bin/ocaml -I ../src/ \
  clanlib_core.cma \
  ex_console.ml
