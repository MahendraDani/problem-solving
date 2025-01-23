#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int n,l,r;
  cin >> n >> l >> r;

  vi a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  sort(a.begin(),a.end());

  int ans = 0;
  for(int i=0;i<=r-l;i++){
    ans+=a[i];
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
