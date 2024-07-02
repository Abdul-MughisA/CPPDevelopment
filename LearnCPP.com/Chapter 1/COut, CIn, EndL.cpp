// This program shows the different uses of COut, CIn and EndL
#include <iostream>

int main()
{
    std::string x{};
    std::cin >> x;
    std::cout << x << std::endl; // NOTE THAT EndL is not preferred because it flushes the stream, and this slows performance
	std::cout << "Hello," << " world!\n" << std::endl; // Using the \n character works just as well
	return 0;
}
