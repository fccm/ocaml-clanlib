type setup_sound
external init : unit -> setup_sound = "caml_CL_SetupCore_init"
external delete : setup_sound -> unit = "caml_CL_SetupCore_delete"

let _setup_sound = ref None

let init () =
  _setup_sound := Some (init ())

let is_init () =
  !_setup_sound <> None

let deinit () =
  match !_setup_sound with
  | None -> ()
  | Some ss ->
      delete ss;
      _setup_sound := None
