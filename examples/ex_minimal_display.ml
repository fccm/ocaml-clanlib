let () =
  CL_SetupCore.init ();
  CL_SetupDisplay.init ();
  CL_SetupGL.init ();
  let win =
    let title = "Win Title" in
    let width, height = (640, 480) in
    CL_DisplayWindow.init ~title ~width ~height
  in
  CL_DisplayWindow.flip win;
  CL_System.sleep 2000;
;;
