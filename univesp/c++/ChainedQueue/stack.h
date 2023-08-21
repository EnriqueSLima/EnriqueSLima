/*      This is a code example from Univesp - COM-160 discipline      */

#include "node_type.h"

class Stack
{
 public:
  Stack();                  // Constructor       
  ~Stack();                 // Destructor
  bool isEmpty() const;     // Verify if stack is empty
  bool isFull() const;      // Verify if stack is full
  void print() const;       // Show objects

  void push(ItemType);      // Removing node type elements
  ItemType pop();  
 private:
  NodeType* structure;
};
