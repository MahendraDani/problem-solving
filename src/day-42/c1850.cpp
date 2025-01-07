// Date : 07.01.2025
// Word on the paper
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  vector<string> v;
  for(int i=0;i<8;i++){
    string s;
    cin >> s;
    v.push_back(s);
  }

  map<int,string> mp;

  for(int i=0;i<8;i++){
    string curr = v[i];
    for(int j=0;j<8;j++){
      if(curr[j]!='.')
        mp[j]+=curr[j];
    }
  }

  string ans="";
  for(auto &[x,y]:mp){
    ans+=y;
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
