#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int x {};
    std::cin >> x;

    if (x > 0)
        std::cout << "The value is positive." << std::endl;
    else if (x < 0)
        std::cout << "The value is negative." << std::endl;
    else
        std::cout << "The value is zero." << std::endl;
    //end if
    
    return 0;
}
