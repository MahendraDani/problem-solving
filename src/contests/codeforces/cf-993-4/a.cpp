#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(){
  int n;
  cin >> n;
  
  int cnt = 0;
  for(int i=1;i<n;i++){
    if(n-i > 0){
      cnt++;
    }
  }

  cout << cnt <<"\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
