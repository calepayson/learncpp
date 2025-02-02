#include <cstdint>
#include <iostream>

int main() {
    std::cout << "least 8: " << sizeof(std::int_least8_t) * 8 << " bits\n";
    std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
    std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
    std::cout << '\n';
    std::cout << "fast 8: " << sizeof(std::int_fast8_t) * 8 << " bits\n";
    std::cout << "fast 16: " << sizeof(std::int_fast8_t) * 16 << " bits\n";
    std::cout << "fast 32: " << sizeof(std::int_fast8_t) * 32 << " bits\n";

    return 0;
}
