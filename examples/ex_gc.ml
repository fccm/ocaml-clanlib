let width, height = (640, 480)
let f_width, f_height = (float width, float height)

let rgb ~r ~g ~b =
  CL_Colorf.init ~r ~g ~b ()

let rgba ~r ~g ~b ~a =
  CL_Colorf.init ~r ~g ~b ~a ()

let rand_rgb () =
  let r, g, b =
    (Random.float 1.0,
     Random.float 1.0,
     Random.float 1.0)
  in
  CL_Colorf.init ~r ~g ~b ()

let rand_rgba () =
  let r, g, b, a =
    (Random.float 1.0,
     Random.float 1.0,
     Random.float 1.0,
     Random.float 1.0)
  in
  CL_Colorf.init ~r ~g ~b ~a ()

let rand_pos () =
  (Random.float f_width,
   Random.float f_height)

let rand_range a b =
  a +. (Random.float (b -. a))

let draw_rand_point gc =
  let pos = rand_pos () in
  let color = rand_rgb () in
  CL_Draw.point ~gc ~pos ~color

let draw_rand_box gc =
  let pos1 = rand_pos () in
  let pos2 = rand_pos () in
  let color = rand_rgb () in
  CL_Draw.box ~gc ~pos1 ~pos2 ~color

let draw_rand_fill gc =
  let pos1 = rand_pos () in
  let pos2 = rand_pos () in
  let color = rand_rgba () in
  CL_Draw.fill ~gc ~pos1 ~pos2 ~color

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
  let rgba r g b a = CL_Colorf.init ~r ~g ~b ~a () in
  let gc = CL_DisplayWindow.get_gc win in
  let ic = CL_DisplayWindow.get_ic win in
  let keyboard = CL_InputContext.get_keyboard ic () in
  let desc = CL_FontDescription.init () in
  CL_FontDescription.set_typeface_name desc "Tahoma";
  CL_FontDescription.set_weight desc 320;
  CL_FontDescription.set_height desc 18;
  (*
  let font = CL_Font.of_desc ~gc ~desc in
  *)
  let bm = CL_BlendMode.init () in
  CL_BlendMode.enable_blending bm true;
  let file = CL_File.init ~filename:"./tex2.png" in
  let texture = CL_Texture.of_file ~gc ~file ~image_type:"png" in
  CL_File.delete file;
  let size = 512.0 in
  let quad = { CL_Quadf.
    p = (  0.0,  0.0);
    q = (  0.0, size);
    r = (size, size);
    s = (size,  0.0);
  } in
  CL_GraphicContext.clear gc (rgba 1.0 1.0 0.0  1.0);
  let t0 = CL_System.get_time () in
  let i = ref 0 in
  while not(CL_InputDevice.get_keycode keyboard CL_Key.Escape)
  do
    (*
    CL_Draw.fill ~gc ~pos1:(0.0, 0.0) ~pos2:(f_width, f_height)
      ~color:(rgba 1.0 1.0 0.0  0.2);
    *)
    (*
    let width = CL_GraphicContext.get_width gc in
    let height = CL_GraphicContext.get_height gc in
    *)

    (*
    CL_Draw.gradient_fill gc
      (0.0, 0.0) (f_width, f_height)
    (*
      (CL_Rect.init 0 (height/2) width height)
    *)
      (CL_Gradient.init
        (rgb 0.8 0.6 0.2)
        (rgb 0.2 0.2 0.8));
    *)

    (*
    repeat 60 draw_rand_point gc;
    repeat 4 draw_rand_fill gc;
    repeat 6 draw_rand_box gc;
    repeat 6 draw_rand_circle gc;
    CL_Font.draw_text font ~gc
      ~pos:(40.0, 40.0)
      ~text:"Hello ClanLib"
      ~color:(rgba 0.0 0.2 0.3  0.6) ();
    *)
    CL_Draw.texture ~gc ~texture ~quad;
    CL_DisplayWindow.flip win;
    CL_KeepAlive.process ();
    incr i;
    (*
    CL_System.sleep 100;
    *)
  done;
  let te = CL_System.get_time () in
  let dt = float (te - t0) /. 1000. in
  let n = float !i in
  let fps = n /. dt in
  Printf.printf "fps: %g\n" fps;
;;
