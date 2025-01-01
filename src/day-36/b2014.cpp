// Date : 01.01.2025
// Robin Hood and Major Oak Tree (Div 3 B Grind)
// 7:41 PM - 7:45 PM => WA
// 7:45 PM - 7:51 PM => WA

#include <iostream>
#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve(){
  ll n,k;
  cin >> n >> k;

  ll ans = 0;

  for(int i=1;i<=n;i++){
    if(i+k-1>=n){
      ans+= pow(i,i);
      // cout << ans << "\n";
    }
  }

  cout << (ans%2==0 ? "YES" : "NO") << "\n";
}

void editorial(){
  int n,k;
  cin >> n >> k;
  cout << (((n+1)*n/2 - (n-k)*(n-k+1)/2)%2?"NO":"YES") << '\n';
}

int main(){
  int t;
  cin >> t;

  while(t--){
    editorial();
  }
  return 0;
}
