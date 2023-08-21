/*      This is a code example from Univesp - COM-160 discipline      */

#include <iostream>

int main() {
  int c[10] = {14, 0, 13};  //  Create a vector with size 10 and 3 elements
  
  c[5] = 16;
  c[7] = 21;
  c[8] = 45;  //  Creating another index and values for them

  for (int i = 0; i < 10; i++) {  //  Create a loop access the vector index
    std::cout << "c[" << i << "] = " << c[i] << "\n"; //  Print valoe of the vector index
  }  
  return 0; //  End of code execution without errors
}

