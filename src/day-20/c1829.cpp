#include <climits>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(){
  int n;
  cin >> n;

  map<string,int> mp;
  mp["11"] = mp["10"] = mp["01"] = mp["00"] = 1e9;
  int ans = 1e9;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    string s;
    cin >> s;

    mp[s] = min(mp[s],a);
  }

  if(min(mp["11"],mp["10"] + mp["01"]) > (int)1e6){
    cout << "-1\n";
  }else{
    cout << min(mp["11"],mp["10"] + mp["01"]) << "\n";
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
