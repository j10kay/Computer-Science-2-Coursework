#ifndef SEARCH_H
#define SEARCH_H
#include <vector>

template <typename AllTypes>
class Search {
  public:
    Search(vector<AllTypes>);  //Non-default Constructor
    int LinearSearch(AllTypes); //Function Prototype for Linear Search
    int BinarySearch(AllTypes); //Function Prototype for Binary Search
  private:
    vector<AllTypes> searchList; //Vector to store input of different types
};

#endif
