// Date : 31.12.2024
// Find an element in rotated array

#include <iostream>
using namespace std;

int indexOfMinElement(int arr[], int n){
  int start = 0, end = -1;
  int mid;
  int minIdx = -1;
  
  while(start<=end){
    mid = start + (end-1)/2;

    int next = (mid+1)%n;
    int prev = (mid + n-1)%n;

    if(arr[mid] <= arr[prev] && arr[mid]<=[next]){
      minIdx =  mid;
      break;
    }

    if(arr[0] < arr[mid]){
      start = mid + 1;
    }

    if(arr[mid] <= arr[n-1]){
      end = mid -1;
    }
  }
  return minIdx;
}

int main(){
  int arr[] = {11,12,15,18,2,5,6,8};
  int n = 7;
  cout << indexOfMinElement(arr,n) << endl;
  return 0;
}
