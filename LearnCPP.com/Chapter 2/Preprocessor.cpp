#include <iostream>

#define MY_NAME "A'yaan"

#define ONE
#define TWO

int main()
{
#ifdef ONE // if ONE is define above (#if [!]defined(ONE) is also valid syntax)
    std::cout << MY_NAME << std::endl;
#endif

#ifndef TWO // if TWO is not defined above
    std::cout << "TWO is not defined." << std::endl;
#endif
#if 0 // this excludes the below block of code
// change the 0 > 1 to execute the code
    std::cout << "This does not execute.";
#endif
    return 0;
}
