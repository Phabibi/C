#include <stdint.h>
void life( uint8_t array[],
      unsigned int cols,
      unsigned int rows )
  {
    int i = 0,x = 0 ,y = 0,counter = 0;
    int xmax = 0;
    int xmin = 0;
    int ymax = 0;
    int ymin = 0;

    for (y = 0 ; y < rows ; y++)
    {
      for (x = 0; x < cols ; x++)
      {
        if(array[x + y *cols] == 0){

          xmax = x+1;                               // boundaries
          xmin = x-1;
          ymax = y+1;
          ymin = y-1;

          if (x == cols-1)                          // checks if x is going out from top
          {
            xmax =  0;                             // if true it sets it to bottom position
          }
          if(x == 0)                              // checks if x is going out from bottom

          {
            xmin = cols-1;                       // if true it sets it to top position
          }

          if(y == rows-1)                       // we do the same thing for y cordinates (left and right)
          {
            ymax = 0;
          }
          if(y == 0)
          {
            ymin = rows -1;
          }

          if (array[xmax + ymax * cols] > 1)
          {
            counter ++;
          }
          if (array[xmax + ymin * cols] > 1)
          {
            counter ++;
          }
          if (array[xmax + y * cols] > 1)
          {
            counter ++;
          }
          if (array[xmin + ymax * cols] > 1)
          {
            counter ++;
          }
          if (array[xmin + ymin * cols] > 1)
          {
            counter ++;
          }
          if (array[xmin + y * cols] > 1)
          {
            counter ++;
          }
          if (array[x + ymax * cols] > 1)
          {
            counter ++;
          }
          if (array [x + ymin * cols] > 1)
          {
            counter ++;
          }

          if (counter == 3)
          {
            array[x+y*cols] = 1;
          }
          else
          {
            array[x+y*cols] = 0;
          }
          counter = 0;
        }
        else if (array [x + y *cols] != 0)
        {
          xmax = x+1;                               // boundaries
          xmin = x-1;
          ymax = y+1;
          ymin = y-1;

          if (x == cols-1)                          // checks if x is going out from top
          {
            xmax =  0;                             // if true it sets it to bottom position
          }
          if(x == 0)                              // checks if x is going out from bottom

          {
            xmin = cols-1;                       // if true it sets it to top position
          }

          if(y == rows-1)                       // we do the same thing for y cordinates (left and right)
          {
            ymax = 0;
          }
          if(y == 0)
          {
            ymin = rows -1;
          }

          if (array[xmax + ymax * cols] > 1)
          {
            counter ++;
          }
          if (array[xmax + ymin * cols] > 1)
          {
            counter ++;
          }
          if (array[xmax + y * cols] > 1)
          {
            counter ++;
          }
          if (array[xmin + ymax * cols] > 1)
          {
            counter ++;
          }
          if (array[xmin + ymin * cols] > 1)
          {
            counter ++;
          }
          if (array[xmin + y * cols]> 1)
          {
            counter ++;
          }
          if (array[x + ymax * cols] > 1)
          {
            counter ++;
          }
          if (array [x + ymin * cols] > 1)
          {
            counter ++;
          }

          if ( counter > 3 || counter < 2)
          {
            array[x+y*cols] = 3;
          }
          else
          {
            array[x+y*cols] = 255;
          }
          counter = 0;
        }
      }
    }
    for (i = 0; i < cols*rows ; i++)                                  // almost deads becomes 0 , and almost alive becomes 255
    {
      if (array[i] == 1)
      {
        array[i] = 255;
      }
      if (array[i] == 3)
      {
        array[i] = 0;
      }
    }
  }
