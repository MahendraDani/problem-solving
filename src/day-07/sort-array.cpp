/*
Sort an array using recursion
Watch https://www.youtube.com/watch?v=AZ4jEY_JAVc&list=PL_z_8CaSLPWeT1ffjiImo0sYTcnLzo-wY&index=6
*/  

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// insert an element in it's sorted order in an sorted array
// Input : v = {0,1,5} temp = 2
// Output : v = {0,1,2,5}
void myinsert(vector<int>& v,int temp){
  if(v.size()==0 || v[v.size()-1]<=temp){
    v.push_back(temp);
    return;
  }

  int val = v[v.size()-1];
  v.pop_back();
  myinsert(v,temp);
  v.push_back(val);
  return;
}

// sorts an array in asc order
// Input : v = {0,5,2,1}
// Output : v = {0,1,2,5}
void mysort(vector<int>& v){
  if(v.size()==1)
    return;
  
  int temp = v[v.size()-1];
  v.pop_back();
  mysort(v);
  myinsert(v,temp);
}

void printVec(vector<int>& v){
  for(auto x : v){
    cout << x << " ";
  }
  cout << "\n";
}

int main(){
  vector<int> v{1,2,0,5};
  mysort(v);
  printVec(v);
}
