/*      This is a code example from Univesp - COM-160 discipline      */

#include "student.h"

class Hash {
 public:                            //  Public parameter
  Hash(int max_items = 100);        //  Defining max number of items
  ~Hash();
  bool isFull() const;              //  Function to verify if hash table is full
  int getLength() const;            //  Function to get length of hash table to compare
  
  void retrieveItem(Student& student, bool& found);     //  Function to find a student
  void insertItem(Student student);                     //  Function ti insert item 
  void deleteItem(Student student);                     //  Function to delete items
  void print();                                         //  Function to print items
 private:                           //  Private parameters  
  int getHash(Student student);     //  Function
  int   max_items;
  int   length;
  Student* structure;
};


