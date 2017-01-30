/*
 * Customer.cpp
 *
 */

#include "Customer.h"

Customer::Customer()
{

}
Customer::~Customer()
{
  transaction_time = 0;
  time_arrive = 0;
}
int Customer::tran_time()
{
  return transaction_time;
}

int Customer::arrival_time()
{
  return time_arrive;
}
