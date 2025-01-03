// Date : 03.01.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 n = 10, m = 2, a = BGECDCBDED
 | problems | freq | require |
 | A        | 0    | m-0 = 2 |
 | B        | 2    | 0       |
 | C        | 2    | 0       |
 | D        | 3    | 0       |
 | E        | 2    | 0       |
 | F        | 0    | m-0 = 2 |
 | G        | 1    | m-1 = 1 |
 ----------------------------- Total required = 2 + 2 + 1 = 5
 */
void solve(){
  int n,m;
  cin >> n >> m;

  string a;
  cin >> a;
  
  vector<int> p(7);
  for(int i=0;i<n;i++){
    p[int(a[i]-'A')]++;
  }

  int ans = 0;
  for(auto x:p){
    if(x<m){
      ans+=m-x;
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
