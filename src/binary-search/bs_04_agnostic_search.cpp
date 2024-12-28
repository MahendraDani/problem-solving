// Date 28.12.2024
// Agnostics Binary Search
// Input array is sorted, but the order is not given. It can be either in asc or desc order

#include <iostream>

using namespace std;

int bs(int arr[], int n, int target){
  if(n==1){
    if(arr[0]==target){
      return 0;
    }else{
      return -1;
    }
  }

  bool asc = arr[0] < arr[1];
  int start = 0;
  int end = n-1;
  int mid;

  while(start <=end ){
    mid = start + (end-start)/2;
    if(target == arr[mid]){
      return mid;
    }else if(target < arr[mid]){
      if(asc){
        end = mid -1;
      }else{
        start = mid + 1;
      }
    }else{
      if(asc){
        start = mid + 1;
      }else{
        end = mid - 1;
      }
    }
  }

  return -1;
}

int main(){
  int arr1[] = {1,2,3,4,5,6,7,8,9,10};
  int arr2[] = {10,9,8,7,6,5,4,3,2,1};

  int target = 8;
  int n = 10;

  cout << "asc: " << bs(arr1,n,target) << "\n"; // 7
  cout << "desc: " << bs(arr2,n,target) << "\n"; // 2
  return -1;
}
