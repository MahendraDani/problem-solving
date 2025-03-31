// Date : 31.03.2025
// Minimizing coins
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int n,x;
  cin >> n >> x;

  vector<int> c(n);
  for(int i=0;i<n;i++) cin >> c[i];

  // t[k] = min number of coins to get sum k

  vector<int> t(x+1,1e9);

  t[0] = 0;
  for(int i=1;i<x+1;i++){
    for(int j=0;j<n;j++){
      if(c[j] <= i){
        t[i] = min(t[i],t[i-c[j]] + 1);
      }
    }
  }

  cout << (t[x] < 1e9 ? t[x] : -1) << "\n";
}

int main(){
  solve();
  return 0;
}
