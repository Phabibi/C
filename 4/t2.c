#include <stdio.h>
#include <math.h>
#include <stdint.h>

void draw_rectangle( uint8_t array[],
              unsigned int cols,
              unsigned int rows,
              int x,
              int y,
              int rect_width,
              int rect_height,
              uint8_t color )
{


  // negative cases
  if (rect_width < 0)
  {
    x = x + rect_width + 1 ;
  }

  if (rect_height < 0)
  {
    y = y + rect_height + 1;
  }

  if (rect_width < 0 || rect_height < 0)
  {
    //printf("x = %d , y=%d",x,y);
    draw_rectangle(array, cols, rows, x,y, abs(rect_width),abs(rect_height), color );
  }

  // positive case

  int i = y , j = x;

  if(rect_height > 0 && rect_width > 0)     // both postive
  {
      for(i = y; i <= (y + rect_height) ; i++)
      {
        //printf("Drawing row %d \n", i);

        if (i >= 0  && j >= 0)
        {
        array[x + i*cols] = color;
        }

        for(j = x ; j < x + rect_width - 1  ; j++)             //draws rows (each row must have 0 or len-1)
        {
          //printf("Drawing column %d \n", j);
          if(i == y || i == (y + rect_height) )    // empty region (middle)
          {
            if( i >= 0 && j >= 0)
            {
              array[j + i *cols] = color;
            }
          }
        }
        if( i >= 0 && j >= 0)
        {
          array[j + i *cols] = color;
        }

        j = x;
    }

  }

}
