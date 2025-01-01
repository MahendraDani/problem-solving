// Date : 01.01.2025
// Sequence Game - CP 31 (800)
// 10:56 AM - 11:03 => WA
// 11:03 - 11:10 => AC (silly mistake, the refill element is best to have 1 instead of b[i]-1)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void solve(){
  int n;
  cin >> n;

  int b[n];
  for(int i=0;i<n;i++) cin >> b[i];

  // m<=2n
  vector<int> a;
  a.push_back(b[0]);
  int prev = a[0];
  for(int i=1;i<n;i++){
    if(prev > b[i]){
     // a.push_back(b[i]-1);
      a.push_back(1);
      a.push_back(b[i]);
    }else{
      a.push_back(b[i]);
    }
    prev = b[i];
  }

  cout << a.size() << "\n";
  for(auto x: a){
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
