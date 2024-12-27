// Revising DP by solving knapsack problem in tabular approach
// wt -> {1,3,4,5}
// val -> {1,4,5,7}
// W -> 7
//
// Output : Max profit : 4 + 5 = 9

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int N = 4;
const int W = 7;

int dp[N+1][W+1];

map<pair<int,int>,int> memo;
int recur(int wt[], int val[], int n, int W){
  pair<int,int> p = make_pair(n,W);
  if(memo[p]) return memo[p];

  if(n==0 || W==0) return 0;

  if(wt[n-1] <= W){
    memo[p] = max(val[n-1] + recur(wt,val,n-1,W-wt[n-1]), recur(wt,val,n-1,W));
    return memo[p];
  }else{
    memo[p] = recur(wt,val,n-1,W);
    return memo[p];
  }
}

int main(){
  // initialization
  for(int i=0;i<N+1;i++){
    for(int j=0;j<W+1;j++){
      dp[i][j] = -1;
    }
  }
  
  int wt[] = {1,3,4,5};
  int val[] = {1,4,5,7};

  // Bottom-up approach
  for(int i=0;i<N+1;i++){
    for(int j=0;j<W+1;j++){
      if(i==0 ||j==0){
        dp[i][j] = 0;
        continue;
      }

      if(wt[i] <= j){
        dp[i][j] = max(dp[i-1][j], val[i] + dp[i-1][j-wt[i]]);
      }else{
        dp[i][j] = dp[i-1][j];
      }
    }
  }
  
  cout <<"Bottom Up " << dp[N][W] << endl;

  // Top Down -> Recursive + Memo
  cout << "Top Down " << recur(wt,val,N,W) << endl;
  return 0;
}
