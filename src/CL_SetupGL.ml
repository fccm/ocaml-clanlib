(* ocaml-clanlib: ocaml bindings to the clanlib
 Copyright (C) 2013 Florent Monnier (monnier dot florent on gmail)
 Code provided under MIT license:
 See the file MIT_License.txt or this URL:
 http://opensource.org/licenses/mit-license.php
 This software is provided "AS IS", without warranty of any kind. *)

type setup_gl

external init : unit -> setup_gl
  = "caml_CL_SetupGL_init"

external delete : setup_gl -> unit
  = "caml_CL_SetupGL_delete"

let _setup_gl = ref None

let init () =
  _setup_gl := Some (init ())

let is_init () =
  !_setup_gl <> None

let deinit () =
  match !_setup_gl with
  | None -> ()
  | Some sg ->
      delete sg;
      _setup_gl := None
