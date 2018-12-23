#include <iostream>
using namespace std;

#include "IntNode.cpp"

struct node{       //Linked List Node
  int dataVal;
  node* nextPtr;
};

class LinkedList{    //Linked List Class
  public:
    LinkedList();   //Constructor
    void ListAppend(int);     //List Functions
    void ListPrepend(int);
    void ListTraverse(node*);
    void PrintList();
    node* GetNextPtr(node*);
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
  if (headPtr == nullptr) { // List empty
    headPtr = listMember;
    tailPtr = listMember;
  }
  else{
    tailPtr->nextPtr = listMember;
    tailPtr = listMember;
  }
  return;
}

void LinkedList::ListPrepend(int number) {
  node* listMember;
  listMember = new node;
  listMember->dataVal = number;
  listMember->nextPtr = nullptr;
  if (headPtr == nullptr) { // List empty
    headPtr = listMember;
    tailPtr = listMember;
  }
  else{
    listMember->nextPtr = headPtr;
    headPtr = listMember;
  }
  return;
}

void LinkedList::ListTraverse(node* pointer){
  node* currObj = nullptr;
  currObj = headPtr;
  while (currObj != nullptr) {
    currObj = GetNextPtr(currObj);
   }
  return;
}

node* LinkedList::GetNextPtr(node* pointer) {
  return pointer->nextPtr;
}

void LinkedList::PrintList(){
  node* currObj = nullptr;
  currObj = headPtr;
   while (currObj != nullptr) {
    cout << currObj->dataVal << endl;
    currObj = GetNextPtr(currObj);
   }
  return;
}

int main() {
  LinkedList SinglyLinkedList;
  SinglyLinkedList.ListAppend(9);
  SinglyLinkedList.ListPrepend(8);
  SinglyLinkedList.ListAppend(10);
  SinglyLinkedList.ListPrepend(5);
  SinglyLinkedList.ListAppend(2);
  SinglyLinkedList.ListAppend(3);
  SinglyLinkedList.ListPrepend(1);
  SinglyLinkedList.PrintList();

  return 0;
}
