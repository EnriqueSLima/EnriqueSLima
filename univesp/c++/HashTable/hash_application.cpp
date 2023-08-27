/*      This is a code example from Univesp - COM-160 discipline      */

#include <iostream>
#include "hash.h" 

using namespace std;

int main(){
  Hash studentsHash(10);      //  Inserting some registers with collisions
   int   s_regs[7]   = {
     12704, 31300, 1234,
     49001, 52202, 65606,
     91234};
    /*
    Note: Here some registers will be lost because of the number of hash items is 10,
    causing some collisions and some data loss.
    */  
  string s_names[7] = {       //  Inserting some names
    "Peter", "Raul", "Paul",
    "Carl", "Lucas", "Maria",
    "Samantha"};
    /*
    WITH 'basic.cpp' and NOT WITH 'linear_probing.cpp'
    Note: Here some registers will be lost because of the number of hash items is 10.
    The gethash() function get the rest of division by 10, so the s_regs: 
    '12704' - 'Peter'
    '1234'  - 'Paul'
    '91234' - 'Samantha' 
    The students will have the same value returned by getHash() function (4), generating collisions.
    Peter and Paul will bw overwrited by Samantha, and will not be able to find them, only Samantha.    
    */  
	    
  for (int i = 0; i < 7; i++) {
    Student student = Student(s_regs[i], s_names[i]);     //  Inserting students names and registers 
    studentsHash.insertItem(student);
  }
  cout << "Print Hash Table" <<  endl;
  cout << "------------------------------" <<  endl;

  studentsHash.print();       //  Print results with collisions problems
  cout << "------------------------------" <<  endl;
  
  Student student(12704,"");      //  Attempting to find student register 'Peter'
  bool found = false;
  studentsHash.retrieveItem(student, found);
  cout << student.getName() << "Student:  -> Found: " << found << endl;     //  Print result 'Peter' was not found because overwrited by Samantha only with 'basic.cpp'
  cout << "------------------------------" <<  endl;

  cout << "Deleting item" <<  endl;
  cout << "------------------------------" <<  endl;
  studentsHash.deleteItem(student);     //  Deleting student, but will delete the overwrited value Samantha, because of collision
  studentsHash.print();
  cout << "------------------------------" <<  endl;

  //cout << "Updating item" <<  endl;
  //cout << "------------------------------" <<  endl;
  //studentsHash.updateItem(student, 25469, "Name updated");      //  Update student oly used with 'linear_probing.cpp'
  //studentsHash.print();
  //cout << "------------------------------" <<  endl;
  cout << "End" << endl;  
}
