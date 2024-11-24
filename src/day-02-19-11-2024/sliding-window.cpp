#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

// sub array has a fixed size of k
int longestSubArrSumFixed(vector<int>& arr,int k){
  int l=0,maxs=0;
  for(int i=0;i<k;i++){
    maxs+=arr[i];
  }

  int sum = maxs;
  int r = k;
  while(r<arr.size()){
    sum = sum + arr[r] - arr[l];
    l++;
    r++;

    maxs = max(sum,maxs);
  }
  return maxs;
}

void solve(){
  int n,k;
  cin >> n >> k;
  vector<int> arr(n,0);
  for(int i=0;i<n;i++) cin >> arr[i];

  int ans = longestSubArrSumFixed(arr,k);
  cout << ans << "\n";
}

int main(){
  solve();
  return 0;
}
