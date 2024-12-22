#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(){
  int n;
  cin >> n;
  int a[n], b[n];
  for(int i=0;i<n;i++) cin >> a[i];

  for(int i=0;i<n;i++) cin >> b[i];

  if(n==1) {
    cout << a[0] << "\n";
    return;
  }

  int ans = 0;
  for(int i=0;i<n-1;i++){
    if(a[i] - b[i+1] > 0){
      ans += a[i] - b[i+1];
    }
  }

  cout << ans + a[n-1] << "\n";
}

int main(){
  
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
