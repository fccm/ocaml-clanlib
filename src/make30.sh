# For a 3.0 clanlib compiled and installed with:
# sh configure --prefix=/tmp/clan30

BASE_DIR="/tmp/clan30"

make \
  PKG_CONF_DIR="$BASE_DIR/lib/pkgconfig" \
  CL_INC_DIR="$BASE_DIR/include/ClanLib-3.0" \
  CL_VER="3.0" \
  $*
