#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
  
  Node(){
    this->data = 0;
    this->next = nullptr;
  }

  Node(int val){
    this->data = val;
    this->next = nullptr;
  }

  Node(int val, Node* other){
    this->data = val;
    this->next = other;
  }
};

typedef struct Node Node;

Node* insertAtStart(int data, Node* head){
  Node* newNode = new Node(data);
  newNode->next = head;
  head = newNode;
  return head;
}

Node* insertAtEnd(int data, Node* head){
  Node* newNode = new Node(data);
  Node* ptr = head;
  while(ptr->next !=NULL) {
    ptr = ptr->next;
  }

  // ptr points to NULL below (at last node of linked list)
  ptr->next = newNode;
  return head;
}

Node* insertAtK(int data, Node* head, int position){
  Node* newNode = new Node(data);
  int count = 1;
  Node* prev = head;
  while(count < position-1){
    prev->next = prev;
    count++;
  }

  newNode->next = prev->next;
  prev->next = newNode;
  return head;
}

void print(Node* head){
  Node* ptr = head;
  while(ptr != NULL){
    cout << ptr->data << " -> ";
    ptr = ptr->next;
  }
  cout << "\n";
}

int main(){
  
  Node* head = new Node(15);
  head = insertAtStart(20,head);
  head = insertAtEnd(50,head);
  head = insertAtK(75,head,2);
  print(head);
  return 0;
}
