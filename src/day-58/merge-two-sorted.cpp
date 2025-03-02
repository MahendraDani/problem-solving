// Date : 02.03.2025
// Merge two sorted arrays

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void mergeArrays(vector<int> v1, vector<int> v2, int i, int j, vector<int>& res){
  if(i==v1.size() && j==v2.size())
    return;

  if(i==v1.size() && j!=v2.size()){
    res.push_back(v2[j]);
    mergeArrays(v1,v2,i,j+1,res);
    return;
  }

  if(i!=v1.size() && j==v2.size()){
    res.push_back(v1[i]);
    mergeArrays(v1,v2,i+1,j,res);
    return;
  }

  if(v1[i] <= v2[j]){
    res.push_back(v1[i]);
    mergeArrays(v1,v2,i+1,j,res);
  }else{
    res.push_back(v2[j]);
    mergeArrays(v1,v2,i,j+1,res);
  }
}

int main(){
  vector<int> v1{1,2,2,3,4};
  vector<int> v2{2,3,3,4,5};

  vector<int> res;
  mergeArrays(v1,v2,0,0,res);
  for(auto el: res){
    cout << el << " ";
  }
  cout << "\n";
  return 0;
}
