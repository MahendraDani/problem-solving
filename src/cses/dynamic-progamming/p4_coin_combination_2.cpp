// Date : 01.04.2025
// Coin Combination II
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

#define MOD 1000000007

using namespace std;

void solve(){
  int n,x;
  cin >> n >> x;

  vector<int> c(n);
  for(int i=0;i<n;i++){
    cin >> c[i];
  }

  vector<vector<int>> t(n+1,vector<int>(x+1));

  // t[i][k] represents the number of ways to get sum k where coins
  // i to n are usable and coins before i are unusable

  for(int i=0;i<n;i++){
    t[i][0] = 1; // base case
  }

  for(int i=n-1;i>=0;i--){
    for(int k=1;k<=x;k++){
      int skip = t[i+1][k];
      int pick = 0;
      if(c[i] <= k){
        pick = t[i][k-c[i]];
      }
      t[i][k] = (pick + skip)%MOD;
    }
  }

  cout << t[0][x] << "\n";
}

int main(){
  solve();
  return 0;
}
