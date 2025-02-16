#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node* next;

  Node(int val){
    data = val;
    next = NULL;
  }
};

class List {
  Node* head;
  Node* tail;

public:
  List(){
    head = tail = NULL;
  }  

  void push_front(int val){
    Node* newNode = new Node(val);
    if(head == NULL){
      head = tail = newNode;
      return;
    }
    newNode->next = head;
    head = newNode;
  }

  void push_back(int val){
    Node* newNode = new Node(val);
    if(head==NULL){
      head = tail = newNode;
      return;
    }

    tail->next = newNode;
    newNode = tail;
  }

  int pop_front(){
    if(head == NULL) return -1;
    Node* temp = head;
    head = head->next;
    int val = temp->data;
    temp->next = NULL;
    free(temp);
    return val;
  }

  int pop_back(){
    if(head == NULL) return -1;
    Node* ptr = head;
    while (ptr->next!=tail)
    {
      ptr = ptr->next;
    }
    ptr->next = NULL;
    int val = tail->data;
    free(tail);
    tail = ptr;
    return val;
  }

  void print(){
    if(head == NULL){
      cout << "Empty\n";
      return;
    }
    Node* temp = head;
    while(temp!=NULL){
      cout << temp->data << "->";
      temp = temp->next;
    }
    cout << "NULL\n";
  }

};

int main(){
  List list;

  list.push_front(1);
  list.push_front(2);
  list.push_front(3);

  list.push_back(10);
  list.push_back(14);

  list.print();

  // list.pop_front();

  // list.print();

  list.pop_back();

  list.print();
  return 0;
}