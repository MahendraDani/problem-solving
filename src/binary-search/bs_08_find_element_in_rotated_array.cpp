// Date : 31.12.2024
// Find an element in rotated array, elements are DISTINCT

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int indexOfMinElement(int arr[], int n){
  int start = 0, end = n-1;
  int mid;

  if(arr[start] <= arr[end]){
    return 0;
  }
  int minIdx = -1;
  
  while(start<=end){
    mid = start + (end-start)/2;

    int next = (mid+1)%n;
    int prev = (mid + n-1)%n;

    if(arr[mid] <= arr[prev] && arr[mid]<=arr[next]){
      minIdx =  mid;
      break;
    }

    if(arr[0] <= arr[mid]){
      start = mid + 1;
    }

    if(arr[mid] <= arr[n-1]){
      end = mid -1;
    }
  }
  return minIdx;
}

int bs(int arr[], int start,int end, int target){
  int mid;

  while(start <= end){
    mid = start + (end-start)/2;

    if(arr[mid]==target){
      return mid;
    }else if(arr[mid] < target){
      start = mid + 1;
    }else{
      end = mid -1;
    }
  }
  return -1;
}

// find element in rotated array
int findElement(int arr[], int n, int target){
  int minIdx = indexOfMinElement(arr,n);

  if(target == arr[minIdx]){
    return minIdx;
  }

  int p1 = bs(arr,0,minIdx-1,target);
  int p2 = bs(arr,minIdx,n-1,target);

  if(p1==-1 && p2==-1){
    // element doesn't exist in array
    return -1;
  }

  return max(p1,p2);
}

int main(){
  int arr[] = {11,12,15,18,2,5,6,8};
  int n = 8;
  int target = 15; // 2
  cout << findElement(arr,n,target) << "\n";
  return 0;
}
