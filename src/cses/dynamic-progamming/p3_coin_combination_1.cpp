// Date : 01.04.2025
// Coin Combinations I
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

int MOD = (int)(1e9 + 7);

void solve(){
  int n,x;
  cin >> n >> x;

  vector<int> c(n);
  for(int i=0;i<n;i++) cin >> c[i];

  vector<int> t(x+1,0);
  // t[k] = number of distinct ways to get sum k from coins c1,c2,c3....,cn

  t[0] = 1;

  for(int i=1;i<=x;i++){
    for(int j=0;j<n;j++){
      if(c[j] <= i){
        t[i] = (t[i] + t[i-c[j]]) % MOD;
      }
    }
  }

  cout << t[x] << "\n";
}

int main(){
  solve();
  return 0;
}
