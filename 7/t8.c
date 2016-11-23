#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"

list_t* list_create( void )
{
  list_t* l = malloc( sizeof(list_t) );
  if( l )
    {
      l->head = NULL;
      l->tail = NULL;
    }
  return l;
}

void list_destroy( list_t* list )
{
  element_t* el = list->head;
  while( el )
    {
      element_t* next = el->next;
      free( el );
      el = next;
    }

  free( list );
}

element_t* element_create( int i )
{
  element_t* el = malloc( sizeof(element_t) );
  if( el )
    {
      el->val = i;
      el->next = NULL;
    }
  return el;
}

int list_append( list_t* list, int i )
{
  element_t* el = element_create( i );
  if( el == NULL )
    return 1;

  if( list->head == NULL )
    list->head = el;

  if( list->tail )
    list->tail->next = el;

  list->tail = el;
  return 0;
}

int list_prepend( list_t* list, int i )
{
  element_t* el = element_create( i );
  if( el == NULL )
    return 1;

  if( list->tail == NULL )
    list->tail = el;

  if( list->head )
    el->next = list->head;

  list->head = el;

  return 0;
}

element_t* list_index( list_t* list, unsigned int i )
{
  if( list->head == NULL )
    return NULL;

  element_t* el = list->head;
  unsigned int now = 0;

  while( now < i )
    {
      if( el->next == NULL )
	       return NULL;

      now++;
      el = el->next;
    }

  return el;
}

void list_print( list_t* list )
{
  printf( "{" );

  for( element_t* el = list->head;
       el;
       el = el->next )
    printf( " %d", el->val );

  printf( " }\n" );
}




void LLcatenate(list_t * L1, list_t * L2) {
    if (L2->head == NULL) {
        assert(L2->tail == NULL);
    } else if (L1->head == NULL) {
        assert(L1->tail == NULL);
        //L1->head = L2->head;
        //L1->tail = L2->tail;
        *L1 = *L2;
    } else {
        L1->tail->next = L2->head;
        L1->tail= L2->tail;
    }
    free(L2);
}


void quick(list_t * intlist)
{

    if(intlist->head == intlist->tail)
    {
        return;
    }

    int pivot = intlist->head->val;
    element_t * pivot_1 = intlist->head;
    element_t * curr = intlist->head->next;
    element_t  * next_1;
   	list_t * first = list_create();
    list_t * second = list_create();

    while (curr != NULL)
    {
        next_1 = curr->next;
        curr->next = NULL;

        if(curr->val <= pivot)
        {
            list_append(first,curr->val);
        }

        else if(curr->val > pivot)
        {
            list_append(second,curr->val);
        }

        curr = next_1;
    }

    intlist->head = NULL;
    intlist->tail = NULL;

    quick(first);
    quick(second);

    LLcatenate(intlist , first);
    list_append(intlist , pivot_1->val);
    LLcatenate(intlist , second);


}