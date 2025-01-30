#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <limits>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber, userGuess, guessLimit, guessesTaken, totalWins = 0, totalLosses = 0;
    char playAgain;
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "You will have a limited number of guesses to find the secret number." << endl;
    do {
        secretNumber = rand() % 100 + 1; 
        guessLimit = 7; 
        guessesTaken = 0;
        cout << "\nI'm thinking of a number between 1 and 100. You have " << guessLimit << " guesses." << endl;
        bool hasWon = false;
        while (guessesTaken < guessLimit) {
            cout << "Enter your guess: ";
            cin >> userGuess;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "Please enter a valid number." << endl;
                continue;
            }
            guessesTaken++;
            if (userGuess < secretNumber) {
                cout << "Too low. Try again." << endl;
            }
            else if (userGuess > secretNumber) {
                cout << "Too high. Try again." << endl;
            }
            else {
                cout << "Congratulations! You guessed the number in " << guessesTaken << " guesses!" << endl;
                totalWins++;
                hasWon = true;
                break;
            }
        }

        if (!hasWon) {
            cout << "Sorry, you've run out of guesses. The number was " << secretNumber << "." << endl;
            totalLosses++;
        }
        cout << "Would you like to play again? (y/n): ";
        cin >> playAgain;
        cout << endl;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Your win/loss record is: " << totalWins << " wins, " << totalLosses << " losses." << endl;
    cout << "Thanks for playing!" << endl;

    return 0;
}
