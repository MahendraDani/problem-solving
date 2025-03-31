#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <vector>
using namespace std;

typedef struct Node {
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
} Node;

void printList(Node* head){
  if(head == NULL){
    cout << "empty\n";
    return;
  }
  Node* curr = head;
  while(curr!=NULL){
    cout << (curr->data) << " ";
    curr = curr->next;
  }
  cout << "\n";
}

Node* createFromVec(vector<int> v){
  if(v.empty()) return NULL;
  Node* head = new Node(v[0]);
  Node* curr = head;
  for(int i=1;i<v.size();i++){
    curr->next = new Node(v[i]);
    curr = curr->next;
  }
  return head;
}

Node* reverse(Node* head){
  if(head == NULL) return NULL;
  Node* Prev = NULL;
  Node* Next = NULL;
  Node* curr = head;
  while(curr!=NULL){
    Next = curr->next;
    curr->next = Prev;
    Prev = curr;
    curr = Next;
  }
  return Prev;
}

Node* insertAtEnd(Node* head,int val){
  Node* newNode = new Node(val);
  if(head == NULL) return newNode;

  Node* curr = head;
  while(curr->next != NULL){
    curr = curr->next;
  }
  curr->next = newNode;
  return head;
}

Node* insertAtFront(Node* head, int val){
  Node* newNode = new Node(val);
  if(head == NULL) return newNode;

  newNode->next = head;
  head = newNode;
  return head;
}

Node* deleteAtFront(Node* head){
  if(head == NULL) return NULL;
  Node* temp = head;
  head = head->next;

  temp->next = NULL;
  free(temp);
  return head;
}

Node* deleteAtEnd(Node* head){
  if(head == NULL) return NULL;
  Node* curr = head;
  Node* prev = NULL;
  while(curr->next !=NULL){
    prev = curr;
    curr = curr->next;
  }

  prev->next = NULL;
  free(curr);
  return head;
}

#endif
