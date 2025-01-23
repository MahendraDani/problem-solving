// Peak element in a biotonic array
// An element is said to biotonic if it is strictly increasing then strictly decreasing
#include <iostream>
using namespace std;

/*
 - elements before peak are stricly increasing
 - elements after peak are strictly decreasing
 - elements at i==0, i==n-1 can never be peak element
 */
int bs_peak(int arr[],int n){
  int start = 1, end = n-2;
  int mid;
  int ans = -1;
  while(start <= end){
    mid = start + (end-start)/2;
    if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
      ans = mid;
      break;
    }else if(arr[mid-1] < arr[mid]){
      start = mid + 1;
    }else{
      end = mid -1;
    }
  }
  return ans;
}

int main(){
  int arr[] = {1,2,3,12,4,5};
  int n = 6;

  cout << bs_peak(arr,n) << "\n";
  return 0;
}
