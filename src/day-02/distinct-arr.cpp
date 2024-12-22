/*
 Find an algorithm to return true if an array contains ALL DISTINCT integers
Input : arr = {1,3,4,7} -> Output : True
Input : arr = {1,2,3,3,4,7} -> Output : False 
Input : arr = {1,1,2,2,4,7} -> Output : False

First thoughts:
1. Using hashmap to store frequies of elements
Time : O(N)
Space : O(N)

2. Freq array?
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Using hashmap 
// Time : O(N), Space : O(N)
bool isDistinct(vector<int> & v){
  map<int,int> mp;
  for(int i=0;i<v.size();i++){
    mp[v[i]]++;
  }
  for(auto x : mp){
    if(x.second > 1){
      return false;
    }
  }
  return true;
}

// Time : O(N^2), Space : O(1)
bool isDistinctBrute(vector<int> & v){
  for(int i=0;i<v.size();i++){
    // int cnt = 0; // count number of times v[i] occurs except itself;
    for(int j=i+1;j<v.size();j++){
      if(v[i]==v[j]){
        // this is a duplicate
        return false;
      }
    }
  }
  return true;
}

int main(){
  vector<int> v {1,3,3,4,5};

  cout << (isDistinct(v) ? "Yes" : "No" ) << "\n";
  cout << (isDistinctBrute(v) ? "Yes" : "No" ) << "\n";


}
