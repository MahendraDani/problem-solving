// Date : 31.03.2025
// Dice Combinations
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

int MOD = (int)(1e9 + 7);

void solve(){
  int n;
  cin >> n;

  vector<int> t(n+1);

  // t[i] = number of ways to get sum i

  t[0] = 1; // number of ways to get sum 0 is only 1 i.e to not throw thedice
  for(int i=1;i<n+1;i++){
    for(int j=1;j<=6;j++){
      if(j <=i ){
        t[i] = (t[i] + t[i-j]) % MOD;
      }
    }
  }

  cout << t[n] << "\n";
}

int main(){
  solve();
  return 0;
}
