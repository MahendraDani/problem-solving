#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void solve(){
  int n,k;
  cin >> n >> k;

  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  
  for(int i=0;i<n;i++){
    bool canWin = true;
    for(int j=0;j<n;j++){
      if(abs(arr[i]-arr[j])%k==0 && i!=j){
        canWin = false;
        break;
      }
    }

    if(canWin){
      cout << "YES\n";
      cout << i+1 << "\n";
      return;
    }
  }

  cout << "NO\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}
