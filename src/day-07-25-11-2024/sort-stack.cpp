/*
Sort a stack in asc order
Watch https://www.youtube.com/watch?v=MOGBRkkOhkY&list=PL_z_8CaSLPWeT1ffjiImo0sYTcnLzo-wY
*/  

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void myInsert(stack<int>& st, int temp){
  if(st.empty() || st.top()<=temp){
    st.push(temp);
    return;
  }

  int val = st.top();
  st.pop();
  myInsert(st,temp);
  st.push(val);
  return;
}

void mySort(stack<int>& st){
  if(st.size()==1){
    return;
  }

  int temp = st.top();
  st.pop();
  mySort(st);
  myInsert(st,temp);
}

void reverseStack(stack<int>& s){
  if(s.size()==1) return;

  int temp = s.top();
  s.pop();
  reverseStack(s);
  s.push(temp);
}

void printStack(stack<int>& st) {
    // If stack is empty, return
    if (st.empty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    
    // Create a temporary stack to store elements
    stack<int> temp;
    
    // Print elements from top to bottom
    cout << "Stack elements from top to bottom:" << endl;
    
    while (!st.empty()) {
        // Get top element
        int val = st.top();
        cout << val << endl;
        
        // Remove from original and add to temp stack
        st.pop();
        temp.push(val);
    }
    
    // Restore original stack
    while (!temp.empty()) {
        st.push(temp.top());
        temp.pop();
    }
}

int main(){
  stack<int> st;
  st.push(0);
  st.push(5);
  st.push(1);
  st.push(2);
  // mySort(st);
  reverseStack(st);
  printStack(st);
  return 0;
}
