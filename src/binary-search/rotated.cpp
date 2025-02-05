// Search in a rotated sorted array
#include  <iostream>
using namespace std;

int search(int arr[],int n, int x){
  int ans = -1, start =0, end = n-1;
  int mid;
  while(start <= end){
    mid = start + (end-start)/2;
    if(arr[mid]==x){
      ans = mid;
      break;
    }

    if(arr[start] < arr[mid]){
      if(x >= arr[start] && x < arr[mid]){
        end = mid - 1;
      }else{
        start = mid +1;
      }
    }else{
      if(x >arr[mid] && x <=arr[end]){
        start = mid +1;
      }else{
        end = mid - 1;
      }
    }
  }
  return ans;
}

int main(){
  int arr[] = {8,9,10,11,12,3,4};
  int n = 9;
  int x = 3;
  cout << search(arr,n,x) << "\n";
  return 0;
}
