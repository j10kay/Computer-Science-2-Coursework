#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int randomNumber;
  int userGuess;
  
  randomNumber = (rand() % 10) + 1;  // 1 to 10
  for (int i = 0; i < 3; i++){
    cout << "Choose a number from 1 to 10. You have " << (3-i) << " guess(es) left!: ";
    cin >> userGuess;
    if ((3-i) == 1) {
      if (userGuess != randomNumber) {
        cout << "Wonk wonk! Out of tries! The correct number is " << randomNumber << endl;
        return 0;
      }
    }
    if (userGuess == randomNumber) {
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
