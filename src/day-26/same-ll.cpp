#include <iostream>
#include <vector>
using namespace std;

struct Node {
  int data;
  Node* next;

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

bool isSameLL(Node* list1, Node* list2){
  Node* l1 = list1;
  Node* l2 = list2;

  while(l1!=NULL && l2!=NULL){
    if(l1->data != l2->data) return false;
    l1 = l1->next;
    l2 = l2->next;
  }

  return (l1==NULL && l2==NULL);
}

Node* createLLFromVec(vector<int> v){
  if(v.size()==0) return NULL;
  Node* head = new Node(v[0]);
  Node* mover = head;
  for(int i=1;i<v.size();i++){
    Node* newNode = new Node(v[i]);
    mover->next = newNode;
    mover = mover->next;
  }
  return head;
}

void printLL(Node* head){
  if(head == NULL) return;

  Node* ptr = head;

  while(ptr->next !=NULL){
    cout << ptr->data << "->";
    ptr = ptr->next;
  }
  cout << ptr->data << "\n";
}

Node* reverseLL(Node* head){
  if(head->next==NULL || head == NULL){
    return head;
  }

  int val = head->data;
  Node* newList = reverseLL(head->next);
  Node* ptr = newList;
  while(ptr->next!=NULL){
    ptr = ptr->next;
  }
  Node* newNode = new Node(val);
  ptr->next = newNode;
  return newList;
}

Node* reverse(Node* head){
  if(head == NULL || head->next == NULL) return head;

  Node* newHead = reverse(head->next);
  Node* front = head->next;
  front->next = head;
  head->next = NULL;
  return newHead;
}

int main(){
  vector<int> v{1,34,5,10};
  Node* head = createLLFromVec(v);
  printLL(head);

  Node* revHead = reverse(head);
  printLL(revHead);
  return 0;
}
