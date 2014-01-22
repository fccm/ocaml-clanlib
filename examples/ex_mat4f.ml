let m = { CL_Mat4f.
  m_0  =  1.0;
  m_1  =  2.0;
  m_2  =  3.0;
  m_3  =  4.0;
  m_4  =  5.0;
  m_5  =  6.0;
  m_6  =  7.0;
  m_7  =  8.0;
  m_8  =  9.0;
  m_9  = 10.0;
  m_10 = 11.0;
  m_11 = 12.0;
  m_12 = 13.0;
  m_13 = 14.0;
  m_14 = 15.0;
  m_15 = 16.0;
}

let arr = [|
   0.1;
   0.2;
   0.3;
   0.4;
   0.5;
   0.6;
   0.7;
   0.8;
   0.9;
  0.10;
  0.11;
  0.12;
  0.13;
  0.14;
  0.15;
  0.16;
|]

let () =
  let mat = CL_Mat4f.init m in
  let idt = CL_Mat4f.identity () in
  let mar = CL_Mat4f.of_array arr in
  CL_Mat4f.print mat;
  CL_Mat4f.print idt;
  CL_Mat4f.print mar;
;;
