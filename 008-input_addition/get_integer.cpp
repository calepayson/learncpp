#include <iostream>

int get_integer() {
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}
