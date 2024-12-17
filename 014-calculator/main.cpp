#include <iostream>

enum class Operation {
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE,
    ERROR,
};

int get_user_input() {
    std::cout << "Integer 1: ";
    int input{};
    std::cin >> input;
    return input;
}

Operation get_mathematical_operation() {
    std::cout << "Operation: ";
    char operation{};
    std::cin >> operation;

    if (operation == '+') {
        return Operation::ADD;
    } else if (operation == '-') {
        return Operation::SUBTRACT;
    } else if (operation == '*') {
        return Operation::MULTIPLY;
    } else if (operation == '/') {
        return Operation::DIVIDE;
    }

    return Operation::ERROR;
}

int calculate_result(int num_1, int num_2, Operation operation) {
    if (operation == Operation::ADD) {
        return num_1 + num_2;
    } else if (operation == Operation::SUBTRACT) {
        return num_1 - num_2;
    } else if (operation == Operation::MULTIPLY) {
        return num_1 - num_2;
    } else if (operation == Operation::DIVIDE) {
        return num_1 / num_2;
    }

    std::cout << "Operation not recognized.";
    exit(1);
}

int main() {
    // Get first number from user
    int input_num_1{get_user_input()};

    // Get mathematical operation from user
    Operation operation{get_mathematical_operation()};
    if (operation == Operation::ERROR) {
        std::cout
            << "Operation not recognized. Please enter one of: +, -, *, /";
        exit(1);
    }

    // Get second number from user
    int input_num_2{get_user_input()};

    // Calculate result
    int result{calculate_result(input_num_1, input_num_2, operation)};

    // Print result
    std::cout << "Result: " << result << '\n';

    return 0;
}
