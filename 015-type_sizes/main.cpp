#include <iomanip> // for std::setw (which sets the width of the subsequent output)
#include <iostream>
#include <climits> // for CHAR_BIT

#define WIDTH 16

int main() {
    std::cout << "A byte is " << CHAR_BIT << " bits\n\n";

    std::cout << std::left; // Left justify the output.
    
    std::cout << std::setw(WIDTH) << "bool:" << sizeof(bool) << " bytes\n";
    std::cout << std::setw(WIDTH) << "char:" << sizeof(char) << " bytes\n";
    std::cout << std::setw(WIDTH) << "short:" << sizeof(short) << " bytes\n";
    std::cout << std::setw(WIDTH) << "int:" << sizeof(int) << " bytes\n";
    std::cout << std::setw(WIDTH) << "long:" << sizeof(long) << " bytes\n";
    std::cout << std::setw(WIDTH) << "long long:" << sizeof(long long) << " bytes\n";
    std::cout << std::setw(WIDTH) << "float:" << sizeof(float) << " bytes\n";
    std::cout << std::setw(WIDTH) << "double:" << sizeof(double) << " bytes\n";
    std::cout << std::setw(WIDTH) << "long double:" << sizeof(long double) << " bytes\n";

    return 0;
}
