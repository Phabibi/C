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
  int left = y , top = x;
  int right = (y + rect_height);
  int bottom = (x + rect_width);

  // negative cases

  if(rect_height < 0 && rect_width < 0)   //both negative
  {
    x = x + rect_width ;
    y = y + rect_height;
    draw_rectangle(array, cols, rows, x,y, abs(rect_width),abs(rect_height), color );         // calls back to fucntion with postive cordinates
  }

  if(rect_height < 0 && rect_width > 0)   //only left sides negative
  {
    y = y + rect_height;
    draw_rectangle(array, cols, rows, x,y,rect_width,abs(rect_height), color );
  }

  if(rect_height > 0 && rect_width < 0)   //only right sides negative
  {
    x = x + rect_width;
    draw_rectangle(array, cols, rows, x,y,abs(rect_width),rect_height, color );
  }

  // positive case


  if(rect_height > 0 && rect_width > 0)     // both postive
  {
      for(left = y; left <= right ; left++)
      {
        array[left + top *cols] = color;

        for(top = x ; top < bottom ; top++)
        {
          if(left == y || left == right)    // empty region (middle)
          {
            array[left + top *cols] = color;
          }

        }
        array[left + top *cols] = color;
        top = x;                          // resets top to its original pos
      }
  }
}
