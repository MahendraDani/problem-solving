// Date : 29.12.2024
// First and Last occurrence of an element

#include <iostream>
using namespace std;

// Given, a sorted arr in ascending order, with repeating elements, find the first occurence of `target` element.
// If no such element exists, return -1;
int bs_first_occurrence(int arr[], int n, int target){
  int ans = -1;
  int start = 0, end = n-1;
  int mid;

  while(start<=end){
    mid = start + (end-start)/2;
    if(arr[mid]==target){
      ans = mid;
      end = mid -1;
    }else if(arr[mid] < target){
      start = mid +1;
    }else{
      end = mid - 1;
    }
  }
  return ans;
}

// Given, a sorted arr in ascending order, with repeating elements, find the last occurence of `target` element.
// If no such element exists, return -1;
int bs_last_occurrence(int arr[], int n, int target){
  int ans = -1;
  int start = 0, end = n-1;
  int mid;

  while(start <= end){
    mid = start + (end-start)/2;
    if(arr[mid]==target){
      ans = mid;
      start = mid;
    }else if(arr[mid] < target){
      end = mid -1;
    }else{
      start = mid + 1;
    }
  }
  return ans;
}

int main(){
  int arr[] = {2,4,10,10,10,18,20};
  int n = 7;
  int target = 10;

  cout << "First: " << bs_first_occurrence(arr,n,target) << "\n";
  cout << "Last: " << bs_last_occurrence(arr,n,target) << "\n";
}


