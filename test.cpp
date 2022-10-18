#include "vector_overload.h"

int main()
{
    std::vector<int> a{1, 2, 3, 4}, b{3, 4, 5, 6};
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "{1, 2, 3, 4} - {3, 4, 5, 6} = " << std::vector<int>{1, 2, 3, 4} + std::vector<int>{3, 4, 5, 6} << std::endl;
    std::cout << "a += b = " << (a += b) << std::endl;
    std::cout << "a = " << a << std::endl;
    
    
    return 0;
}

