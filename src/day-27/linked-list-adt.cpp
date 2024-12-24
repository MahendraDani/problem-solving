/*
Linked List ADT
class LinkedList

Constructors:
1. LinkedList()
2. LinkedList(LinkedList* other)

Methods:
1. void display()-> prints the linked list
2. int size()-> returns the size of linkedlist
3. void insert(int pos)
4. int delete(int pos)
*/

#include <iostream>
#include <vector>

using namespace std;

class LinkedList {
  public:
  int data;
  LinkedList* next;

  LinkedList(int data){
    this->data = data;
    this->next = NULL;
  }

  LinkedList(LinkedList* other){
    this->next = other;
  }

};

int main(){
  LinkedList* head = new LinkedList(13);
  cout << head->data << "\n";
  return 0;
}
