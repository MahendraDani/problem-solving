#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int n,m,k;
  cin >> n >> m >> k;

  vector<vector<int>> v(n,vector<int>(m));

  int ok=0,ans=1;
  for(int r=0;r<n;r++){
    for(int c=0;c<m;c+=2){
      if(k>0){
        v[r][c] =1;
        k--;
      }else if(k==0){
        ok=1;
        break;
      }
    }
  }

  if(!ok){
    // fill again
    for(int r=0;r<n;r++){
      for(int c=1;c<m;c+=2){
        if(k>0){
          v[r][c]=1;
          k--;
        }else if(k==0){
          ok=1;
          ans = c + 1;
          break;
        }
      }
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
