#include <iostream>

int get_int_from_user() {
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

void print_double(int x) { std::cout << x << " doubled is " << x * 2 << '\n'; }

int main() {
    print_double(get_int_from_user());

    return 0;
}
