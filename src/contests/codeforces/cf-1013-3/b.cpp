#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int n,x;
  cin >> n >> x;

  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  int ans =0;
  sort(a.begin(),a.end());

  int p=n-1;
  for(int i=n-1;i>=0;i--){
    if(a[i] < x){
      break;
    }else{
      ans++;
    }
    p--;
  }
  
  int minE = INT_MAX;
  for(int i=p;i>=0;i--){
    minE = min(minE,a[i]);
    int stren = (p-i+1)*minE;

    if(stren>=x){
      p = i-1;
      ans++;
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
