#include <iostream>
#include <fstream>
#include <string>


int main() {
    std::string file1;
    std::string file2;
    std::string file3;
    std::cout << "Enter the first file name: ";
    std::cin >> file1;
    std::cout << "Enter the second file name: ";
    std::cin >> file2;
    std::cout << "Enter the output file name: ";
    std::cin >> file3;

    std::ifstream in1(file1);
    std::ifstream in2(file2);
    std::ofstream out(file3);


    /*
    File Not Found: is_open().
    Reading/Writing Errors.
    --These errors have no built in function to catch them therefore need third party libs to catch them.
    Insufficient Permissions.
    Incorrect File Path.
    File Open Limit Exceeded, related to operating systems.

    This checks the number of allowed openable files at once in the program defined by the OS
    struct rlimit lim;
    if (_setmaxstdio(RLIMIT_NOFILE, &lim) == 0) needs #include <sys/resource.h> header.

    */



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

    std::string line1;
    std::string line2;
    while (true) {
        if (!std::getline(in1, line1)) {
            if (in1.bad()) {
                std::cerr << "Error reading file: " << file1 << std::endl;
                return 4;
            }
            break;
        }
        out << line1 << '\n';

        if (out.bad()) {
            std::cerr << "Error writing to file: " << file3 << std::endl;
            return 6;
        }

        if (!std::getline(in2, line2)) {
            if (in2.bad()) {
                std::cerr << "Error reading file: " << file2 << std::endl;
                return 5;
            }
            break;
        }
        out << line2 << '\n';

        if (out.bad()) {
            std::cerr << "Error writing to file: " << file3 << std::endl;
            return 7;
        }
    }
    return 0;
}