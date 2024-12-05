/*
Date : 04/12/2024
https://www.geeksforgeeks.org/problems/print-pattern3549/1?page=1&category=Recursion&sortBy=submissions

Input : 16
Output : 16 11 6 1 -4 1 6 11 16

Input : -16
Output : -16

IBH method for solution
Time - O(N)
Space - O(N)
*/

#include<iostream>
#include<vector>
using namespace std;

void solve(int n, vector<int>& v){
  if(n<=0){
    v.push_back(n);
    return;
  }

  solve(n-5,v);
  v.insert(v.begin()+0,n);
  v.push_back(n);
}

int main(){
  int n;
  cin >> n;
  vector<int> ans;
  solve(n,ans);
  for(auto x : ans){
    cout << x << " ";
  }
  cout << "\n";
}
