#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int secretNumber = std::rand() % 100 + 1;

    int guess;
    int attempts = 0;

    do {
        std::cout << "Guess the number (between 1 and 100): ";
        std::cin >> guess;

        attempts++;

        if (guess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." << std::endl;
        }
    } while (guess != secretNumber);

    return 0;
}
