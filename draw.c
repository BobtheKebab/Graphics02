#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {

  int x = x0, y = y0, A = y1 - y0, B = x1 - x0, d = 2 * A - B;

  if (x0 > x1) {
    draw_line(x1, y1, x0, y0, s, c);
  }
  
  //Oct 1
  if (A >= 0 && B >= A) {
    while (x <= x1) {
      plot(s, c, x, y);
      if (d > 0) {
	y++;
	d += 2 * B;
      }
      x++;
      d += 2 * A;
    }
  }

  //Oct 2
  if (A >= 0 && A >= B) {
    while (y <= y1) {
      plot(s, c, x, y);
      if (d < 0) {
	x++;
	d += 2 * A;
      }
      y++;
      d += 2 * B;
    }
  }

  //Oct 7
  if (A < 0 && A >= (-1 *B)) {
    while (x <= x1) {
      plot(s, c, x, y);
      if (d > 0) {
	y--;
	d += 2 * B;
      }
      x++;
      d -= 2 * A;
    }
  }

  //Oct 8
  if (A < 0 && (-1 * B) >= A) {
    while (y >= y1) {
      plot(s, c, x, y);
      if (d < 0) {
	x++;
	d -= 2 * A;
      }
      y--;
      d += 2 * B;
    }
  }
  
}
