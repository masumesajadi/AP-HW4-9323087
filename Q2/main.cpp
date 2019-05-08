#include <iostream>
#include <vector>
#include <memory> 


int main()
{  
  std::vector<int> v(0);
  
  for (size_t i{}; i < 1000; i++){
    v.push_back(i);
    std::cout<< " vector[str" << i <<"]:"<< std::endl;
    std::cout<< "Size of vector is: " << v.size() << std::endl;
    std::cout<< "Capacity of vector is: " << v.capacity() << std::endl;
   }
 

  return 0;
}
