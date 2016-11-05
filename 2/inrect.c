#include <stdio.h>

int InRectangle( float pt[2], float rect[4] )
{
  float xmin,xmax,ymin,ymax;
  if(rect [0] > rect[2])
  {
    xmax= rect[0];
    xmin = rect[2];
  }
  else
  {
    xmax = rect [2];
    xmin = rect [0];
  }
  if(rect[1] > rect[3])
  {
    ymax = rect [1];
    ymin = rect [3];
  }
  else
  {
    ymax = rect [3];
    ymin = rect [1];
  }
  if(pt[0] >= xmin && pt[0] <= xmax)
  {
    if(pt[1] >= ymin && pt[1] <= ymax)
    {
      return 1;
    }
  }
  return 0;
}
