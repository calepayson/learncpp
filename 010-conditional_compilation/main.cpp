#include <iostream>

#define PRINT_BOB

int main() {
#ifdef PRINT_BOB
    std::cout << "Hello Bob\n";
#endif

#ifdef PRINT_JOE
    std::cout << "Hello Joe\n";
#endif

    return 0;
}
