#ifndef _CL_CAML_INCS
#define _CL_CAML_INCS

#define CAML_NAME_SPACE

extern "C" {
#include <caml/mlvalues.h>
#include <caml/alloc.h>
#include <caml/memory.h>
#include <caml/fail.h>
#include <caml/bigarray.h>
#include <caml/signals.h>
#include <caml/custom.h>
#include <caml/callback.h>
}

#define CAMLextern_C extern "C"

// Turn on/off the debug messages
#define _OCAML_CLANLIB_DEBUG 1

#if defined(_OCAML_CLANLIB_DEBUG)
  #include <iostream>
#endif

#define CL_WRAP_POINTERS 1

#ifndef CL_WRAP_POINTERS
#define nullify_ptr(p)
#endif

#endif // _CL_CAML_INCS
