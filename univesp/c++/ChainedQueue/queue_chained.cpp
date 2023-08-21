/*      This is a code example from Univesp - COM-160 discipline      */

#include <cstddef>         // for use NULL.
#include <new>             // for use of bad_alloc.
#include "queue.h"  
#include <iostream>
using namespace std;

/*      Constructor     */
Queue::Queue()             // Initializing pointers with NULL value
{
  front = NULL;
  rear = NULL; 
}
/*      Destructor     */
Queue::~Queue()
{
  NodeType* temporaryPointer;
  while (front != NULL) {
      temporaryPointer = front;
      front = front->next;    
      delete temporaryPointer;
    }
  rear = NULL;
}

bool Queue::isFull() const  // Verify if queue is full
{
  NodeType* allocation;
  try {
      allocation = new NodeType;
      delete allocation;
      return false;
  } catch(std::bad_alloc exception) {   
    return true;
  }
}

bool Queue::isEmpty() const   // Verify if the queue is empty
{
  return (front == NULL);
}

void Queue::enqueue(ItemType newItem)   // Insert a new node in queue
{
  if (!isFull()) {
    NodeType* newNode;
    newNode = new NodeType;
    newNode->info = newItem;
    newNode->next = NULL;
    if (rear == NULL)
      front = newNode;
    else
      rear->next = newNode;
    rear = newNode;
  } else {
    throw "Queue is already full!";           
  }
}

ItemType Queue::dequeue()       // Remove a node in queue
{
  if (!isEmpty()) {
    NodeType* temporaryPointer;
    temporaryPointer = front;
    ItemType item = front->info;     
    front = front->next;
    if (front == NULL)
      rear = NULL;
    delete temporaryPointer;
    return item;
  } else {
    throw "Queue is empty!";
  }    
}

void Queue::print() const     // Show elements
{
  NodeType* temporaryPointer = front;
  while (temporaryPointer != NULL)
    {
      cout << temporaryPointer->info;
      temporaryPointer = temporaryPointer->next;
    }
  cout << endl;
}
