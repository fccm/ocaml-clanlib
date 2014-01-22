let width, height = (640, 480)
let f_width, f_height = (float width, float height)

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

let string_of_inDevKind = function
  | CL_InputDevice.Keyboard -> "Keyboard"
  | CL_InputDevice.Pointer  -> "Pointer"
  | CL_InputDevice.Joystick -> "Joystick"
  | CL_InputDevice.Tablet   -> "Tablet"
  | CL_InputDevice.Unknown  -> "Unknown"

let string_of_mouse = function
  | CL_Mouse.Left       -> "Left"
  | CL_Mouse.Right      -> "Right"
  | CL_Mouse.Middle     -> "Middle"
  | CL_Mouse.Wheel_up   -> "Wheel_up"
  | CL_Mouse.Wheel_down -> "Wheel_down"
  | CL_Mouse.XButton1   -> "XButton1"
  | CL_Mouse.XButton2   -> "XButton2"

let string_of_key = function
  | CL_Key.BackSpace  -> "BackSpace"
  | CL_Key.Tab        -> "Tab"
  | CL_Key.Clear      -> "Clear"
  | CL_Key.Return     -> "Return"
  | CL_Key.Control    -> "Control"
  | CL_Key.Pause      -> "Pause"
  | CL_Key.Escape     -> "Escape"
  | CL_Key.Space      -> "Space"
  | CL_Key.Prior      -> "Prior"
  | CL_Key.Next       -> "Next"
  | CL_Key.End        -> "End"
  | CL_Key.Home       -> "Home"
  | CL_Key.Left       -> "Left"
  | CL_Key.Up         -> "Up"
  | CL_Key.Right      -> "Right"
  | CL_Key.Down       -> "Down"
  | CL_Key.Select     -> "Select"
  | CL_Key.Print      -> "Print"
  | CL_Key.Execute    -> "Execute"
  | CL_Key.Insert     -> "Insert"
  | CL_Key.Delete     -> "Delete"
  | CL_Key.Help       -> "Help"
  | CL_Key.Num0       -> "Num0"
  | CL_Key.Num1       -> "Num1"
  | CL_Key.Num2       -> "Num2"
  | CL_Key.Num3       -> "Num3"
  | CL_Key.Num4       -> "Num4"
  | CL_Key.Num5       -> "Num5"
  | CL_Key.Num6       -> "Num6"
  | CL_Key.Num7       -> "Num7"
  | CL_Key.Num8       -> "Num8"
  | CL_Key.Num9       -> "Num9"
  | CL_Key.A          -> "A"
  | CL_Key.B          -> "B"
  | CL_Key.C          -> "C"
  | CL_Key.D          -> "D"
  | CL_Key.E          -> "E"
  | CL_Key.F          -> "F"
  | CL_Key.G          -> "G"
  | CL_Key.H          -> "H"
  | CL_Key.I          -> "I"
  | CL_Key.J          -> "J"
  | CL_Key.K          -> "K"
  | CL_Key.L          -> "L"
  | CL_Key.M          -> "M"
  | CL_Key.N          -> "N"
  | CL_Key.O          -> "O"
  | CL_Key.P          -> "P"
  | CL_Key.Q          -> "Q"
  | CL_Key.R          -> "R"
  | CL_Key.S          -> "S"
  | CL_Key.T          -> "T"
  | CL_Key.U          -> "U"
  | CL_Key.V          -> "V"
  | CL_Key.W          -> "W"
  | CL_Key.X          -> "X"
  | CL_Key.Y          -> "Y"
  | CL_Key.Z          -> "Z"
  | CL_Key.LWin       -> "LWin"
  | CL_Key.RWin       -> "RWin"
  | CL_Key.Apps       -> "Apps"
  | CL_Key.Numpad0    -> "Numpad0"
  | CL_Key.Numpad1    -> "Numpad1"
  | CL_Key.Numpad2    -> "Numpad2"
  | CL_Key.Numpad3    -> "Numpad3"
  | CL_Key.Numpad4    -> "Numpad4"
  | CL_Key.Numpad5    -> "Numpad5"
  | CL_Key.Numpad6    -> "Numpad6"
  | CL_Key.Numpad7    -> "Numpad7"
  | CL_Key.Numpad8    -> "Numpad8"
  | CL_Key.Numpad9    -> "Numpad9"
  | CL_Key.Multiply   -> "Multiply"
  | CL_Key.Add        -> "Add"
  | CL_Key.Separator  -> "Separator"
  | CL_Key.Subtract   -> "Subtract"
  | CL_Key.Decimal    -> "Decimal"
  | CL_Key.Divide     -> "Divide"
  | CL_Key.F1         -> "F1"
  | CL_Key.F2         -> "F2"
  | CL_Key.F3         -> "F3"
  | CL_Key.F4         -> "F4"
  | CL_Key.F5         -> "F5"
  | CL_Key.F6         -> "F6"
  | CL_Key.F7         -> "F7"
  | CL_Key.F8         -> "F8"
  | CL_Key.F9         -> "F9"
  | CL_Key.F10        -> "F10"
  | CL_Key.F11        -> "F11"
  | CL_Key.F12        -> "F12"
  | CL_Key.F13        -> "F13"
  | CL_Key.F14        -> "F14"
  | CL_Key.F15        -> "F15"
  | CL_Key.F16        -> "F16"
  | CL_Key.F17        -> "F17"
  | CL_Key.F18        -> "F18"
  | CL_Key.F19        -> "F19"
  | CL_Key.F20        -> "F20"
  | CL_Key.F21        -> "F21"
  | CL_Key.F22        -> "F22"
  | CL_Key.F23        -> "F23"
  | CL_Key.F24        -> "F24"
  | CL_Key.Numlock    -> "Numlock"
  | CL_Key.Scroll     -> "Scroll"
  | CL_Key.LShift     -> "LShift"
  | CL_Key.RShift     -> "RShift"
  | CL_Key.LControl   -> "LControl"
  | CL_Key.RControl   -> "RControl"
  | CL_Key.LMenu      -> "LMenu"
  | CL_Key.RMenu      -> "RMenu"

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
  let mouse = CL_InputContext.get_mouse ~ic ~mouse:0 () in
  let jn = CL_InputContext.get_joystick_count ~ic in
  let joysticks =
    Array.init jn begin function i ->
      let j = CL_InputContext.get_joystick ~ic ~joystick:i () in

      (j)
    end
  in

  CL_InputEventQueue.connect_sig_key_down keyboard 0;
  CL_InputEventQueue.connect_sig_key_up keyboard 0;

  CL_InputEventQueue.connect_sig_key_down mouse 0;
  CL_InputEventQueue.connect_sig_key_up mouse 0;
  CL_InputEventQueue.connect_sig_pointer_move mouse 0;

  Array.iteri (fun i joystick ->
    CL_InputEventQueue.connect_sig_key_down joystick i;
    CL_InputEventQueue.connect_sig_key_up joystick i;
    CL_InputEventQueue.connect_sig_axis_move joystick i;
  ) joysticks;

  let bm = CL_BlendMode.init () in
  CL_BlendMode.enable_blending bm true;
  CL_GraphicContext.clear gc (rgba 1.0 1.0 0.0  1.0);
  let bg_color = rgb 1.0 0.3 0.0 in
  (*
  let color = rgb 1.0 0.8 0.2 in
  *)
  let t0 = CL_System.get_time () in
  let n = ref 0 in
  while not(CL_InputDevice.get_keycode keyboard CL_Key.Escape)
  do
    CL_GraphicContext.clear gc bg_color;
    let in_ev_lst = CL_InputEventQueue.get_input_events () in
    List.iter (fun (in_ev, dev_num, dev_kind) ->
      let str = CL_InputEvent.str in_ev in
      let id = CL_InputEvent.id in_ev in
      if str = "k" then
        CL_InputEventQueue.disconnect_sig_key_up keyboard;
      let x, y = CL_InputEvent.mouse_pos in_ev in
      let axis = CL_InputEvent.axis_pos in_ev in
      let sb =
        match dev_kind, CL_InputEvent.get_type in_ev with
        | CL_InputDevice.Pointer, CL_InputEvent.Pressed
        | CL_InputDevice.Pointer, CL_InputEvent.Released ->
            string_of_mouse (CL_InputEvent.get_mouse in_ev)

        | CL_InputDevice.Keyboard, CL_InputEvent.Pressed
        | CL_InputDevice.Keyboard, CL_InputEvent.Released ->
          ( try string_of_key (CL_InputEvent.get_key in_ev)
            with _ -> "" )

        | _, CL_InputEvent.Pressed
        | _, CL_InputEvent.Released
        | _, CL_InputEvent.Doubleclick
        | _, CL_InputEvent.Pointer_moved
        | _, CL_InputEvent.Axis_moved
     (* | _, CL_InputEvent.Ball_moved *)
        | _, CL_InputEvent.Proximity_change
        | _, CL_InputEvent.No_key -> ""
      in
      let k = string_of_inDevKind dev_kind in
      Printf.printf " Ev-str: id:%d '%s' (%d, %d) (ax:%g) {%s} <%s>\n%!"
        id str x y axis k sb;
      (*
      if k = "Pointer" then
        CL_Draw.circle ~gc ~center:(float x, float y) ~radius:20.0 ~color;
      *)
      CL_InputEvent.delete in_ev
    ) in_ev_lst;
    (*
    CL_Draw.circle ~gc ~center ~radius ~color;
    *)
    CL_DisplayWindow.flip win;
    CL_KeepAlive.process ();
    incr n;
    (*
    CL_System.sleep 400;
    *)
  done;
  let t1 = CL_System.get_time () in
  let dt = float (t1 - t0) /. 1000. in
  let n = float !n in
  let fps = n /. dt in
  Printf.printf "fps: %g\n" fps;
;;
