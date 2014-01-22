let width, height = (640, 480)
let f_width, f_height =
  (float width, float height)

let rgba r g b a = CL_Colorf.init ~r ~g ~b ~a ()
let rgb r g b = CL_Colorf.init ~r ~g ~b ()

let rand_rgb () =
  let r, g, b =
    (Random.float 1.0,
     Random.float 1.0,
     Random.float 1.0)
  in
  rgb r g b

let rand_rgba () =
  let r, g, b, a =
    (Random.float 1.0,
     Random.float 1.0,
     Random.float 1.0,
     Random.float 1.0)
  in
  rgba r g b a

let rand_pos () =
  (Random.float f_width,
   Random.float f_height)

let rand_range a b =
  a +. (Random.float (b -. a))

let draw_rand_circle gc =
  let center = rand_pos () in
  let color = rand_rgba () in
  let radius = rand_range 4.0 60.0 in
  CL_Draw.circle ~gc ~center ~radius ~color

let repeat n f v =
  for i = 1 to n do f v done

let () =
  Random.self_init ();
  CL_SetupCore.init ();
  CL_SetupDisplay.init ();
  CL_SetupGL.init ();
  let title = "Win Title" in
  let win = CL_DisplayWindow.init ~title ~width ~height in
  let gc = CL_DisplayWindow.get_gc win in
  let ic = CL_DisplayWindow.get_ic win in
  let keyboard = CL_InputContext.get_keyboard ic () in
  let bm = CL_BlendMode.init () in
  CL_BlendMode.enable_blending bm true;
  CL_GraphicContext.clear gc (rgba 1.0 1.0 0.0  1.0);
  let bg_color = rgb 0.4 0.4 0.4 in
  let t0 = CL_System.get_time () in
  let n = ref 0 in
  while not(CL_InputDevice.get_keycode keyboard CL_Key.Escape)
  do
    CL_GraphicContext.clear gc bg_color;
    repeat 64 draw_rand_circle gc;
    CL_DisplayWindow.flip win;
    CL_KeepAlive.process ();
    incr n;
  done;
  let t1 = CL_System.get_time () in
  let dt = float (t1 - t0) /. 1000. in
  let n = float !n in
  let fps = n /. dt in
  Printf.printf "fps: %g\n" fps;
;;
