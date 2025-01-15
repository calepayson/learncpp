#include <iostream>

int main() {
    std::cout << "Before std::boolalpha\n";
    std::cout << "  true: " << true << '\n';
    std::cout << "  false: " << false << '\n';

    std::cout << std::boolalpha;

    std::cout << "\nAfter std::boolalpha\n";
    std::cout << "  true: " << true << '\n';
    std::cout << "  false: " << false << '\n';

    return 0;
}
