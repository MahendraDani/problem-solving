// Date : 29.12.2024
// Count of an element in an sorted array

#include <iostream>
using namespace std;

void bs_count(int arr[], int start, int end, int target, int& cnt){
  if(start<=end){
    int mid = start + (end-start)/2;
    if(arr[mid]==target){
      cnt++;
      bs_count(arr,start,mid-1,target,cnt);
      bs_count(arr,mid+1,end,target,cnt);
    }else if(arr[mid] < target){
      bs_count(arr,mid+1, end,target,cnt);
    }else{
      bs_count(arr,start,mid-1,target,cnt);
    }
  }
}

int main(){
  int arr[] = {2,4,10,10,10,10,20};
  int n = 7;
  int target = 10;
  int cnt = 0;

  bs_count(arr,0,n,target,cnt);
  cout << "Count : " << cnt  << "\n";
  return 0;
}
