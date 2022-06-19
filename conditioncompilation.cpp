#include <iostream>

// Object-like macro without substitution text
#define PRINT_JOE

int main()
{
#ifdef PRINT_JOE
    std::cout << "Joe\n";   // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"    // will be ignored since PRINT_BOB is not defined
#endif

    return 0;
}