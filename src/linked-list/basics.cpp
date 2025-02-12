// Linked List Basics : 12/02/2025

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node* next;

  Node(){
    this->data = 0;
    this->next = NULL;
  }

  Node(int val){
    this->data = val;
    this->next = NULL;
  }
};

typedef struct Node Node;

void printList(Node* head){
  if(head == NULL){
    cout << "Empty\n";
    return;
  }

  Node* ptr = head;
  while(ptr){
    cout << ptr->data << " ";
    ptr = ptr->next;
  }
  cout << "\n";
}

Node* createListFromArr(int v[], int n){
  if(n==0) return NULL;
  
  Node* head = new Node(v[0]);
  Node* ptr = head;
  for(int i=1;i<n;i++){
    Node* newNode = new Node(v[i]);
    ptr->next = newNode;
    ptr = ptr->next;
  }
  return head;
}

Node* insertAtStart(Node* head,int val){
  Node* newNode = new Node(val);
  if(head == NULL) return newNode;

  newNode->next = head;
  head = newNode;
  return head;
}

Node* insertAtEnd(Node* head, int val){
  Node* newNode = new Node(val);
  if(head==NULL) return newNode;

  Node* ptr = head;

  while(ptr->next !=NULL){
    ptr = ptr->next;
  }

  ptr->next = newNode;
  return head;
}

Node* insertAtK(Node* head, int val, int k){
  int cnt = 0;
  Node* ptr = head;

  while(true){
    cnt++;
    if(cnt==k-1){
      Node* temp = ptr->next;
      Node* newNode = new Node(val);
      ptr->next = newNode;
      newNode->next = temp;
      break;
    }
    ptr = ptr->next;
  }
  return head;
}

Node* insert(Node* head, int val, int k){
  Node* newNode = new Node(val);
  if(k==0){
    // insert at start
    newNode->next = head;
    head = newNode;
    return head;
  }
  
  int cnt = 0;
  Node* ptr = head;
  while(true){
    cnt++;
    if(cnt==k-1){
      Node* temp = ptr->next;
      ptr->next = newNode;
      newNode->next = temp;
      break;
    }
    ptr = ptr->next;
  }
  
  return head;
}

int main(){
  int arr[] = {10,24,13,11,5};
  Node* head = createListFromArr(arr,5);
  //head = insertAtStart(head,2);
  head = insert(head,2,0);
  printList(head);
  //head = insertAtEnd(head,20);
  head = insert(head,20,6);
  printList(head);
  // head = insertAtK(head,100,3);
  head = insert(head,100,3);
  printList(head);
  return 0;
}
