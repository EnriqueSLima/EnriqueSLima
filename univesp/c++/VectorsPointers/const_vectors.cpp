/*      This is a code example from Univesp - COM-160 discipline      */

#include <iostream>

const int NUM_ELEM = 15; // Define max number of elements

int main() {
  int c[NUM_ELEM]; // Create a Vector with max number of elements
  for (int i = 0; i < NUM_ELEM; i++) { // Populate vector with a index loop
    c[i] = 3*i; // For every vector index, take value of index and multiply by 3 
  }
  for (int i = 0; i < NUM_ELEM; i++) { // Create a loop for every element until max elements
    std::cout << "c[" << i << "] = " << c[i] << "\n"; // Print every element inside the vector index
  }
  return 0; // End code execution without errors
}

