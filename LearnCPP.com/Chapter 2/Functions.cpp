#include <iostream>

int getValueFromUser(){
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int returnValue(int value);
int whatTheHell();

int main()
{
    std::cout << whatTheHell() << std::endl;
    std::cout << returnValue(100) << " is the value you entered." << std::endl;
    int num{getValueFromUser()};
    std::cout << num << " doubled is: " << num * 2 << '\n';
}

int returnValue(int value)
{
    return value;
}
