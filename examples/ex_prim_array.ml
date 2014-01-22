let cube_vertices = [|
    (* RGB colors *)  (* XYZ coords *)
    (0.0, 1.0, 0.0),  (-1.0,  1.0, -1.0);
    (0.0, 0.0, 0.0),  (-1.0, -1.0, -1.0);
    (1.0, 1.0, 0.0),  (-1.0,  1.0,  1.0);
    (1.0, 0.0, 0.0),  (-1.0, -1.0,  1.0);
    (1.0, 1.0, 1.0),  ( 1.0,  1.0,  1.0);
    (1.0, 0.0, 1.0),  ( 1.0, -1.0,  1.0);
    (0.0, 1.0, 1.0),  ( 1.0,  1.0, -1.0);
    (0.0, 0.0, 1.0),  ( 1.0, -1.0, -1.0);
  |]

let cube_indices = [|
    (* 6 squares, each square made of 2 triangles *)
    0;1;3;  3;2;0;
    4;5;7;  7;6;4;
    3;1;7;  7;5;3;
    0;2;4;  4;6;0;
    6;7;1;  1;0;6;
    2;3;5;  5;4;2;
  |]

let prim () =
  let prim_arr = CL_PrimitivesArray.init (* ~gc *) () in
  Array.iteri (fun index (_, pos) ->
    let v = CL_Vec3f.init pos in
    CL_PrimitivesArray.set_attribute prim_arr ~index ~v;
    CL_Vec3f.delete v;
  ) cube_vertices;
;;

let () =
  CL_SetupCore.init ();
  CL_SetupDisplay.init ();
  CL_SetupGL.init ();
  prim ();
  let win =
    let title = "Win Title" in
    let width, height = (640, 480) in
    CL_DisplayWindow.init ~title ~width ~height
  in
  CL_DisplayWindow.flip win;
  CL_System.sleep 2000;
;;
