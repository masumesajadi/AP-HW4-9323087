
// difference b/w std::remove and std::vector::erase
#include <bits/stdc++.h>

int main()
{
    std::vector<int> vec1{ 1, 2, 3, 4, 5, 4, 3, 2, 1 };
    std::vector<int> vec2{ 1, 2, 3, 4, 5, 4, 3, 2, 1 };

    // Print original vector
    std::cout << "Original vector :";
    for (int i = 0; i < vec1.size(); i++)
        std::cout << " " << vec1[i];
    std::cout << "\n";

    // Iterator that store the position of last element
    std::vector<int>::iterator pend;

    // std :: remove function call
    pend = std::remove(vec1.begin(), vec1.end(), 2);

    // Print the vector after std :: remove
    std::cout << "Range contains ; after remove:";
    for (std::vector<int>::iterator p = vec1.begin(); p != pend; ++p)
        std::cout << ' ' << *p; std::cout << '\n';



    // std :: vector :: erase function call
    // erase 2 of vector
    vec2.erase( std::remove( vec2.begin(), vec2.end(), 2 ), vec2.end() );

    // Print the vector
    std::cout << "Vector contains ; after erase:";
    for (int i = 0; i < vec2.size(); i++)
        std::cout << " " << vec2[i];
    std::cout << "\n";

    return 0;
}