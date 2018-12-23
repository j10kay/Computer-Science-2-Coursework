#include <iostream>
#include <vector>
using namespace std;
#include "Search.h"
#include "Search.cpp"

int main() {
  //Vector Declarations and Initializations
  vector<int> numberList;
  numberList = {-1, 1, 5, 7, 8};
  vector<float> floatList;
  floatList = {0.3338, 0.5, 2.5, 7.2, 9.6};
  vector<string> stringList;
  stringList = {"anteater", "cat", "giraffe", "lion", "octopus"};
  vector<char> charList;
  charList = {'a', 'b', 'i', 'l', 'o'};
  
  //Class Objects
  Search<int> numbers(numberList); 
  Search<float> floats(floatList);
  Search<string> strings(stringList);
  Search<char> characters(charList);
  
  //Linear Searches on different class objects
  cout << "LinearSearch:" << endl;
  cout << numbers.LinearSearch(12) << endl;
  cout << floats.LinearSearch(6.543) << endl;
  cout << strings.LinearSearch("lion") << endl;
  cout << characters.LinearSearch('o') << endl << endl;
  
  //Binary Searches on different class objects
  cout << "BinarySearch:" << endl;
  cout << numbers.BinarySearch(12) << endl;
  cout << floats.BinarySearch(6.543) << endl;
  cout << strings.BinarySearch("lion") << endl;
  cout << characters.BinarySearch('o');
  return 0;
}
