#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(){
  int m,a,b,c;
  cin >> m >> a >> b >> c;
  
  int alloc1 = min(m,a);
  int alloc2 = min(m,b);
  
   cout << alloc1 + alloc2 + min(2*m - alloc1 - alloc2,c) << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}
