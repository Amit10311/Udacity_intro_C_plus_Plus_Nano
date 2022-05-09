#include <iostream>

int main()
{
    int i;
    std::cout << "Enter an integer value for i: ";
    std::cin >> i;
    constexpr int j = i * 2;  // "j can only be evaluated at run time."
                              // "constexpr must be evaluated at compile time."
                              // "So this code will produce a compilation error."
}

/**   OUTPUT  : ERROR

 In function ‘int main()’:
 error: the value of ‘i’ is not usable in a constant expression
 constexpr int j = i * 2; 
                      ^
 note: ‘int i’ is not const
     int i;
         ^
 */
