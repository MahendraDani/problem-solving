// Date : 31.12.2024
// Searching in nearly sorted array
//
// A nearly sorted array is an array in which the ith element can be in any one of (i-1)th, ith, (i+1)th position with comparrision to 
// sorted element

#include <iostream>
using namespace std;

int searchElement(int arr[], int n, int target){
  int start = 0, end = n-1;
  int mid;

  while(start <= end){
    mid = start + (end-start)/2;
    if(arr[mid]==target){
      return mid;
    }
    if(mid-1>=start && arr[mid-1]==target){
      return mid-1;
    }
    if(mid+1<=end && arr[mid+1]==target){
      return mid +1;
    }
  
    if(target < arr[mid]){
      end = mid -2;
      continue;
    }

    if(target > arr[mid]){
      start = mid + 2;
      continue;
    }

  }
  return -1;
}

int main(){
  int arr[] = {5,10,30,20,40};
  int n = 5;
  int target = 40;

  cout << searchElement(arr,n,target) << "\n";
  return 0;
}
