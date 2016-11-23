#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main( int argc, char* argv[] )
{
  list_t* list = list_create();

  /* task 1 */
  list = NULL;
  list_prepend(list , 2);

  /* tast 2 */

  list->head = list->head->next;
  element_create (3);

  /* task 3 */

  list = NULL;
  list_index(list , 3);

  /* task 4 */

  list->tail =  NULL;
  list_prepend(list , 4);

  /* task 6 */

  list_append(list , 23);
  list_index(list , 12);

  







  for( int i=0; i<5; i++ )
    list_append( list, i );

  for( int i=-1; i>-5; i-- )
    list_prepend( list, i );

  list_print( list );


  int index = 4;
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
