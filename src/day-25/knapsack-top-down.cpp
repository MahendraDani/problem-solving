#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
  int wt[] = {1,3,4,5};
  int val[] = {1,4,5,7};
  int W = 7;
  int n = 4;

  int dp[n+1][W+1];

  for(int i=0;i<n+1;i++){
    for(int j=0;j<W+1;j++){
      if(i==0 || j==0){
        dp[i][j] = 0;
        continue;
      }

      if(wt[i-1] <= j){
        dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j]);
      }else{
        dp[i][j] = dp[i][j-1];
      }
    }
  }

  cout << dp[n][W] << endl;
  return 0;
}
