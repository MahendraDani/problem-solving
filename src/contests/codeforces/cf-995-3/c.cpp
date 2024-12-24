#include <iostream>
#include <set>
#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solve(){
  int n,m,k;
  cin >> n >> m >> k;

  int a[m];
  for(auto i=0;i<m;i++) cin >> a[i];

  int q[k];
  int known[n+1] = {0};
  for(auto i=0;i<k;i++) {
    cin >> q[i];
    known[q[i]] = 1;
  }
  for(int i=0;i<m;i++){
    if(known[a[i]]==0){
      cout << 0;
    }else{
      cout << 1;
    }
  }
  cout << "\n";
}

int main(){
  
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
