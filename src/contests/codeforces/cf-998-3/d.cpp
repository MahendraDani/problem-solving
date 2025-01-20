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

  vi a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  for(int i=1;i<n;i++){
      int temp = min(a[i],a[i-1]);
      a[i]-= temp;
      a[i-1]-= temp;
  }

  for(int i=1;i<n;i++){
 
    if(a[i] < a[i-1]){
      cout << "NO\n";
      return;
    }
  }

  cout << "YES\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
