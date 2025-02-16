// Date : 16.02.2025
// Sub-array with k different integers

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int brute(int arr[], int n, int k){
  int cnt = 0;
  for(int i=0;i<n;i++){
    map<int,int> mp;
    for(int j=i;j<n;j++){
      mp[arr[j]]++;
      if(mp.size() == k){
        cnt++;
      }else if(mp.size() > k){
        break;
      }
    }
  }
  return cnt;
}

int better(int arr[], int n, int k){
  if(k<0) return 0;
  int cnt =0;
  int l=0,r=0;
  map<int,int> mp;
  while(r<n){
    mp[arr[r]]++;
    if(mp.size() > k){
      while(mp.size() > k){
        mp[arr[l]]--;
        if(mp[arr[l]]==0){
          mp.erase(arr[l]);
        }
        l++;
      }
    }
    cnt += r-l+1;
    r++;
  }
  return cnt;
}

int main(){
  int arr[] = {1,2,1,3,4};
  int n = 5;
  int k = 3;
  cout << brute(arr,n,k) << "\n";
  cout << better(arr,n,k) - better(arr,n,k-1)  << "\n";
  return 0;
}
