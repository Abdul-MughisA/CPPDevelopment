#include <iostream>

int main()
{
    std::cout << "Would you like a burrito? (y/n) ";
    char var {};
    std::cin >> var;
    std::cout << "You entered: " << var << std::endl;
    return 0;
}
