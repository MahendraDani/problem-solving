// Date : 19.01.2025
// Restore the Weather
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

// brute force => probably TLE => WA on hidden test cases
void solve(){
  int n,k;
  cin >> n >> k;

  vi a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  vi b(n);
  for(int i=0;i<n;i++) cin >> b[i];

  vi ans(n);

  for(int i=0;i<n;i++){
    int el = a[i];
    for(int j=0;j<n;j++){
      if(abs(el-b[j])<=k && b[j]!=INT_MIN){
        ans[i] = b[j];
        b[j] = INT_MIN;
        break;
      }
    }
  }

  for(auto x:ans){
    cout << x << " ";
  }
  cout << "\n";
}

/*
 diff array then swap
 k = 2
    a = 1 3 5  3 9
    b = 2 5 11 2 4 
 diff = 1 2 6  1 5
*/

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
