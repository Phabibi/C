#include <stdio.h>
#include <math.h>
#include <stdint.h>

void draw_circle ( uint8_t img[],
    unsigned int cols,
    unsigned int rows,
    int x,
    int y,
    int r,
    uint8_t color )
  {
    int a = 0 , b = 0;

    for (b = 0 ; b < rows; b++)
    {
      for(a = 0; a < cols ; a++)
      {
         float x_d_1 = a-(x - 0.5);
         float y_d_1 = b-(y + 0.5);
         float x_d_2 = a-(x + 0.5);
         float y_d_2 = b-(y + 0.5);
         float x_d_3 = a-(x - 0.5);
         float y_d_3 = b-(y - 0.5);
         float x_d_4 = a-(x + 0.5);
         float y_d_4 = b-(y - 0.5);

        float Py_theorm1 = (sqrt ((x_d_1*x_d_1) + (y_d_1 *y_d_1)));
        float Py_theorm2 = (sqrt ((x_d_2*x_d_2) + (y_d_2 *y_d_2)));
        float Py_theorm3 = (sqrt ((x_d_3*x_d_3) + (y_d_3 *y_d_3)));
        float Py_theorm4 = (sqrt ((x_d_4*x_d_4) + (y_d_4 *y_d_4)));


        if ( (Py_theorm1  < r ) || (Py_theorm2  < r ) || (Py_theorm3  < r ) || (Py_theorm4  < r ))
        {
          img [a + b *cols] = color;
        }
      }
    }
  }
