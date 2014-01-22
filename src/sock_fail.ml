let () =
  let address = "www.google.com" in
  let port = "80" in
  let google_server = CL_SocketName.init ~address ~port () in
  let connection = CL_TCPConnection.init google_server () in
  let http_request =
    "GET / HTTP/1.1\r\n\
     Host: www.google.com\r\n\
     Connection: close\r\n\
     \r\n"
  in
  let _ = CL_TCPConnection.send connection http_request () in
 
  let continue = ref true in
  while !continue
  do
    (*
    bool got_event = connection.get_read_event().wait(15000);
    if (!got_event)
            throw CL_Exception("timed out");
    *)
    let buffer = String.create (16*1024) in
    let received = CL_TCPConnection.receive connection
      ~data:buffer ~receive_all:false () in
    if received = 0 then continue := false;
    buffer.[received] <- '\000';
    CL_Console.write_line buffer;
  done;
 
  CL_TCPConnection.disconnect_graceful connection;
  CL_TCPConnection.delete connection;
  CL_SocketName.delete google_server;
;;
