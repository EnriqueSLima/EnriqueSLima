#include <iostream>

int main() {
  int num_elem;   //  Create a int variable for max number of elements
  std::cout << "Insert vetor size: ";   //  Ask user to insert the value of max elements inside the vector
  std::cin >> num_elem;   //  Allocating the inserted value inside the variable
  
  int* c = new int[num_elem];   //  Create a new vector with the max nunber of elements 
  
  for (int i = 0; i < num_elem; i++) {    //  Create a loop for access elements of the vector
    c[i] = 2*i;   //  For every vector index, take value of index and multiply by 2
  }
  for (int i = 0; i < num_elem; i++) {    //  Create a loop for every element until max elements
    std::cout << "c[" << i << "] = " << c[i] << "\n";   //  Print every element inside the vector index
  }

  delete [] c;    // Delete memory allocated for the new vector
  
  return 0;   //  End code execution without error
}

