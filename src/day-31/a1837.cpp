// Date : 27.12.2024
// Grasshopper on Line - CP 31 (800)

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void solve(){
  int x,k;
  cin >> x >> k;

  if(x%k!=0){
    // 10 3
    cout << 1 << "\n";
    cout << x << "\n";
  }else{
    // try to do it in just 2 jumps
    // 10 2 -> 10%2==0 -> (10-1)-> jump to 9 -> remaining = 1 -> jump to 1
    // 9 3  -> 8 1
    // 9 1 -> 7 -> 2 : given that 2<=k<=100 this case will never occur
    cout << 2 << "\n";
    cout << x-1 << " "  << 1 << "\n";
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
