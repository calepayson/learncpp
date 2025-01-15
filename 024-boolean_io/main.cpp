#include <iostream>

bool is_equal(int x, int y) { return x == y; }

int main() {
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << std::boolalpha;  // Print bools as "true" or "false"

    std::cout << x << " and " << y << " are equal? ";
    std::cout << is_equal(x, y) << '\n';

    return 0;
}
