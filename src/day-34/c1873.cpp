// Date : 30.12.2024
// Target Practice

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
 0-based indexing (Don't get confused)

*/

void solve(){
  int n = 10;
  char a[n][n];

  for(int i=0;i<n;i++){
    for(int i=0;j<n;j++){
      cin >> a[i][j];
    }
  }

  int ans = 0;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(a[i][j]=='X'){
        if(!white box){
          ans++;
        }
      }
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
