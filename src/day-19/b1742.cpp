#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void solve(){
  int n;
  cin >> n;

  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];

  map<int,int> mp;
  for(int i=0;i<n;i++){
    mp[arr[i]]++;
  }

  for(auto x : mp){
    if(x.second > 1){
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main(){
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
