/*
Date : 03/12/2024
josephus-problem
https://www.geeksforgeeks.org/problems/josephus-problem/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
*/

#include<iostream>
#include<vector>

using namespace std;

void solve(vector<int> v, int k, int index, int& ans){
  if(v.size()==1){
    ans = v[0];
    return;
  }

  index = (index + k-1)%v.size();
  v.erase(v.begin()+index);
  solve(v,k,index,ans);
}

int main(){
  int n,k;
  cin >> n >> k;
  vector<int> v (n,0);
  for(int i=0;i<n;i++){
    v[i] = i+1;
  }
  int index = 0; // sword
  int ans = -1;
  solve(v,k,index,ans);
  cout << ans << "\n";
  return 0;
}
