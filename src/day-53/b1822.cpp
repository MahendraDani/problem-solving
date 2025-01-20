// Date : 20.01.2025
// Karina And Array
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 Priority 1 : remove negatives
 Priority 2 : remove zeros
 such that length >=2

 Q: what should be the conditions to decide to remove an element
 multiplication of same parity is good

 */


// WA on public test cases
void solve(){
  int n;
  cin >> n;

  vll a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  ll ans = 0;
  for(int i=0;i<n-2;i++){
    ll a1 = a[i];
    ll a2 = a[i+1];
    ll a3 = a[i+2];

    if(a1>=0 && a2<0 && a3>0){
      ans = max(ans,a1*a3);
    }else if(a1<0 && a2>=0 && a3<0){
      ans = max(ans,a1*a3);
    }else{
      ans = max(ans,a1*a2);
      ans = max(ans,a2*a3);
    }
  }
  cout << ans << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
