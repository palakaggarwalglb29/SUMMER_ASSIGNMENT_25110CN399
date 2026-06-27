#include <iostream>
#include <cstdlib> // Needed for rand() and srand()
#include <ctime>   // Needed for time()

using namespace std;

int main() {
    // Seed the random number generator using the current time
    srand(static_cast<unsigned int>(time(0)));
    
    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int userGuess = 0;
    int attempts = 0;

    cout << "=========================================\n";
    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I have picked a number between 1 and 100.\n";
    cout << "=========================================\n\n";

    // Loop continues until the player guesses the correct number
    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++; // Increment the number of tries

        if (userGuess > secretNumber) {
            cout << "Too high! Try a lower number.\n\n";
        } 
        else if (userGuess < secretNumber) {
            cout << "Too low! Try a higher number.\n\n";
        } 
        else {
            cout << "🎉 Congratulations! You guessed the correct number!\n";
            cout << "It took you " << attempts << " attempts.\n";
        }

    } while (userGuess != secretNumber);

    
}
