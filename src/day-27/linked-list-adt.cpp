/*
Linked List ADT
class LinkedList
LinkedList(
*/

#include <iostream>
#include <vector>

class LinkedList {
  public:
  int data;
  LinkedList* next;

  LinkedList(int data){
    this->data = data;
    this->next = NULL;
  }

  LinkedList(const LinkedList* other){
    this->next = other;
  }

  void display(){

  }
}
