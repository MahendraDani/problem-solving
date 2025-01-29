// Date : 24.01.2025
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> bs_search2d(vector<vector<int>>& arr, int n, int m, int key){
  vector<int> ans{-1,-1};
  int i=0,j=m-1;

  while(i>=0 && i<n && j>=0 && j<m){
    if(arr[i][j] == key){
      ans[0] = i;
      ans[1] = j;
      break;
    }else if(arr[i][j] > key){
      j--;
    }else if(arr[i][j] < key){
      i++;
    }
  }
  return ans;
}

int main(){
  vector<vector<int>> arr{{10,20,30,40},{15,25,35,34},{27,29,37,48},{32,33,39,50}};
  int n = 4, m =4;
  int key = 29;

  vector<int> ans = bs_search2d(arr,n,m,key);
  cout << ans[0] << " " << ans[1] << "\n";
  return 0;
}
