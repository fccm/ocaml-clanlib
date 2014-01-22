let pad i = String.make (i*2) ' '
let variant i = function
  | CL_XMLToken.Begin -> (i + 1)
  | CL_XMLToken.Single -> (i)
  | CL_XMLToken.End -> (i - 1)

let () =
  let file = CL_File.init Sys.argv.(1) in
  let tokenizer = CL_XMLTokenizer.from_file ~file in
  let rec loop i =
    match CL_XMLTokenizer.Exceptionless.next tokenizer with
    | None -> ()
    | Some token ->
      match CL_XMLToken.get_type token,
            CL_XMLToken.get_variant token with
      | CL_XMLToken.Element, CL_XMLToken.End ->
          Printf.printf "%s EndElem: '%s'\n%!" (pad (i-1))
            (CL_XMLToken.get_name token);
          loop (i-1)

      | CL_XMLToken.Element, var ->
          Printf.printf "%s Element: '%s'\n%!" (pad i)
            (CL_XMLToken.get_name token);
          Array.iter (fun (attr, v) ->
            Printf.printf "%s  Attr: '%s' -- '%s'\n%!" (pad i) attr v
          ) (CL_XMLToken.get_attributes token);
          loop (variant i var)

      | CL_XMLToken.Text, _ ->
          Printf.printf "%s Text: '%s'\n%!" (pad i)
            (CL_XMLToken.get_value token);
          loop i

      | CL_XMLToken.Comment, _ ->
          Printf.printf "%s Comment: '%s'\n%!" (pad i)
            (CL_XMLToken.get_value token);
          loop i

      | _ -> loop i
  in
  loop 0
