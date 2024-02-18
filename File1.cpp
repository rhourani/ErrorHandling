//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//
//int guessGame() {
//    srand(time(0)); // seed random number generator
//    int number = rand() % 100 + 1; // generate random number between 1 and 100
//    int guess, attempts = 0;
//
//    std::cout << "Welcome to the number guessing game!\n";
//    std::cout << "I'm thinking of a number between 1 and 100.\n";
//
//    do {
//        std::cout << "Enter your guess: ";
//        std::cin >> guess;
//        attempts++;
//
//        if (guess > number) {
//            std::cout << "Too high! Try again.\n";
//        }
//        else if (guess < number) {
//            std::cout << "Too low! Try again.\n";
//        }
//    } while (guess != number);
//
//    std::cout << "Congratulations! You found the number in " << attempts << " attempts.\n";
//
//    return 0;
//}
