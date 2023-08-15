#include <iostream>

void modify_vetor_sintax_1(int b[], int num_elem)
{
  for (int i = 0; i < num_elem; i++){
    b[i] = b[i] * 2;
  }
}

void modify_vetor_sintax_2(int* b, int num_elem)
{
  for (int i = 0; i < num_elem; i++){
    b[i] = b[i] * 2;
  }
}

void vetor_const_sintax_1(const int* b, int num_elem) 
{
  // Body without changing vector elements
}

void vetor_const_sintax_2(const int b[], int num_elem) 
{
  // Body without changing vector elements
}


const int NUM_ELEM = 10;
int main()
{
  // Static Allocation
  int c[NUM_ELEM] = {1,2,3,4,5,6,7,8,9,10};

  // Dinamic Allocation
  int *d = new int[NUM_ELEM];
  for (int i = 0; i < NUM_ELEM; i++){
    d[i] = i + 1;
  }
  
  modify_vetor_sintax_1(c, NUM_ELEM);
  modify_vetor_sintax_2(c, NUM_ELEM);

  modify_vetor_sintax_1(d, NUM_ELEM);
  modify_vetor_sintax_2(d, NUM_ELEM);

  for (int i = 0; i < NUM_ELEM; i++){
    std::cout << i << " : " << c[i] << " , " << d[i] << std::endl;
  }
  return 0;
}
