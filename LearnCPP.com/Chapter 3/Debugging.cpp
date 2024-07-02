#include <iostream>

void printValue(int value);

int main()
{
    std::cout << "Hello, world!" << std::endl;
    printValue(5);
    return 0;
}

void printValue(int value)
{
    std::cout << value << std::endl;
}
