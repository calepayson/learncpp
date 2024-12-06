#include <iostream>

int main() {
    std::cout << "Enter three numbers separated by white space: ";

    int x{};
    int y{};
    int z{};
    std::cin >> x >> y >> z;

    std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";

    return 0;
}
