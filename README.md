Number Guessing Game

Overview
->This is a simple Number Guessing Game built using C++. The program generates a random number between 1 and 100, and the player has a limited number of attempts to guess the correct number.

Features
1.Random number generation using rand().
2.User input validation to handle incorrect entries.
3.Limited number of guesses (default: 7 attempts).
4.Keeps track of total wins and losses.
5.Option to play multiple rounds.

How to Play
1.The game will randomly generate a number between 1 and 100.
2.You have 7 chances to guess the correct number.
3.After each incorrect guess, the program will provide feedback:
"Too low. Try again."
"Too high. Try again."
4.If you guess correctly, you win!
5.If you run out of guesses, the correct number is revealed.
6.You can choose to play again or exit the game.

Compile and Run
# Compile the code
 g++ -o guessing_game guessing_game.cpp

# Run the executable
 ./guessing_game
