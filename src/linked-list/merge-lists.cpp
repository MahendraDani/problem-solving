/*
Date : 31.03.2025
Merge two sorted linked lists
https://leetcode.com/problems/merge-two-sorted-lists/description/
*/

#include "linked-list.h"

Node* merge(Node* p1, Node* p2){
  if(p1==NULL || p2 == NULL){
    return p1==NULL ? p2 : p1;
  }

  if(p1->data <= p2->data){
    p1->next = merge(p1->next,p2);
    return p1;
  }

  p2->next = merge(p1,p2->next);
  return p2;
}

int main(){
  vector<int> v1 {1,2,4};
  Node* list1 = createFromVec(v1);
  vector<int> v2 {1,3,4};
  Node* list2 = createFromVec(v2);

  Node* ans = merge(list1,list2);
  printList(ans);
  return 0;
}
