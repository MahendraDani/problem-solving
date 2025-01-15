// Date : 14.01.2025
// YetnotherrokenKeoard : Div 3-B grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

// TLE
void solve(){
  string s;
  cin >> s;
  string ans = "";
  for(int i=0;i<s.size();i++){
    if(s[i]=='b'){
      // delete last lower letter in ans string
      for(int j=ans.size()-1;j>=0;j--){
        if(islower(ans[j])){
          //cout << j << " "  << ans[j] << "\n";
          ans.erase(ans.begin() + j);
          break;
        }
      }
    }else if(s[i]=='B'){
      // delete last upper letter in ans string
      for(int j=ans.size()-1;j>=0;j--){
        if(isupper(ans[j])){
          // cout << j << " " << ans[j] << "\n";
          ans.erase(ans.begin() + j);
          break;
        }
      }
    }else{
      ans += s[i];
    }
  }
  cout << ans << "\n";
}

// TODO : Find optimal algorithm to avoid TLE
int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
