/*
 * Customer.h
 *
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

class Customer {
  // TO DO:: Fill in.
public:
  Customer();
  ~Customer();
/*
returns the transaction_time
*/
int tran_time();

/*
returns the arrival_time
*/

int arrival_time();


private:
  int transaction_time;
  int time_arrive;
};

#endif /* CUSTOMER_H_ */
