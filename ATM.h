/*
 * ATM.h
 *
 */

#include "ATMQueue.h"

#ifndef ATM_H_
#define ATM_H_

class ATM {
  // TO DO:: Fill in.
public:
  /*
  constructor and destructor
  */

  ATM();
  ~ATM();

  /* if the ATM is not in use, it will assign a customer to it
  (and assigns the transaction time of that customer to the ATM)
  else it will enter the customer into the queue.
  */
  void insert_customer(Customer customer);

/*
updates the ATM's variables for the passage of time
removes a customer from a queue
*/

  void customer_process(int current_time);

  /*
  returns length of the queue
  */

  int queue_len();

  /*
  return remaining transaction time
  */

  int remaining_time();

private:
  /* Remaining transaction time for the current customer */

  int time_remain;

  /* Availability
  (a boolean value, or a method that returns a boolean value
  based on the remaining transaction time, i.e. true if it is zero)
  */


  bool availability = true;

  /*
  Time spent by customers waiting at the ATM,
  updated as each customer starts to use the ATM (leaves its queue)
  */

  int time_spent;

  ATMQueue* ATMQueue;




};

#endif /* ATM_H_ */
