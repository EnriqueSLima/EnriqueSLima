/*      This is a code example from Univesp - COM-160 discipline      */

#include "stack.h"
#include <cstddef>        //  for use NULL
#include <new>

#include <iostream>
using namespace std;      //  for use cin and cout instead os std::cin and std::cout

/*    Constructor   */
Stack::Stack(){
  structure = NULL;       //  Initiation with a NULL value of adress
}
/*    Destructor    */
Stack::~Stack(){
  NodeType* temporaryPointer;           //  Creating a new node type with temporary pointer
  while (structure != NULL) {           //  While stack is not empty
    temporaryPointer = structure;       //  Adressing temporary pointer to actual structure
    structure  = structure -> next;     //  Adressing the next element of stack
    delete temporaryPointer;            //  Deleting temporary pointer
  }
}

bool Stack::isEmpty() const {           //  Verify if the stack is empty
  return (structure == NULL);
}
bool Stack::isFull() const {             // Verify if stack is full
  NodeType* allocation;                  // Creating a new node type
  try {                                  // Try to insert a new element on stack
    allocation = new NodeType;           // Inserting the new element
    delete allocation;                   // Deleting the new element
    return false;                        // Return False, so you can add another element
  } catch(std::bad_alloc exception){     // If you receive an error
    return true;                         // Return True, so you cannot add another element
  }  
}

void Stack::push(ItemType item){         // To insert a element in stack
  if (!isFull()){
    NodeType* allocation;
    allocation = new NodeType;
    allocation->info = item;
    allocation->next = structure;
    structure = allocation;
  } else {
    throw "Stack is already full!";
  }
}

ItemType Stack::pop(){                    // To remove a element in stack
  if (!isEmpty()) {
    NodeType* temporaryPointer;
    temporaryPointer = structure;
    ItemType item = structure->info;
    structure = structure->next;
    delete temporaryPointer;
    return item;
  } else {
    throw "Stack is empty!";
  }
}

void Stack::print() const                 // To show elements
{
  NodeType* temporaryPointer = structure;
  while (temporaryPointer != NULL) {      // Means the stack is not empty
    cout << temporaryPointer->info;
    temporaryPointer  = temporaryPointer->next;
  }  
  cout << endl;
}

