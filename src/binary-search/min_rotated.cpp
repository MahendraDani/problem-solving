// Minimum element in a rotated sorted array
#include <iostream>
using namespace std;

int minElement(int arr[],int n){
  if(n==1) return arr[0];
  int start =0, end = n-1;
  int mid,ans;
  ans = -1;

  while(start <= end){
    mid = start + (end-start)/2;
    int prev = (mid + n-1)%n;
    int next = (mid + 1)%n;

    if(arr[mid]<arr[prev] && arr[mid] < arr[next]){
      ans = arr[mid];
      break;
    }

    if(arr[mid] < arr[n-1]){
      // right half is sorted
      end = mid -1;
    }else{
      start = mid + 1;
    }
  }
  return ans;
}

int main(){

  int arr[] = {8,9,10,1,2,3,4};
  int n = 7;
  cout << minElement(arr,n) << "\n";
  return 0;
}
