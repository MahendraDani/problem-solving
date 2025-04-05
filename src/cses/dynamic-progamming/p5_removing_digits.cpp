// Date : 05.04.2025
// Removing Digits
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int n;
  cin >> n;

  vector<int> t(n+1,1e9);

  // t[k] = min number of steps requried to turn k into 0
  t[0] = 0; // min number of steps to convert 0 into 0 is 0;
  
  for(int i=1;i<=n;i++){
    string s = to_string(i);
    for(char c:s){
      int digit = c-'0';
      if(digit!=0){
        t[i] = min(t[i],t[i-digit]+1);
      }
    }
  }

  cout << t[n] << "\n";
}

int main(){
  solve();
  return 0;
}
