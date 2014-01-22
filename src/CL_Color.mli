(** *)
(** API documentation for the
{{:http://clanlib.org/docs/clanlib-2.3/reference_doxygen/classCL__Color.html}
  class CL_Color} *)

type uint = int
type t = {
  r : uint;
  g : uint;
  b : uint;
  a : uint;
}

val init : r:uint -> g:uint -> b:uint -> ?a:uint -> unit -> t

val rgb : uint * uint * uint -> t
val rgba : uint * uint * uint * uint -> t

(** {4 Predefined Colors} *)

val aliceblue : t
val antiquewhite : t
val aqua : t
val aquamarine : t
val azure : t
val beige : t
val bisque : t
val black : t
val blanchedalmond : t
val blue : t
val blueviolet : t
val brown : t
val burlywood : t
val cadetblue : t
val chartreuse : t
val chocolate : t
val coral : t
val cornflowerblue : t
val cornsilk : t
val crimson : t
val cyan : t
val darkblue : t
val darkcyan : t
val darkgoldenrod : t
val darkgray : t
val darkgreen : t
val darkgrey : t
val darkkhaki : t
val darkmagenta : t
val darkolivegreen : t
val darkorange : t
val darkorchid : t
val darkred : t
val darksalmon : t
val darkseagreen : t
val darkslateblue : t
val darkslategray : t
val darkslategrey : t
val darkturquoise : t
val darkviolet : t
val deeppink : t
val deepskyblue : t
val dimgray : t
val dimgrey : t
val dodgerblue : t
val firebrick : t
val floralwhite : t
val forestgreen : t
val fuchsia : t
val gainsboro : t
val ghostwhite : t
val gold : t
val goldenrod : t
val gray : t
val grey : t
val green : t
val greenyellow : t
val honeydew : t
val hotpink : t
val indianred : t
val indigo : t
val ivory : t
val khaki : t
val lavender : t
val lavenderblush : t
val lawngreen : t
val lemonchiffon : t
val lightblue : t
val lightcoral : t
val lightcyan : t
val lightgoldenrodyellow : t
val lightgray : t
val lightgreen : t
val lightgrey : t
val lightpink : t
val lightsalmon : t
val lightseagreen : t
val lightskyblue : t
val lightslategray : t
val lightslategrey : t
val lightsteelblue : t
val lightyellow : t
val lime : t
val limegreen : t
val linen : t
val magenta : t
val maroon : t
val mediumaquamarine : t
val mediumblue : t
val mediumorchid : t
val mediumpurple : t
val mediumseagreen : t
val mediumslateblue : t
val mediumspringgreen : t
val mediumturquoise : t
val mediumvioletred : t
val midnightblue : t
val mintcream : t
val mistyrose : t
val moccasin : t
val navajowhite : t
val navy : t
val oldlace : t
val olive : t
val olivedrab : t
val orange : t
val orangered : t
val orchid : t
val palegoldenrod : t
val palegreen : t
val paleturquoise : t
val palevioletred : t
val papayawhip : t
val peachpuff : t
val peru : t
val pink : t
val plum : t
val powderblue : t
val purple : t
val red : t
val rosybrown : t
val royalblue : t
val saddlebrown : t
val salmon : t
val sandybrown : t
val seagreen : t
val seashell : t
val sienna : t
val silver : t
val skyblue : t
val slateblue : t
val slategray : t
val slategrey : t
val snow : t
val springgreen : t
val steelblue : t
val tan : t
val teal : t
val thistle : t
val tomato : t
val transparent : t
val turquoise : t
val violet : t
val wheat : t
val white : t
val whitesmoke : t
val yellow : t
val yellowgreen : t
val gray10 : t
val gray20 : t
val gray30 : t
val gray40 : t
val gray50 : t
val gray60 : t
val gray70 : t
val gray80 : t
val gray90 : t
