// Date : 28.12.2024
// Twin Permutations
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
 Try to build array b such that
 a1 + b1 = a2 + b2 = ....... = an + bn

 this gives the formula
 b[i] = n+1 - a[i]
 */

void solve(){
  int n;
  cin >> n;

  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];
  
  if(n==1){
    cout << arr[0] << "\n";
    return;
  }

  vector<int> b(n,0);
  for(int i=0;i<n;i++){
    b[i] = n+1 - arr[i];
    cout << b[i] << " ";
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
