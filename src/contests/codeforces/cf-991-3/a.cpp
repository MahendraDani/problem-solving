#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void solve(){
  int n,m;
  cin >> n >> m;
  vector<string> sarr(n);
  for(int i=0;i<n;i++) cin >> sarr[i];

  vector<int> lenArr(n,0);
  int mSum = 0;
  for(int i=0;i<n;i++){
    lenArr[i] = sarr[i].size();
  }
  
  int ans = 0;
  
  for(int i=0;i<n;i++){
    if(mSum + lenArr[i] <=m){
      mSum +=lenArr[i];
      ans++;
    }else{
      break;
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
