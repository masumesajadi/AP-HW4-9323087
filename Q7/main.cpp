#include <iostream>
#include <random>
#include <algorithm>
#include <vector>
#include <chrono>
#include <numeric>
#include <set>

void print_Vector(std::vector<int>& A);
int fill(const int a, std::vector<int>& v);

int main()
{
  std::vector<int> A;
  
  fill(1, A);
  std::cout << "There are " << A.size() << " elements in A: " << std::endl;
  print_Vector(A);

  // How to Shuffle A to make B
  long int seed {std::chrono::system_clock::now().time_since_epoch().count()};

  shuffle (A.begin(), A.end(), std::default_random_engine(seed));
  std::cout << "There are " << A.size() << " elements in B: " << std::endl;
  print_Vector(A);


  ///make C
   shuffle (A.begin(), A.end(), std::default_random_engine(seed));
  std::cout << "There are " << A.size() << " elements in C: " << std::endl;
  print_Vector(A);


  //Calculating 
  float average{ static_cast<float> (accumulate( A.begin(), A.end(), 0.0 )/ A.size() ) };
  // std::cout<< "\nThe average is: " << average << "\n" << std::endl;

  
  return 0;
}


// How to fill the Container without loop :

int fill(const int a, std::vector<int>& v){
  int cnt{};
  if (a >= 51)
    cnt = 100;
  else {
    v.push_back(a);
    return fill(a + 1, v);
  }
}


// Print Elements of Container

void print_Vector(std::vector<int>& A){
  for (int element : A)
    std::cout << element << ' ';
  std::cout << std::endl;
}



// END OF PROGRAM
