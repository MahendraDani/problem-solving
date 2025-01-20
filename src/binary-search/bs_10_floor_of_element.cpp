// Date : 31.12.2024
// Given an sorted element with repeating elements, find floor of `target`
// floor of `target` = greatest of numbers smaller than `target` present in the array

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int floorElement(int arr[], int n, int target){
  int start = 0, end = n-1;
  int mid;
  int res = -1;

  while(start <= end){
    mid = start + (end-start)/2;
    if(arr[mid]==target){
      res = target;
      break;
    }else if(arr[mid] < target){
      res = max(res,arr[mid]);
      start = mid +1;
    }else{
      end = mid -1;
    }
  }

  return res;
}

/*
 Approach 2: After the termination of simple binary search algorihtm, if the target is NOT present in the array, then the `end` pointer will always point to the floor of the target. Similarly, the `start` will always point to ceil of target
 */

int main(){
  int arr[] = {1,2,3,4,8,10,10,12,14};
  int n = 9;
  int target = 5;

  cout << floorElement(arr,n,target) << "\n";
  return 0;
}
