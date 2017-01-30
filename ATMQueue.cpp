/*
 * ATMQueue.cpp
 *
 */

#include "ATMQueue.h"
#include <iostream>
// TO DO:: Fill in.
int ATMQueue::Queue_len()
{
  int count;
  while (customer->next != NULL)
  {
    count++;
    customer = customer->next;
  }

  return count;
}
