#include <iostream>

int main() {
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    if (x > 0)
        std::cout << "The value is greater than zero\n";
    else if (x < 0)
        std::cout << "The value is less than zero\n";
    else
        std::cout << "The value is zero\n";

    return 0;
}
