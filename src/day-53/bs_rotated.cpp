// Searching an element in rotated sorted array
#include <iostream>
using namespace std;

int bs_search(int arr[], int n, int target){
  int ans = -1;
  int start = 0, end = n-1;
  int mid;

  while(start <= end){
    mid = start + (end-start)/2;
    if(arr[mid]==target){
      ans = mid;
      break;
    }

    if(arr[start]<=arr[mid]){
      // left half is sorted
      if(arr[start]<=target && target<=arr[mid]){
        end = mid - 1;
      }else{
        start = mid + 1;
      }
    }else{
      // right half is sorted
      if(arr[mid]<=target && target<=arr[end]){
        start = mid + 1;
      }else{
        end = mid - 1;
      }
    }
  }
  return ans;
}

int main(){
  int arr[] = {6,7,8,9,10,1,2,3};
  int n = 8;
  int target = 2;

  cout << bs_search(arr,n,target) << "\n";
  return 0;
}
