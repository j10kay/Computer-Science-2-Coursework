#ifndef SORT_H
#define SORT_H
#include <vector>

class Sort {
  public:
    template <typename AllTypes>
    static void InsertionSort(vector<AllTypes>); //Function Prototype for Insertion Sort
    template <typename AllTypes>
    static void SelectionSort(vector<AllTypes>); //Function Prototype for Selection Sort
};

#endif
