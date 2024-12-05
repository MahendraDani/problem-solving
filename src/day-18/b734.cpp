/*
Date : 05/12/2024
https://codeforces.com/problemset/problem/734/B
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void solve(){
  int k2,k3,k5,k6;
  cin >> k2 >> k3 >> k5 >> k6;

  int cnt256 = min({k2,k5,k6});
  k2 -= cnt256;

  cout << (256 * cnt256 + (k2>0 ? (32 * min(k2,k3)) : 0 )) << "\n";
}

int main(){
  solve();
  return 0;
}
