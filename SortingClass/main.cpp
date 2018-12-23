#include <iostream>
#include <vector>
using namespace std;
#include "Sort.h"
#include "Sort.cpp"

int main() {
  //Vector Declarations and Initializations
  vector<int> numberList;
  numberList = {1, 5, 7, 8, -1};
  vector<float> floatList;
  floatList = {9.6, 0.3338, 0.5, 2.5, 7.2};
  vector<char> charList;
  charList = {'o','a','b','i','l'};

  cout << "Insertion Sort:" << endl;
  Sort::InsertionSort(numberList);
  Sort::InsertionSort(floatList);
  Sort::InsertionSort(charList);
  
  cout << endl;
  cout << "Selection Sort:" << endl;
  Sort::SelectionSort(numberList);
  Sort::SelectionSort(floatList);
  Sort::SelectionSort(charList);

  return 0;
}
