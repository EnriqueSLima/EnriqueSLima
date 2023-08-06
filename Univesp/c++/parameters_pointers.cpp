#include <iostream>

using namespace std; //to use just cout 

void memory_allocated_amount(int* p)
{
  p = new int;
  *p = 7;
}
void memory_modified_value(int* p)
{
  *p = 8;
}
void reference(int*& p)
{
  p = new int;
  *p = 9;
}

int main()
{
  int a  = 1;
  int b  = 2;
  int c  = 3; 
  int* p1 = &a;
  int* p2 = &b;
  int* p3 = &c;

  cout << "Values: "<< a <<" "<< b <<" "<< c << endl;
  cout << "Pointers Before: "<<  p1 <<" "<<  p2 <<" "<<  p3 << endl;
  cout << "Values Before: "<< *p1 <<" "<< *p2 <<" "<< *p3 << endl;
  cout << endl;
  
  cout << "Modifing values with functions" << endl;
  cout << endl;

  memory_allocated_amount(p1); 
  memory_modified_value(p2);
  reference(p3);  

  cout << "Pointers After: "<<  p1 <<" "<<  p2 <<" "<<  p3 << endl;
  cout << "Values After: "<< *p1 <<" "<< *p2 <<" "<< *p3 << endl;
  cout << "Values: "<< a <<" "<< b <<" "<< c << endl;

  return 0;
}
