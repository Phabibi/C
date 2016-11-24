#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "list.h"


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


void list_sort(list_t * intlist)
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

    list_sort(first);
    list_sort(second);

    LLcatenate(intlist , first);
    list_append(intlist , pivot_1->val);
    LLcatenate(intlist , second);


}