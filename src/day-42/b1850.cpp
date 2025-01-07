// Date : 07.01.2025
// Ten Words of Wisdom
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int n;
  cin >> n;
  vector<pair<int,int>> v;

  for(int i=0;i<n;i++){
    int x,y;
    cin >> x >> y;
    v.push_back({x,y});
  }

  int ans = -1;
  int idx = -1;

  for(int i=0;i<n;i++){
    int word = v[i].first;
    int qual = v[i].second;
    if(word<=10){
      if(qual >= ans){
        ans = qual;
        idx = i+1;
      }
    }
  }

  cout << idx << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
