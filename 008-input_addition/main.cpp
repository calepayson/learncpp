#include <iostream>

int get_integer();

int main() {
    int x{get_integer()};
    int y{get_integer()};

    std::cout << x << " + " << y << " = " << x + y << '\n';

    return 0;
}
