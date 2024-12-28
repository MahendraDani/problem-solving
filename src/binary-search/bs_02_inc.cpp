// Date : 28.12.2024
// Binary search on sorted array (increasing)

#include <iostream>

using namespace std;

int bs(int arr[], int n, int target){
  int start = 0;
  int end = n-1;
  int mid;

  while(start<=end){
    mid = start + (end-start)/2;

    if(target == arr[mid]){
      return mid;
    }else if(target < arr[mid]){
      end = mid-1;
    }else{
      start = mid + 1;
    }
  }
  return -1;
}

int bs_recursive(int arr[], int start, int end, int target){
  if(start <= end){
    int mid = start + (end-start)/2;
    if(target == arr[mid]){
      return mid;
    }else if(target < arr[mid]){
      return bs_recursive(arr,start, mid-1,target);
    }else{
      return bs_recursive(arr,mid+1,end,target);
    }
  }
  return -1;
}

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10};

  cout << bs(arr,10,3) << "\n";

  cout << bs_recursive(arr,0,9,3) << "\n";
  return 0;
}
