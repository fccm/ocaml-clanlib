let rgba r g b a = CL_Colorf.init ~r ~g ~b ~a ()
let rgb r g b = CL_Colorf.init ~r ~g ~b ()

let () =
  CL_SetupCore.init ();
  CL_SetupDisplay.init ();
  CL_SetupGL.init ();
  let title = "Win Title" in
  let width, height = (640, 480) in
  let position = CL_Rect.of_size ~width ~height in
  let client_area = false in
  let desc =
    CL_DisplayWindowDescription.init ~title ~position ~client_area ()
  in
  (*
  CL_DisplayWindowDescription.set_fullscreen desc;
  *)
  let win = CL_DisplayWindow.of_desc ~desc () in
  print_endline "# Press space key";
  let gc = CL_DisplayWindow.get_gc win in
  let ic = CL_DisplayWindow.get_ic win in
  let keyboard = CL_InputContext.get_keyboard ic () in
  let bg_color1 = (rgb 0.0 0.0 0.0) in
  let bg_color2 = (rgb 0.1 0.4 0.8) in
  let color1 = (rgb 1.0 1.0 1.0) in
  let color2 = (rgb 1.0 0.4 0.2) in
  while not(CL_InputDevice.get_keycode keyboard CL_Key.Escape)
  do
    let bg_color, color =
      if not(CL_InputDevice.get_keycode keyboard CL_Key.Space)
      then bg_color1, color1
      else bg_color2, color2
    in
    CL_GraphicContext.clear gc bg_color;
    let t = CL_System.get_time () in
    let v = (float t) *. 0.001 in
    let center = (200.0, 200.0) in
    let radius = (abs_float (cos v)) *. 180.0 in
    CL_Draw.circle ~gc ~center ~radius ~color;
    CL_DisplayWindow.flip win;
    CL_KeepAlive.process ();
  done
