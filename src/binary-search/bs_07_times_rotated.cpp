// Date : 29.12.2024
// Given an array how many times is it rotated

#include <iostream>
using namespace std;

int bs_rotated(int arr[], int n){
  int start = 0, end = n-1;
  if(arr[start] < arr[end]){
    // array is not rotated => {2,4,5,10,19}
    return 0;
  }

  int mid;
  int ans = 0;
  while(start <=end){
    mid = start + (end-start)/2;
    int next = (mid + 1)%n;
    int prev = (mid +n -1)%n;

    if(arr[mid] <= arr[prev] && arr[mid] <= arr[next]){
      // mid is at the minimum element
      ans = mid;
      break;
    }

    if(arr[0] <= arr[mid]){
      start = mid +1;
    }

    if(arr[mid] <= arr[n-1]){
      end = mid -1;
    }
  }
  return ans;
}

// number of times rotated = index of minimum element

int main(){
  int arr[] = {11,12,15,18,2,5,6,8};
  int n = 8;

  cout << bs_rotated(arr,n) << "\n";
  return 0;
}
