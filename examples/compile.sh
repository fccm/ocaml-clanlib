cd `dirname $0`

ocamlopt -g \
  -I ../src/ \
  -ccopt "-lstdc++" \
  unix.cmxa \
  clanlib_core.cmxa \
  clanlib_display.cmxa \
  clanlib_gl.cmxa \
  $1 \
  -o `basename $1 .ml`.opt
