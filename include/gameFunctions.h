
#ifndef GAME_FUNCTIONS_H
#define GAME_FUNCTIONS_H
//TODO: define, document, and implement this function
initializeBlankString();

//TODO: define, document, and implement this function
printWithSpaces();

//TODO: define, document, and implement this function
revealGuessedLetter();

//TODO: define, document, and implement this function
checkGuess();


//the following functions have been done for you.

/**
 * Sets the game up, checks for win condition,
 * prints relevant data
 */
void startGame(char *wordToGuess);

/**
 * Clears the unix terminal of previous input
 */
void clearScreen();

/**
 * Prints part of the horse based on the ratio between
 * the two numbers.
 */
void drawHorse(int guessedSoFar, int allowedGuesses);
void initializeBlankString(int length, char *str);
void printWithSpaces(const char *str);
int revealGuessedLetter(const char *solution, char *revealed, char guessedLetter);
int checkGuess(const char *str1, const char *str2);
#endif 