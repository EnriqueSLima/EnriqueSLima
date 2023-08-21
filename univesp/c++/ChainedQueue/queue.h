/*      This is a code example from Univesp - COM-160 discipline      */

#include "node_type.h"

class Queue
{ 
 public:
  Queue();                    // Constructor
  ~Queue();                   // Destructor  
  bool isEmpty() const;       // Verify if queue is empty
  bool isFull() const;        // Verify if queue is full
  void print() const;         // Show elements
  
  void enqueue(ItemType);     // Insert element in queue
  ItemType dequeue();         // Remove element in queue
 private:
  NodeType* front;            // Pointer to first element
  NodeType* rear;             // Pointer to rear element
};
