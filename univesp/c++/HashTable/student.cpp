/*      This is a code example from Univesp - COM-160 discipline      */

#include "student.h"

Student::Student(){         //  Initializing class with values
  this->s_reg   = -1;
  this->s_name = "";
};  
Student::Student(int s_reg , std::string s_name){       //  Assign entry class values 
  this->s_reg = s_reg;
  this->s_name  = s_name;
}
string Student::getName() const {       //  Function to get attr student name
  return s_name;
}
int Student::getSreg() const{         //  Function to get attr student register
  return s_reg;
}
