#include <iostream>
#include <vector>
using namespace std;

struct Node {
  int data;
  Node* next;

  Node(int val){
    this->data = val;
    this->next = nullptr;
  }
};

typedef struct Node Node;

Node* create(vector<int> arr){
  if(arr.size()==0) return NULL;
  Node* head = new Node(arr[0]);
  Node* temp = head;
  for(int i=1;i<arr.size();i++){
    Node* newNode = new Node(arr[i]);
    temp->next = newNode;
    temp = temp->next;
  }
  return head;
}

void display(Node* head){
  Node* ptr = head;
  while(ptr!=nullptr){
    cout << ptr->data << " ";
    ptr = ptr->next;
  }
  cout << "\n";
}

void displayRecursive(Node* head){
  if(head == NULL) {
    cout << "\n";
    return;
  }
  cout << head->data << " ";
  displayRecursive(head->next);
}

int countNodes(Node* head){
  int count = 0;
  Node* temp = head;
  while(temp!=NULL){
    count++;
    temp = temp->next;
  }
  return count;
}

int findMiddle(Node* head){
  Node* slow = head;
  Node* fast = head;
  while(fast!=NULL && fast->next!=NULL){
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow->data;
}

void insertAtStart(Node* &head, int data){
  Node* newNode = new Node(data);
  if(head==NULL) {
    head = newNode;
    return;
  }
  newNode->next = head;
  head = newNode;
}

int main(){
  vector<int> v {1,5,6,10,14};
  Node* head = create(v);
  display(head);
  displayRecursive(head);
  cout << findMiddle(head) << endl;
  insertAtStart(head,1003);
  display(head);
  return 0;
}
