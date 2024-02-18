//#include <iostream>
//
//double add(double a, double b) { return a + b; }
//double subtract(double a, double b) { return a - b; }
//double multiply(double a, double b) { return a * b; }
//double divide(double a, double b) { if (b != 0) return a / b; }
//
//int calculator() {
//    double num1, num2;
//    char operation;
//
//    std::cout << "Enter first number: ";
//    std::cin >> num1;
//    std::cout << "Enter operation (+, -, *, /): ";
//    std::cin >> operation;
//    std::cout << "Enter second number: ";
//    std::cin >> num2;
//
//    switch (operation) {
//    case '+':
//        std::cout << "Result: " << add(num1, num2) << "\n";
//        break;
//    case '-':
//        std::cout << "Result: " << subtract(num1, num2) << "\n";
//        break;
//    case '*':
//        std::cout << "Result: " << multiply(num1, num2) << "\n";
//        break;
//    case '/':
//        if (num2 != 0)
//            std::cout << "Result: " << divide(num1, num2) << "\n";
//        else
//            std::cout << "Error: Division by zero is not allowed.\n";
//        break;
//    default:
//        std::cout << "Error: Invalid operation.\n";
//    }
//
//    return 0;
//}
