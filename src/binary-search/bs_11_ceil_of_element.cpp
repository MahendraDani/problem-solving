// Date : 19.01.2025
// Find ceil of an element in an sorted array

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int bs_ceil(int arr[],int n, int target){
  int start = 0, end = n-1, ans = INT_MAX;
  int mid;

  while(start <= end){
    mid = start + (end-start)/2;
    if(arr[mid]==target){
      return target;
    }else if (arr[mid] > target){
      ans = min(ans,arr[mid]);
      end = mid - 1;
    }else{
      start = mid + 1;
    }
  }
  return ans;
}

int main(){
  int arr[] = {1,2,3,4,8,10,10,12};
  int n = 8;
  int target = 5;

  cout << bs_ceil(arr,n,target) << "\n";
  return 0;
}
