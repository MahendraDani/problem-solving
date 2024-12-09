#include<iostream>
using namespace std;

void solve(){
  int n;
  cin >> n;
  

  // Time complexity ? 
  for(int ans = 1, cur = 1; ; ans++,cur = cur*2 + 2){
    if(cur >= n){
      cout << ans << "\n";
      break;
    }
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
