#include <iostream>

int main() {
    // Assume 4 byte integers
    int x { 2'147'483'647 }; // The maximum value of a 4-byte signed integers
    std::cout << x << '\n';

    x = x + 1; // Integer overflow, undefined behavior
    std::cout << x << '\n';

    return 0;
}
