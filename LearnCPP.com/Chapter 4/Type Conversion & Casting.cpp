#include <iostream>

int main()
{
    char ch {97}; // 97 is an ASCII code
    std::cout << ch << " has value " << static_cast<int>(ch) << std::endl;

    unsigned int u {5};
    int s {static_cast<int>(u)};

    std::cout << s << std::endl;
    return 0;
}
