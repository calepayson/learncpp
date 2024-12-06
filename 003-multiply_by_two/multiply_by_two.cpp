#include <iostream>

int main() {
    std::cout << "Enter an integer: ";

    int user_num{};
    std::cin >> user_num;

    std::cout << "Double that number is: " << user_num * 2 << '\n';
    std::cout << "Tripe that number is: " << user_num * 3 << '\n';

    return 0;
}
