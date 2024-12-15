#include <iostream>
#include <bits/stdc++.h>
#include <map>

using namespace std;

void solve(){
  int n;
  cin >> n;
  vector<int> a(n,0);
  for(int i=0;i<n;i++) cin >> a[i];
  
  vector<int> b(n,0);
  
  for(auto x : b){
    cout << x << " ";
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
