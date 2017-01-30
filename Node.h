/*
 * Node.h
 *
 */

#ifndef NODE_H_
#define NODE_H_
#include "Customer.h"

class Node {

public:
  //constructor & destructor
  Node();
  ~Node();

//
private:
  Node* next;
  Customer customer;


};

#endif /* NODE_H_ */
