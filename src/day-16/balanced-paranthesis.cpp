/*
Date : 03/12/2024
Problem : Generate balanced paranthesis
https://www.youtube.com/watch?v=eyCj_u3PoJE&list=PL_z_8CaSLPWeT1ffjiImo0sYTcnLzo-wY&index=17
*/  

#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

template<typename T>
void printVec(T& v){
  for(auto x : v){
    cout << x << " ";
  }

  cout << "\n";
}

void solve(int open, int close, string op, vector<string>& v){
  if(open==0 && close==0){
    v.push_back(op);
    return;
  }

  if(open!=0){
    solve(open-1,close,op + '(',v);
  }

  if(close > open){
    solve(open,close-1,op + ')',v);
  }
}

int main(){
  int n;
  cin >> n;

  vector<string> v;
  int open = n;
  int close = n;
  string op = "";
  solve(open,close,op,v);
  printVec(v);
}
