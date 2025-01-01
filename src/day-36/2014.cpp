// Date : 01.01.2025
// Robin Hood and Major Oak Tree (Div 3 B Grind)
// 7:41 PM - 
//

#include <iostream>
#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve(){
  ll n,k;

  ll ans = 0;

  for(int i=1;i<=n;i++){
    if(n<=i+k-1){
      ans+= pow(i,i);
    }
  }

  cout << (ans%2==0 ? "YES" : "NO") << "\n";
}

int main(){
  int t;
  cin >> t;

  while(t--){
    solve();
  }
  return 0;
}
