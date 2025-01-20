#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int a1,a2,a4,a5;
  cin >> a1 >> a2 >> a4 >> a5;

  int a3 = a1 + a2;
  int ans = 1;
  if(a4 == a2 + a3) ans++;

  if(a5 == a3 + a4) ans++;

  int x = (a5-a2)/2;
  int ans2 = 0;
  
  if(x == a1 + a2) ans2++;
  if(a4 == x + a2) ans2++;
  if(a5 == a4 + x) ans2++;

  // cout << a3 << " " << x  << "\n";

  cout << max(ans,ans2)  << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
