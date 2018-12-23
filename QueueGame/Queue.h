#ifndef QUEUE_H
#define QUEUE_H

class Queue{
  public:
    Queue();
    Queue(float, float);
    void multiply();
    void add();
    void divide();
    void subtract();
    void printOutput();
    void pushToQueue();
  private:
    list<char> operations;  //list of operations
    list<float> results;  //list of intermediate and final results
    float firstNumber;
    float secondNumber;
};

#endif
