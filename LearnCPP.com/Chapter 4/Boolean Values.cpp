#include <iostream>

int main()
{
    bool b1 {true};
    bool b2 {false};
    b1 = false;
    bool b3 {}; // initialises to false
    bool b4 {!true}; // initialises to false
    bool b5 {!false}; // initialises to true
    bool b6 {false};

    std::cout << true << std::endl;
    std::cout << !true << std::endl;

    std::cout << b1 << b2 << b3 << b4 << b5 << b6 << std::endl;
    std::cout << std::boolalpha;
    std::cout << b1 << b2 << b3 << b4 << b5 << b6 << std::endl;
    std::cout << std::noboolalpha;
    std::cout << b1 << b2 << b3 << b4 << b5 << b6 << std::endl;

    bool input;
    std::cin >> input; // this only accepts integers 0 and 1
    // setting std::cout << std::boolalpha reverses this behaviour
    std::cout << input << std::endl;

    return 0;

}
