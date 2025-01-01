// Date : 01.01.2025
// Startup : Div 3 B Grind
// 7:25 PM - 7:35 PM

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(){
  int n,k;
  cin >> n >> k;
  
  // {b,c}
  vector<pair<int,int>> v;
  for(int i=0;i<k;i++){
    int x,y;
    cin >> x >> y;
    v.push_back({x,y});
  }
  
  // brand  wise profit
  // {b,profit}
  map<int,int> profit;

  for(int i=0;i<k;i++){
    profit[v[i].first] += v[i].second;
  }

  vector<int> p;
  for(auto x :profit){
    p.push_back(x.second);
  }
  sort(p.rbegin(),p.rend());
  
  int cnt = 0;
  long long ans = 0;
  for(int i=0;i<p.size();i++){
    cnt++;
    if(cnt<=n){
      ans+=p[i];
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
