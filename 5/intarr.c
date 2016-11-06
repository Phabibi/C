#include "intarr.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


/* LAB 5 TASK 1 */

// Create a new intarr_t with initial size len.  If successful
// (i.e. memory allocation succeeds), returns a pointer to a
// newly-allocated intarr_t.  If unsuccessful, returns a null pointer.

intarr_t* intarr_create( unsigned int len ){
  intarr_t* swagdaddy = malloc( sizeof(intarr_t) );
  swagdaddy->data = malloc (len * sizeof(int));

  if (swagdaddy == NULL){
    return NULL;
  }

  swagdaddy->len = len;
  return swagdaddy;
}

// frees all memory allocated for ia. If the pointer is null, do
// nothing. If the ia->data is null, do not attempt to free it.
void intarr_destroy( intarr_t* ia ){
  if(ia == NULL || ia->data == NULL)
  {
    return;
  }
  else {
    free(ia);
  }

}

/* LAB 5 TASK 2 */
// If index is valid, set the value at ia->data[index] to val and return
// INTARR_OK. Otherwise, leave the array unmodified and return
// INTARR_BADINDEX. If ia is null, return INTARR_BADARRAY.
intarr_result_t intarr_set( intarr_t* ia,
			    unsigned int index,
			    int val )
{
  if(ia == NULL)
  {
    return INTARR_BADARRAY;
  }

  if(index < 0 || index > ((ia->len)-1) )
  {
    return INTARR_BADINDEX;
  }
   ia->data[index] = val;
  return INTARR_OK;
}
// If index is valid and i is non-null, set *i to ia->data[index] and return
// INTARR_OK. Otherwise no not modify *i and return
// INTARR_BADINDEX. If ia is null, return INTARR_BADARRAY.
intarr_result_t intarr_get( const intarr_t* ia,
			    unsigned int index,
			    int* i )
{
  if(ia == NULL)
  {
    return INTARR_BADARRAY;
  }

  if( index < 0 || index < ((ia->len)-1) || i == NULL)
  {
    return INTARR_BADINDEX;
  }

  *i = ia->data[index];
  return INTARR_OK;
}

/* LAB 5 TASK 3 */

// Return a duplicate of ia, allocating new storage for the duplicate
// data (we call this a "deep copy"). If unsuccessful (i.e. memory
// allocation for the copy fails, or ia is null), return a null pointer.
intarr_t* intarr_copy( const intarr_t* ia )
{

  intarr_t * Donald_trump = malloc ( sizeof(intarr_t) );
  *Donald_trump = *ia;
   Donald_trump->data= malloc(Donald_trump->len * (sizeof(int) ));
   memcpy(Donald_trump->data,ia->data,sizeof(int)*(Donald_trump->len));

  if(ia == NULL || (Donald_trump->data == NULL ))
  {
    return NULL;
  }
  return Donald_trump;
}

/* LAB 5 TASK 4 */

// sort ia by value smallest-to-largest, so that data[i] < data[i+1]
// for all valid i, then return INTARR_OK. Works in-place: contents of
// ia are sorted on return. If ia is null, return
// INTARR_BADARRAY.


intarr_result_t intarr_sort( intarr_t* ia )
{
  //insertion sort
  int i,j,k;

  if(ia == NULL)
  {
    return INTARR_BADARRAY;
  }

  for (i = 1; i < ia->len; i++)
    {
        k = ia->data[i];
        j = i-1;

        while (j >= 0 && ia->data[j] > k)
        {
            ia->data[j+1] = ia->data[j];
            j = j-1;
        }
        ia->data[j+1] = k;
    }
    return INTARR_OK;
  }

  /* LAB 5 TASK 5 */

  // Find the first occurance of the target in the array, searching from
  // index 0. If the target is found and i is non-null, set *i to the
  // location index and return INTARR_OK. If target does not occur in
  // the array, leave *i unmodified and return INTARR_NOTFOUND. If ia is
  // null, return INTARR_BADARRAY.
  intarr_result_t intarr_find( intarr_t* ia, int target, int* i )
{
  if(ia == NULL)
  {
    return INTARR_BADARRAY;
  }
  int j;
  for(j = 0; j < ia->len;j++)
  {
    if(ia->data[j] == target)
    {
      *i = j;
      return INTARR_OK
    }
  }
  return INTARR_NOTFOUND
}

/* LAB 5 TASK 6 */

// Append val to the end of ia (allocating space for it). If
// successful, return INTARR_OK, otherwise return
// INTARR_BADALLOC. If ia is null, return INTARR_BADARRAY.
/*
intarr_result_t intarr_push( intarr_t* ia, int val )
{
  if(ia == NULL)
  {
    return INTARR_BADARRAY;
  }

  int newarr = malloc(sizeof(int)*ia->len+1);
  int i;
  memcpy(newarr->data,ia->data,sizeof(int)*ai->len);

}

// If the array is not empty, remove the value with the highest index
// from the array, and, if i is non-null, set *i to the removed value,
// then return INTARR_OK. If the array is empty, leave *i unmodified
// and return INTARR_BADINDEX. If ia is null, return INTARR_BADARRAY.
intarr_result_t intarr_pop( intarr_t* ia, int* i );


int main(void){
  int i;
  intarr_t* ia= intarr_create(4);
  intarr_set(ia,0,5);
  intarr_set(ia,1,2);
  intarr_set(ia,2,7);
  intarr_set(ia,3,1);
  intarr_sort(ia);
  //intarr_t* b = intarr_copy(ia);
  //intarr_get(ia, 3, &i);
  //printf("intarr sort %d\n", i);
  //intarr_resize(ia,2);

    for(i=0;i<ia->len;i++) printf("%d=:%d \n ",i,ia->data[i] );
  //printf("\n");
  intarr_destroy(ia);
  return 0;
}
*/
