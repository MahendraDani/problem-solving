// Date : 07.01.2025
// Jellyfish and Undertale - CP 31 (900)
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 Goal : To maximize the value of b

 sort in descending order
 b = max(b,min(b+xi,a));
 */
void solve(){
  int n,a,b;
  cin >> a >> b >> n;

  vector<int> x(n,0);
  for(int i=0;i<n;i++) cin >> x[i];

  sort(x.rbegin(),x.rend());
  int ans = 0;
  for(int i=0;i<n;i++){
    b = max(b,min(b+x[i],a));
    ans+=b;
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
