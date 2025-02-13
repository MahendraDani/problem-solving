// Date : 12.02.2025
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int brute(int arr[], int n){
  int ans = -1;
  for(int i=0;i<n;i++){
    set<int> st;
    for(int j=i;j<n;j++){
      st.insert(arr[j]);
      if(st.size() <=2 ){
        ans = max(ans,j-i+1);
      }else{
        break;
      }
    }
  }
  return ans;
}

int better(int arr[], int n){
  int ans =-1;
  int l=0,r=0;
  map<int,int> mp;

  while(r<n){
    mp[arr[r]]++;
    if(mp.size() > 2){
      while(mp.size() > 2){
        mp[arr[l]]--;
        if(mp[arr[l]]==0){
          mp.erase(arr[l]);
        }
        l++;
      }
    }else{
      ans = max(ans,r-l+1);
    }
    r++;
  }
  return ans;
}

int best(int arr[], int n){
  int ans =-1;
  int l=0, r=0;
  map<int,int> mp;

  while(r < n){
    mp[arr[r]]++;
    if(mp.size() > 2){
      mp[arr[l]]--;
      if(mp[arr[l]]==0){
        mp.erase(arr[l]);
      }
      l++;
    }else{
      ans = max(ans, r-l+1);
    }
    r++;
  }
  return ans;
}

int main(){
  int arr[] = {3,3,3,1,2,1,1,2,3,3,4};
  int n = 11;
  cout << brute(arr,n) << "\n";
  cout << better(arr,n) << "\n";
  cout << best(arr,n) << "\n";
  return 0;
}
