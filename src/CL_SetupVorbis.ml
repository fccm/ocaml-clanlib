type setup_vorbis
external init : unit -> setup_vorbis = "caml_CL_SetupVorbis_init"
external delete : setup_vorbis -> unit = "caml_CL_SetupVorbis_delete"

let _setup_vorbis = ref None

let init () =
  _setup_vorbis := Some (init ())

let is_init () =
  !_setup_vorbis <> None

let deinit () =
  match !_setup_vorbis with
  | None -> ()
  | Some sv ->
      delete sv;
      _setup_vorbis := None
