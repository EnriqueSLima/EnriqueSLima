/*      This is a code example from Univesp - COM-160 discipline      */

#include "node_type.h"

class Stack
{
 public:
  Stack();                    //  Construtor       
  ~Stack();                   //  Destrutor
  bool isEmpty() const;       //  Verify if is empty stack
  bool isFull() const;        //  Verify if is a full stack
  void print() const;         //  

  void push(ItemType);        //
  ItemType pop();  
 private:
  NodeType* structure;        //  Pointer to the top element
};
