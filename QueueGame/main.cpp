#include <iostream>
#include <list>
using namespace std;

#include "Queue.h"

int main() {
  string name;
  float firstNumber;
  float secondNumber;

  //cout << "What is your name?" << endl;
  cin >> name;
  //cout << "Enter a number:" << endl;
  cin >> firstNumber;
  //cout << "Enter a second number:" << endl;
  cin >> secondNumber;

  Queue Game_round(firstNumber, secondNumber);
  //Perform operations
  Game_round.pushToQueue();
  Game_round.multiply();
  Game_round.add();
  Game_round.divide();
  Game_round.subtract();
  cout << "Hello " << name << "!" << endl;
  Game_round.printOutput();

  return 0;
}
