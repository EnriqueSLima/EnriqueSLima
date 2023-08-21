/*      This is a code example from Univesp - COM-160 discipline      */

#include <iostream>

using namespace std; //to use just cout 

void memory_allocated_amount(int* p)  //  function to work with pointer p, inside function scope
{
  p = new int;  //  Create a new pointer
  *p = 7; //  Inserting a value of the new pointer
}
void memory_modified_value(int* p)  //  function to work with pointer p, outside of function scope
{
  *p = 14;  //  Changing the value without creating a new pointer, outside of function scope
}
void reference(int*& p) //  function to work with pointer p, by reference
{
  p = new int;  //  Create a new pointer with another adress because of &
  *p = 21;  //  Inserting a value the new pointer
}

int main()
{
  int a  = 1;
  int b  = 2;
  int c  = 3; //  Creating variable with values
  int* p1 = &a;
  int* p2 = &b;
  int* p3 = &c; //  Creating pointers and assingn memory adress

  cout << "Before:" << endl; // Before the functions call
  cout << "Variables Values: "<< a <<" "<< b <<" "<< c << endl; //  Print variables values
  cout << "Memory Adress: "<<  p1 <<" "<<  p2 <<" "<<  p3 << endl;  //  Print memory adress
  cout << "Pointers Values: "<< *p1 <<" "<< *p2 <<" "<< *p3 << endl;  //  Print values inside memory adress
  cout << endl;
  
  cout << "Modifing values with functions" << endl; // Print a message for calling functions
  cout << endl;

  memory_allocated_amount(p1); 
  memory_modified_value(p2);
  reference(p3);  // Calling functions

  cout << "After:" << endl; //  After functions call
  cout << "Variables Values: "<< a <<" "<< b <<" "<< c << endl; // Print variables values
  cout << "Memory Adress: "<<  p1 <<" "<<  p2 <<" "<<  p3 << endl;  //  Print memory adress
  cout << "Pointers Values: "<< *p1 <<" "<< *p2 <<" "<< *p3 << endl;  //  Print values inside memory adress

  return 0;
}
