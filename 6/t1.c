#include "intarr.h"
#include <stdio.h>
#include <stdlib.h>


 /*  task 1 */

int intarr_save_binary (intarr_t*ia , const char* filename)
{
  FILE* f = fopen(filename,"w");

  if(f == NULL)
  {
    return 1;
  }

  if( fwrite( &(ia->len) , sizeof(unsigned int) , 1 , f ) != 1 )
  {
    return 1;
  }

  if( fwrite(ia->data,sizeof(int),ia->len,f) != ia->len )
  {
    return 1;
  }

  fclose(f);                                            //if its a 0
  return 0;
}
intarr_t* intarr_load_binary (const char* filename)
{
  intarr_t* new = malloc(sizeof(intarr_t));

  if(new == NULL)
  {
    return NULL;
  }

  FILE* f = fopen(filename, "r");

  if(f == NULL)
  {
    if(fread( &(new->len) , sizeof(unsigned int) , 1 , f) != 1)
    {
      return NULL;
    }

    new->data = malloc(sizeof(int)* new->len);

    if(new->data == NULL)
    {
      return NULL;
    }

    if(fread(new->data, sizeof(int) , new->len, f) != new->len)
    {
      return NULL;
    }
  
  }
    fclose(f);
    return new;
}

/* tast 2 */
