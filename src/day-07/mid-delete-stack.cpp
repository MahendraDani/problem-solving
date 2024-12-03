/*
Delete middle element of a stack using recursion
watch https://www.youtube.com/watch?v=oCcUNRMl7dA&list=PL_z_8CaSLPWeT1ffjiImo0sYTcnLzo-wY&index=8 
*/  

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>& s,int k){
  if(k==1){
    return;
  }

  int temp = s.top();
  s.pop();
  solve(s,k-1);
  s.push(temp);
}

stack<int> deleteMid(stack<int>& s, int size){
  if(s.empty()){
    cout << "Stack is empty\n";
    stack<int> emptyStack;
    return emptyStack;
  }
  
  int k = size/2 + 1;
  solve(s,k);
  return s;
}

void printStack(stack<int> s){
  while(!s.empty()){
    cout << s.top() << "\n";
    s.pop();
  }
}

int main(){
  stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);

  stack<int> afterDelete = deleteMid(s,s.size());
  printStack(afterDelete);

}
