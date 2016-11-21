#include <stdio.h>
#include <math.h>
#include <stdint.h>

//







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
  if(rect_width == 0 || rect_height == 0)
  {
    return;
  }

  if (rect_height < 0 && rect_width < 0)
  {
    x++;
    x = x + rect_width;
    y++;
    y = y + rect_height;
    draw_rectangle(array, cols, rows, x,y, abs(rect_width),abs(rect_height), color );
    return;
  }

  else if (rect_width < 0 || rect_height > 0)
  {
    x++;
    x = x + rect_width;
    draw_rectangle(array, cols, rows, x,y, abs(rect_width),abs(rect_height), color );
    return;
  }

  else if (rect_height < 0 && rect_width > 0)
  {
    y++;
    y = y + rect_height;
    draw_rectangle(array, cols, rows, x,y, abs(rect_width),abs(rect_height), color );
    return;
  }

  // positive case

  int i = y , j = x;

  if(rect_height > 0 && rect_width > 0)     // both postive
  {
      for(i = y; i < (y + rect_height) ; i++)
      {
        //printf("Drawing row %d \n", i);

        if (j < cols)
        {
          if( i < rows)
          {
            array[j + i*cols] = color;
          }
        }

        for(j = x ; j < x + rect_width - 1  ; j++)             //draws rows (each row must have 0 or len-1)
        {
          //printf("Drawing column %d \n", j);
          if(i == y || i == (y + rect_height)-1 )    // empty region (middle)
          {
            if( j < cols)
            {
              if(i < rows)

              {
                array[j + i *cols] = color;
              }
            }
          }
        }
        if(j < cols)
        {
          if(i < rows){
           array[j + i *cols] = color;
          }
        }

        j = x;
    }

  }

}
