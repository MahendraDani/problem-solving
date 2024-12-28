// Date : 28.12.2024
// Binary search on reverse sorted array

#include <iostream>
using namespace std;

int bs(int arr[], int n, int target){
  int start = 0;
  int end = n-1;
  int mid;

  while(start<=end){
    mid = start + (end - start)/2;

    if(target == arr[mid]){
      return mid;
    }else if (target < arr[mid]){
      end = mid - 1;
    }else{
      start = mid + 1;
    }
  }
  return -1;
}

int main(){
  int arr[] = {20,18,17,15,14,13,11,10};

  cout << bs(arr,8,15) << "\n";
  return 0;
}
