// Use g++ -std=c++11 or clang++ -std=c++11 to compile.

#include <algorithm> // remove and remove_if
#include <iostream>
#include <vector> // the general-purpose vector container


void print(const std::vector<int> &vec)
{
  for (const auto& i: vec) 
    std::cout << i << ' '; 
  std::cout << std::endl;
}
 
int main()
{
  // initialises a vector.
  std::vector<int> v = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
  std::cout << "before: ";
  print(v);
 
 
   // removes all 2 numbers
  //v.erase( std::remove_if(v.begin(), v.end(), 2), v.end() );
  //std::cout << "after remove:  ";
 // print(v);
  
  
  // erase all elements with the value 2
  v.erase( std::remove( v.begin(), v.end(), 2 ), v.end() ); 
  std::cout << "after erase:  ";
  print(v); 

  return 0;  
}
