#include <iomanip>
#include <iostream>

int main() {
    double d{0.1};
    std::cout << "default precision: " << d << '\n';
    std::cout << std::setprecision(17);
    std::cout << "lots of precision: " << d << '\n';

    return 0;
}
