/*      This is a code example from Univesp - COM-160 discipline      */

#include "hash.h" 
#include <iostream>
using namespace std;

Hash::Hash(int max) {  
  length = 0;
  max_items = max;
  structure = new Student[max_items];
}

Hash::~Hash(){
  delete [] structure;
}

bool Hash::isFull() const {
  return (length == max_items);
}

int Hash::getLength() const {
  return length;
}

void Hash::retrieveItem(Student& student, bool& found) {
  int startLoc = getHash(student);
  bool moreToSearch = true; 
  int location = startLoc;
  do {
    if (structure[location].getSreg() == student.getSreg() ||
	structure[location].getSreg() == -1)
      moreToSearch = false;
    else
      location = (location + 1) % max_items;
  } while (location != startLoc && moreToSearch);
  
  found = (structure[location].getSreg() == student.getSreg() );   
  if (found) { 
    student = structure[location];
  }
}

void Hash::insertItem(Student student) {
  int location;
  location = getHash(student);
  while (structure[location].getSreg() > 0)
    location = (location + 1) % max_items;
  structure[location] = student;
  length++;
}

void Hash::deleteItem(Student student) {
  int startLoc = getHash(student);
  bool moreToSearch = true; 
  int location = startLoc;
  do {
    if (structure[location].getSreg() == student.getSreg() ||
	structure[location].getSreg() == -1)
      moreToSearch = false;
    else
      location = (location + 1) % max_items;
  } while (location != startLoc && moreToSearch);

  if (structure[location].getSreg() == student.getSreg()) {       
    structure[location] = Student(-2,"");
    length--;
  }
}

void Hash::print() {
  for (int i = 0; i < max_items; i++) {
    cout << i <<":"<< structure[i].getSreg()<<", "<<structure[i].getName()<<endl;
  }
}

int Hash::getHash(Student student){
  return student.getSreg() % max_items;
}

void Hash::updateItem(Student student, int newSreg, std::string newName) {
  deleteItem(student); 
  insertItem(Student(newSreg, newName));
}