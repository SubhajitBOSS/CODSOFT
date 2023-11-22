#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    // Initialize the user's guess
    int userGuess = 0;

    std::cout << "Welcome to the Guess the Number game!" << std::endl;
    std::cout << "I have chosen a number between 1 and 100. Try to guess it." << std::endl;

    while (userGuess != secretNumber) {
        // Get the user's guess
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        // Provide feedback on the guess
        if (userGuess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (userGuess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the correct number, " << secretNumber << "!" << std::endl;
        }
    }

    return 0;
}
