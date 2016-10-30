#include <stdio.h>
#include <math.h>

void draw_circle( uint8_t img[],
    unsigned int cols,
    unsigned int rows,
    int x,
    int y,
    int r,
    uint8_t color );
  {
    int a = 0 , b = 0;
    float x_d = 0 , y_d = 0;

    for (b ; b < rows; b++)
    {
      for(a; a < cols ; a++)
      {
        x_d = abs(a-x);
        y_d = abs(b-y);

        float Py_theorm = round (sqrt ((x_d*x_d) + (y_d *y_d)));

        if ( Py_theorm < r )
        {
          img [a + b *cols] = color;
        }
      }
    }
  }
