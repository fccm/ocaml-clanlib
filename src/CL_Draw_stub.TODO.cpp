
void line(CL_GraphicContext &gc, float x1, float y1, float x2, float y2, const CL_Colorf &color);
void line(CL_GraphicContext &gc, const CL_Pointf &start, const CL_Pointf &end, const CL_Colorf &color);
void line(CL_GraphicContext &gc, const CL_LineSegment2f &line_segment, const CL_Colorf &color);

void box(CL_GraphicContext &gc, const CL_Pointf &start, const CL_Pointf &end, const CL_Colorf &color);
void box(CL_GraphicContext &gc, const CL_Rectf &rect, const CL_Colorf &color);

void fill(CL_GraphicContext &gc, const CL_Pointf &start, const CL_Pointf &end, const CL_Colorf &color);
void fill(CL_GraphicContext &gc, const CL_Rectf &rect, const CL_Colorf &color);

void texture(
  CL_GraphicContext &gc,
  const CL_Rectf &rect,
  const CL_Colorf &color = CL_Colorf::white,
  const CL_Rectf &texture_unit1_coords = CL_Rectf(0.0, 0.0, 1.0, 1.0));

void texture(
  CL_GraphicContext &gc,
  const CL_Texture &texture,
  const CL_Quadf &quad,
  const CL_Colorf &color = CL_Colorf::white,
  const CL_Rectf &texture_unit1_coords = CL_Rectf(0.0, 0.0, 1.0, 1.0));

void gradient_fill(CL_GraphicContext &gc, float x1, float y1, float x2, float y2, const CL_Gradient &color);
void gradient_fill(CL_GraphicContext &gc, const CL_Pointf &start, const CL_Pointf &end, const CL_Gradient &gradient);
void gradient_fill(CL_GraphicContext &gc, const CL_Rectf &rect, const CL_Gradient &gradient);

void circle(CL_GraphicContext &gc, const CL_Pointf &center, float radius, const CL_Colorf &color);

void gradient_circle(CL_GraphicContext &gc, const CL_Pointf &center, float radius, const CL_Gradient &gradient);
void gradient_circle(CL_GraphicContext &gc, const CL_Pointf &center, const CL_Pointf &centergradient, float radius, const CL_Gradient &gradient);

void triangle(CL_GraphicContext &gc, const CL_Pointf &a, const CL_Pointf &b, const CL_Pointf &c, const CL_Colorf &color);
void triangle(CL_GraphicContext &gc, const CL_Trianglef &dest_triangle, const CL_Colorf &color);

