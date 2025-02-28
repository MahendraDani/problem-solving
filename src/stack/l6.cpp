// Date : 28.02.2025
// Stock Span Problem

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> brute(vector<int> arr){
  int n = arr.size();
  vector<int> ans(n,0);

  for(int i=n-1;i>=0;i--){
    int cnt = 1;
    for(int j=i-1;j>=0;j--){
      if(arr[j] <= arr[i]){
        cnt++;
      }else{
        break;
      }
    }
    ans[i] = cnt;
  }
  return ans;
}

vector<int> best(vector<int> arr){
  int n = arr.size();
  vector<int> ans(n,0);

  stack<pair<int,int>> st;
  
  // arr[0] doesn't have any element that statisfies the condition to its left
  st.push({arr[0],0});
  ans[0] = 1;

  for(int i=1;i<n;i++){
    while(!st.empty() && st.top().first <= arr[i])
      st.pop();

    if(st.empty()){
      ans[i] = i + 1;
    }else{
      ans[i] = i - st.top().second;
    }

    st.push({arr[i],i});
  }
  return ans;
}

int main(){
  vector<int> v {100,80,60,70,200,75,85};
  vector<int> ans = brute(v);

  for(auto x: ans){
    cout << x << " ";
  }
  cout << "\n";

  vector<int> ans2 = best(v);

  for(auto x: ans2){
    cout << x << " ";
  }
  cout << "\n";
  return 0;
}
