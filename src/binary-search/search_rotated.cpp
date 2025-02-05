// Search in a rotated sorted array
#include <iostream>
using namespace std;

int search(int arr[],int n,int x){
  int ans = -1;
  int start = 0, end = n-1;
  int mid;
  while(start <= end){
    mid = start + (end-start)/2;

    if(arr[mid]==x){
      ans = mid;
      break;
    }else if(arr[mid] > x){
      if(arr[mid] < arr[end]){
        end = mid -1;
      }else{
        start = mid +1;
      }
    }else{
      if(arr[start] < arr[mid]){
        end = mid -1;
      }else{
        start = mid + 1;
      }
    }
  }
  return ans;
}

int main(){
  int arr[] = {8,9,10,1,2,3,4};
  int n = 7;
  int x = 3;
  cout << search(arr,n,x) << "\n";
  return 0;
}
