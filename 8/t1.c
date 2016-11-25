#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <time.h>
#include <stdint.h>

#include "point_array.h"

/* ALL THESE FUNCTIONS REQUIRE A VALID POINT_ARRAY_T POINTER AS THEIR
   FIRST PARAMETER. THEY SHOULD FAIL ON ASSERTION IF THIS POINTER IS
   NULL */

/* TASK 1 */

// Safely initalize an empty array structure.


void point_array_init( point_array_t* pa )
{
  if(pa == NULL)
  {
    return;
  }
  pa->len = 0;

  pa->points = malloc(sizeof(point_t));

  pa->reserved = 0;

}


/* TASK 2 */

// Resets the array to be empty, freeing any memory allocated if
// necessary.

void point_array_reset( point_array_t* pa )
{
  if(pa == NULL)
  {
    return;
  }

  free(pa->points);
  free(pa);
  pa->len = 0;
}



/* TASK 3 */

// Append a point to the end of an array. If successful, return 0,
// else return 1;
int point_array_append( point_array_t* pa, point_t* p )
{
  if(pa == NULL)
  {
    return 1;
  }

  pa->points = realloc(pa->points,sizeof(point_t)*(pa->len+1));
  pa->points[pa->len] = *p;
  pa->len++;

  if(pa->points == NULL)
  {
    return 1;
  }

  return 0;

}

/* TASK 4 */

// Remove the point at index i from the array, reducing the size of
// the array by one. The order of points in the array may change.
int point_array_remove( point_array_t* pa, unsigned int i )
{
  if(pa == NULL)
  {
    return 1;
  }

  if (i >= pa->len)
  {
    return 1;
  }
/*
  if(i == pa->len-1)       //last element
  {
    pa->points = realloc(pa->points,sizeof(point_t)*(pa->len-1));
  }
  */
  else
   {
  pa->points[i] = pa->points[pa->len-1];
  pa->points = realloc(pa->points,sizeof(point_t)*(pa->len-1));

    if(pa->points != NULL || pa->len > 0)
      {
        pa->len--;
        return 0;
      }
  }




  return 0;
}
