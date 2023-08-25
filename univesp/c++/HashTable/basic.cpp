/*      This is a code example from Univesp - COM-160 discipline      */

#include "hash.h" 
#include <iostream>
using namespace std;

Hash::Hash(int max) {             //  Constructor with default values
  length = 0;
  max_items = max;                //  Defined in 'hash.h'
  structure = new Student[max_items];   
}

Hash::~Hash(){                    //  Destructor
  delete [] structure;
}

bool Hash::isFull() const {       //  Verify if value length is the maximum defined in 'hash.h'
  return (length == max_items);
}

int Hash::getLength() const {     //  Get length of the hash table as a parameter to compare if is full
  return length;
}

void Hash::retrieveItem(Student& student, bool& found) {        //  To find a student
  int location = getHash(student);              //  Assign value of student hash
  Student aux = structure[location];            //  Creating auxiliary structure to compare
  if (student.getSreg() != aux.getSreg()) {     //  Comparing values
    found = false;      //  Not found
  } else {
    found = true;       //  Found
    student = aux;
  }
}

void Hash::insertItem(Student student) {    //  Insert item in hash table
  int location = getHash(student);
  structure[location] = student;
  length++;
}
void Hash::deleteItem(Student student) {    //  Delete item in hash table
  int location = getHash(student);
  structure[location] = Student();
  length--; 
}

void Hash::print() {                        //  Print items in hash table
  for (int i = 0; i < max_items; i++) {
    cout << i <<":"<<
      structure[i].getSreg()<<", "<<
      structure[i].getName()<<endl;
  }
}

int Hash::getHash(Student student){
  return student.getSreg() % max_items;     //  To handle collisions with fails intentionally
}
