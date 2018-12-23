#include <iostream>
using namespace std;

struct node{       //Linked List Node
  int dataVal;
  node* nextPtr;
  node* prevPtr;
};

class LinkedList{    //Linked List Class
  public:
    LinkedList();   //Constructor
    void ListAppend(int);     //List Functions
    void InsertAfter(int, int);
    void ListRemove(int);
    void PrintList();
    void ReversePrintList();
    node* GetNextPtr(node*);
    node* GetPrevPtr(node*);
  private:
    node* headPtr;    //List Head
    node* tailPtr;    //List Tail
};

LinkedList::LinkedList() {
  this->headPtr = nullptr;
  this->tailPtr = nullptr;
}

void LinkedList::ListAppend(int number) {
  node* listMember;
  listMember = new node;
  listMember->dataVal = number;
  listMember->nextPtr = nullptr;
  listMember->prevPtr = nullptr;
  if (headPtr == nullptr) { // List empty
    headPtr = listMember;
    tailPtr = listMember;
  }
  else{
    tailPtr->nextPtr = listMember;
    listMember->prevPtr = tailPtr;
    tailPtr = listMember;
  }
  return;
}

void LinkedList::ListRemove(int number) {
  node* sucNode;
  node* predNode;
  node* currObj = nullptr;
  currObj = headPtr;
   while (currObj->dataVal != number) {
    currObj = GetNextPtr(currObj);
  }

  sucNode = currObj->nextPtr;
  predNode = currObj->prevPtr;
  if (sucNode != nullptr) {
    sucNode->prevPtr = predNode;  
  }
  
  if (predNode != nullptr) {
    predNode->nextPtr = sucNode;
  }
  
  if (currObj == headPtr) { // Removed head
    headPtr = sucNode;
  }
  
  if (currObj == tailPtr) { // Removed tail
    tailPtr = predNode;
}
  return;
}

void LinkedList::InsertAfter(int number, int newNumber) {
  node* newPointer;
  newPointer = new node;
  newPointer->dataVal = newNumber;
  newPointer->nextPtr = nullptr;
  newPointer->prevPtr = nullptr;
  node* currObj = nullptr;
  currObj = headPtr;
  while (currObj->dataVal != number) {
    currObj = GetNextPtr(currObj);
  }

  if (headPtr == nullptr) { // List empty
    headPtr = newPointer;
    tailPtr = newPointer;
  }

  else if (currObj == tailPtr) {
    tailPtr->nextPtr = newPointer;
    newPointer->prevPtr = tailPtr;
    tailPtr = newPointer;
  }

  else {
    node* sucNode;
    sucNode = currObj->nextPtr;
    newPointer->nextPtr = sucNode;
    newPointer->prevPtr = currObj;
    currObj->nextPtr = newPointer;
    sucNode->prevPtr = newPointer;
  }
  return;
}

node* LinkedList::GetNextPtr(node* pointer) {
  return pointer->nextPtr;
}

node* LinkedList::GetPrevPtr(node* pointer) {
  return pointer->prevPtr;
}

void LinkedList::PrintList(){
  node* currObj = nullptr;
  currObj = headPtr;
   while (currObj != nullptr) {
    cout << currObj->dataVal;
    currObj = GetNextPtr(currObj);
    if (currObj != nullptr)
      cout << " ";
   }
  return;
}

void LinkedList::ReversePrintList(){
  node* currObj = nullptr;
  currObj = tailPtr;
   while (currObj != nullptr) {
    cout << currObj->dataVal << endl;
    currObj = GetPrevPtr(currObj);
   }
  return;
}

int main() {
  LinkedList DoublyLinkedList;
  DoublyLinkedList.ListAppend(43);
  DoublyLinkedList.InsertAfter(43,0);
  DoublyLinkedList.InsertAfter(0,2);
  DoublyLinkedList.InsertAfter(2,7);
  DoublyLinkedList.InsertAfter(0,-1);
  DoublyLinkedList.ListAppend(-4);
  DoublyLinkedList.ListRemove(-1);
  DoublyLinkedList.PrintList();

  return 0;
}
