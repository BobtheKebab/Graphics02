#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;

  c.red = 0;
  c.green = MAX_COLOR;
  c.blue = 0;

  clear_screen(s);

  draw_line(0, 0, 150, 150, s, c);
  draw_line(250, 0, 250, 150, s, c);
  draw_line(0, 500, 150, 350, s, c);
  draw_line(0, 250, 150, 250, s, c);
  draw_line(250, 500, 250, 350, s, c);
  draw_line(500, 500, 350, 350, s, c);
  draw_line(500, 250, 350, 250, s, c);
  draw_line(500, 0, 350, 150, s, c);
  draw_line(150, 150, 150, 350, s, c);
  draw_line(150, 150, 350, 150, s, c);
  draw_line(350, 350, 150, 350, s, c);
  draw_line(350, 350, 350, 150, s, c);

  display(s);
  save_extension(s, "lines.png");
}
