/*
Reverse an array using recursion
*/  

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void myReverse(vector<int>& v){
  if(v.size()==1){
    return;
  }

  int temp = v[v.size()-1];
  v.pop_back();
  myReverse(v);
  v.insert(v.begin(),temp);
}

void printVec(vector<int> &v){
  for(auto x: v) cout << x << " ";
  cout << "\n";
}

int main(){
  vector<int> v {1,10,5,2,7};
  printVec(v);
  myReverse(v);
  printVec(v);
}
