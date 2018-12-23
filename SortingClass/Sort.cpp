#include <iostream>
#include <vector>
using namespace std;
#include "Sort.h"

template<typename AllTypes>
void Sort::InsertionSort(vector<AllTypes> inputArray){
  int i;
  int j;
  AllTypes temp;      // Temporary variable for swap
  
  for (i = 1; i < inputArray.size(); ++i) {
    j = i;
    // Insert numbers[i] into sorted part
    // stopping once numbers[i] in correct position
    while (j > 0 && inputArray.at(j) < inputArray.at(j-1)) {
        
        //Swap
        temp = inputArray.at(j);
        inputArray.at(j) = inputArray.at(j-1);
        inputArray.at(j-1) = temp;
        --j;
    }
  }
  for (int i = 0; i < inputArray.size(); i++){
    cout << inputArray.at(i) << " ";
  }
  cout << endl;
  return;
}

template <typename AllTypes>
void Sort::SelectionSort(vector<AllTypes> inputArray){
  int i;
  int j;
  int indexSmallest;
  AllTypes temp;      // Temporary variable for swap
  
  for (i = 0; i < inputArray.size() - 1; ++i) {
    
    // Find index of smallest remaining element
    indexSmallest = i;
    for (j = i + 1; j < inputArray.size(); ++j) {
        
        if ( inputArray.at(j) < inputArray.at(indexSmallest) ) {
          indexSmallest = j;
        }
    }
    
    // Swap numbers[i] and numbers[indexSmallest]
    temp = inputArray.at(i);
    inputArray.at(i) = inputArray.at(indexSmallest);
    inputArray.at(indexSmallest) = temp;
  }
  for (int i = 0; i < inputArray.size(); i++){
    cout << inputArray.at(i) << " ";
  }
  cout << endl;
  return;
}
