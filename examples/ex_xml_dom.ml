module CL_DomNodeEL = CL_DomNode.Exceptionless

let pad i =
  String.make (i*2) ' '

let print_attrs i node =
  List.iter (fun (name, v) ->
    Printf.printf "%s Attr -> %s::'%s'\n" (pad i) name v
  ) (CL_DomNode.get_attributes node)

let print_node i node =
  if CL_DomNode.is_element node then
  ( Printf.printf "%sNode -> '%s'\n" (pad i) (CL_DomNode.get_node_name node)
  ; print_attrs i node)
  else
  if CL_DomNode.is_text node then
    Printf.printf "%sText -> '%s'\n" (pad i) (CL_DomNode.get_node_value node)
  else
  if CL_DomNode.is_comment node then
    Printf.printf "%sComm -> '%s'\n" (pad i) (CL_DomNode.get_node_value node)
  else
    Printf.printf "%sSome\n" (pad i)

let rec print_tree i = function None -> ()
  | Some node ->
      print_node i node;
      print_tree (i+1) (CL_DomNodeEL.get_first_child node);
      print_tree i (CL_DomNodeEL.get_next_sibling node)

let print_xml node =
  print_tree 0 (Some node)

let () =
  let file = CL_File.init Sys.argv.(1) in
  let doc = CL_DomDocument.from_file file in
  let root = CL_DomDocument.get_document_element doc in
  print_xml root
