// 0/1 Knapsack problem
// Lec 1-3

#include <cstring>
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Assuming contraints : 1<=n<=100 & 1<=W<=100 
int dp[101][101];

int knapsack(int wt[],int val[],int W, int n){
  if(n==0 || W==0) return 0;

  if(dp[n][W]!=-1) return dp[n][W];

  if(wt[n-1] <= W){
    dp[n][W] = max(val[n-1] + knapsack(wt, val, W-wt[n-1],n-1), knapsack(wt,val,W,n-1));
    return dp[n][W];
  }else{
    dp[n][W] = knapsack(wt,val,W,n-1);
    return dp[n][W];
  }
}

int main(){
  int n;
  cin >> n;

  int wt[n];
  for(int i=0;i<n;i++) cin >> wt[i];

  int val[n];
  for(int i=0;i<n;i++) cin >> val[i];

  int W;
  cin >> W;

  // init dp
  for(int i=0;i<101;i++){
    for(int j=0;j<101;j++){
      dp[i][j] = -1;
    }
  }

  cout << knapsack(wt,val,W,n) << endl;
  return 0;
}
