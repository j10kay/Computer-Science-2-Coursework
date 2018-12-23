#include <iostream>
#include <vector>
using namespace std;
#include "Search.h"

template <typename AllTypes>
Search<AllTypes>::Search(vector<AllTypes> inputVector){ //Non-default constructor
  searchList = inputVector;
}

template <typename AllTypes>
int Search<AllTypes>::LinearSearch(AllTypes key) {  //Linear Search Implementation
  for (int index = 0; index < searchList.size(); index++){
    if (key == searchList[index]){
      return index;
    }
  }
  return -1;
}

template <typename AllTypes>
int Search<AllTypes>::BinarySearch(AllTypes key) {  //Binary Search Implementation
  int mid = 0;
  int low = 0;
  int high = searchList.size() - 1;
  int index = 0;
  while (high >= low) {
    mid = (high + low) / 2;
    if (searchList[mid] < key) {
      low = mid + 1;
    }
    else if (searchList[mid] > key) {
      high = mid - 1;
    }
    else {
      return mid;
    }
    index++;
  }
  return -1;
}
