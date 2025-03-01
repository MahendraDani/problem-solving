// Date : 01.03.2025
// Maximum area of histogram

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> getNSL(vector<int> arr){
  int n = arr.size();
  vector<int> res(n,-1);
  stack<pair<int,int>> st;

  for(int i=0;i<n;i++){
    while(!st.empty() && st.top().first >= arr[i])
      st.pop();

    if(st.empty()){
      res[i] = -1;
    }else{
      res[i] = st.top().second;
    }

    st.push({arr[i],i});
  }
  return res;
}

vector<int> getNSR(vector<int> arr){
  int n = arr.size();
  vector<int> res(n,-1);
  stack<pair<int,int>> st;

  for(int i=n-1;i>=0;i--){
    while(!st.empty() && st.top().first >= arr[i])
      st.pop();

    if(st.empty()){
      res[i] = -1;
    }else{
      res[i] = st.top().second;
    }

    st.push({arr[i],i});
  }
  return res;
}

int maxArea(vector<int> arr){
  int n = arr.size();
  vector<int> right = getNSR(arr);
  vector<int> left = getNSL(arr);

  int ans = -1;
  for(int i=0;i<n;i++){
    if(left[i]==-1)
      ans = max(ans,right[i] * arr[i]);
    else
      ans = max(ans,(right[i]-left[i]-1)*arr[i]);
  }
  return ans;
}

int main(){

  vector<int> v{6,2,5,4,5,1,6};
  cout << maxArea(v) << "\n";
  return 0;
}
