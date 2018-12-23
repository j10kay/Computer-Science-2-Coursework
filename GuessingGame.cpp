/*
 * Chijioke Kamanu
 * @02840667
 *
 * Algorithm for Guessing Game
 * Step 1: Pick a upper and lower bound for a random number 
 * Step 2: Generate a random number between lower bound and upper bound 
 * Step 3: Store the random number in a variable
 * Step 4: Obtain input(guess) from the user
 * Step 5: Compare user guess to random number
 * Step 6: Give user hints based on how high or low guess is
 * Step 7: Take successive guesses and compare them to random number; terminate after all guesses are exhausted, then tell the user the correct number.
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
   int randomNumber;
   int userGuess;
   srand(time(0));
   randomNumber = (rand() % 10) + 1;  // 1 to 10

  cout << "Enter a number between 0 and 11" << endl;
   for (int i = 0; i < 3; i++){     //Set up loop to limit number of attempts to 3
       cout << "Guess " << (i+1) << ": ";
       cin >> userGuess;            //Obtain user guess
       if ((3-i) == 1) {
          if (userGuess != randomNumber) {    //If user has no attempts left
            cout << "Wonk wonk! Out of tries! The correct number is " << randomNumber << endl;
            return 0;
          }
       }
       if (userGuess == randomNumber) {      //Compare guess to random number
           cout << "Good job! You're psychic!" << endl;
           return 0;
       }
        else if (userGuess < randomNumber) {
            cout << "Getting close! Guess higher" << endl;
        }
        else {
            cout << "Getting close! Guess lower" << endl;
        }
    }
   return 0;
}
