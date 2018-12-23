#include <iostream>
#include <list>
using namespace std;

#include "Queue.h"

Queue::Queue(){
  this->firstNumber = 0;
  this->secondNumber = 0;
}

Queue::Queue(float first_number, float second_number){
  this->firstNumber = first_number;
  this->secondNumber = second_number;
}

void Queue::multiply(){
  this->results.push_back(this->firstNumber*this->secondNumber);
  this->operations.pop_front();
  return;
}

void Queue::add(){
  this->results.push_back(this->firstNumber+this->results.back());
  this->operations.pop_front();
  return;
}

void Queue::divide(){
  this->results.push_back(this->results.back()/this->secondNumber);
  this->operations.pop_front();
  return;
}

void Queue::subtract(){
  this->results.push_back(this->results.back()-this->firstNumber);
  this->operations.pop_front();
  return;
}

void Queue::printOutput(){
  cout << "The result is " << this->results.back() << endl;
  return;
}

void Queue::pushToQueue(){
  this->operations.push_back('*');
  this->operations.push_back('+');
  this->operations.push_back('/');
  this->operations.push_back('-');
}
