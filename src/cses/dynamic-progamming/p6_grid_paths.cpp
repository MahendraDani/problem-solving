// Date : 07.04.2025
// Grid Paths
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

#define MOD 1000000007

void solve(){
  int n;
  cin >> n;

  string arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];

  vector<vector<int>> t(n,vector<int>(n));
  // t[i][j] = number of ways to go from (i,j) to (n-1,n-1) without passing through obstacles

  if(arr[n-1][n-1]=='.'){
    t[n-1][n-1] = 1;
  }else{
    t[n-1][n-1] = 0;
  }

  for(int i=n-1;i>=0;i--){
    for(int j=n-1;j>=0;j--){
      if(i==n-1 && j==n-1) continue;

      if(arr[i][j]=='*'){
        t[i][j] = 0;
      }else{
        int path1 = i < n - 1 ? t[i+1][j] : 0;
        int path2 = j < n - 1 ? t[i][j+1] : 0;
        t[i][j] = (path1 + path2) % MOD;
      }
    }
  }

  cout << t[0][0] << "\n";
}

int main(){
  solve();
  return 0;
}
