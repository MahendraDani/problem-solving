// Date : 20.01.2025
// Count the Number of pairs
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int n,k;
  cin >> n >> k;

  string s;
  cin >> s;

  map<int,int> l,u;
  for(auto ch:s){
    if(islower(ch)){
      l[(int)(ch)]++;
    }else{
      u[(int)(ch)]++;
    }
  }

  int ans = 0;
  for(auto &[lch,lfreq]:l){
    int ufreq = u[lch-32];
    if(ufreq>0){
      // pair exists
      ans+=min(lfreq,ufreq);
      lfreq-=min(lfreq,ufreq);
      ufreq-=min(lfreq,ufreq);
      while(k>0 && lfreq>=2){
        ans++;
        lfreq-=2;
        k--;
      }

      while(k>0 && ufreq>=2){
        ans++;
        ufreq-=2;
        k--;
      }
    }else{
      // 5,3, cbccb

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
