// Date : 03.01.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int x1,x2,x3;
  cin >> x1 >> x2 >> x3;

  int mn = INT_MAX;
  for(int i=min({x1,x2,x3}); i <=max({x1,x2,x3}); i++){
    mn = min(mn, abs(i-x1) +abs(i-x2) + abs(i-x3));
  }
  cout << mn << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
