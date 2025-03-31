/*
Date : 31.03.2025
Remove duplicates from sorted list
*/

#include "linked-list.h"

Node* removeDuplicates(Node* head){
  if(head == NULL) return NULL;

  Node* Curr = head;
  Node* Next = NULL;

  while(Curr!=NULL){
    Next = Curr->next;
    while(Next!=NULL && Curr->data == Next->data){
      Node* temp = Next;
      Next = Next->next;
      free(temp);
    }
    Curr->next = Next;
    Curr = Curr->next;
  }
  return head;
}

int main(){
  vector<int> v{1,1,2,3,3,};
  Node* head = createFromVec(v);
  Node* ans = removeDuplicates(head);
  printList(ans);
  return 0;
}
