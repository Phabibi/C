#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include <assert.h>

int main( int argc, char* argv[] )
{
  list_t* list = list_create();

  /* task 1 */

  list_t* list_1 = list_create();
  list_1->head = NULL;
  list_index(list_1 , 3);
  list_destroy(list_1);

  /* tast 2 */
  list_t * list_2 = list_create();
  int i = 0;
  list_prepend(list_2, 8);

  if(list_2->head !=  list_2->tail)
  {
    return 1;
  }
  element_t* list_6 = list_index(list_2 , 1223);
  free(list_6);

  for(i = 0 ; i < 210 ; i++)
  {
    list_append(list_2, 56);
  }
  list_destroy(list_2);
  list_t *  list_d = list_create();
  list_append(list_d, 54);
  list_destroy(list_2);


  /* task 3 */
  //list_t* list_3 = list_create();
  //list_3->head = NULL;
  //list_index(list_3 , 3);

  /* task 4 */
  list_t* list_4 = list_create();
  //list_4->tail->next = NULL;
  list_prepend(list_4 , 1);

  /* task 6 */
  //list_t* list_61 = list_create();







  for( int i=0; i<5; i++ )
    list_append( list, i );

  for( int i=-1; i>-5; i-- )
    list_prepend( list, i );

  if(list->tail->next != NULL)
  {
    assert(list->tail->next == NULL);
  }

  list_print( list );




  int index = 2;
  element_t* el = list_index( list, index );

  if( el == NULL )
    {
      printf( "index %d not found\n", index );
      return 1; // fail
    }

  printf( "value at index %d is %d\n", index, el->val );

  if( el->val != -2 )
    return 1;

  list_destroy( list );

  return 0; // tests pass


}
