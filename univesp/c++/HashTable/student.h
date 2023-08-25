/*      This is a code example from Univesp - COM-160 discipline      */

#include <iostream>
using namespace std;

class Student{
private :
  int s_reg;                  //  Student register
  std::string s_name;         //  Student name
public:  
  Student();
  Student(int s_reg, std::string s_name);
  string getName() const;     //  Function to return student name
  int getSreg() const;        //  Function to return student register
};
