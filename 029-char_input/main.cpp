#include <iostream>  // std::cout, std::cin

int main() {
    std::cout << "Input a character: ";
    char c{};
    std::cin >> c;

    std::cout << "You input: " << c << '\n';

    return 0;
}
