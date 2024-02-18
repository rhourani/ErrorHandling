#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string file1, file2, file3;
    std::cout << "Enter the first file name: ";
    std::cin >> file1;
    std::cout << "Enter the second file name: ";
    std::cin >> file2;
    std::cout << "Enter the output file name: ";
    std::cin >> file3;

    std::ifstream in1(file1), in2(file2);
    std::ofstream out(file3);

    if (!in1.is_open()) {
        std::cerr << "Error opening file: " << file1 << std::endl;
        return 1;
    }
    if (!in2.is_open()) {
        std::cerr << "Error opening file: " << file2 << std::endl;
        return 2;
    }
    if (!out.is_open()) {
        std::cerr << "Error opening file: " << file3 << std::endl;
        return 3;
    }

    std::string line1, line2;
    while (true) {
        if (!std::getline(in1, line1)) {
            if (in1.bad()) {
                std::cerr << "Error reading file: " << file1 << std::endl;
                return 4;
            }
            break;
        }
        out << line1 << '\n';

        if (!std::getline(in2, line2)) {
            if (in2.bad()) {
                std::cerr << "Error reading file: " << file2 << std::endl;
                return 5;
            }
            break;
        }
        out << line2 << '\n';
    }

    return 0;
}
