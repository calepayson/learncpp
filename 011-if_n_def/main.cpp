#include <iostream>

int main() {
#ifndef PRINT_BOB
    std::cout << "Bob is missing.\n";
#endif

    return 0;
}
