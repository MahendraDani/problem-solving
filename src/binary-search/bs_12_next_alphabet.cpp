// Date : 19.01.2025

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

char bs_next_alpha(char arr[], int n, char target){
  int start = 0, end = n-1;
  int mid;

  char res;
  while(start <= end){
    mid = start + (end - start)/2;
    if (arr[mid]==target){
      start = mid + 1;
    }else if(arr[mid] > target){
      res = min(res,arr[mid]);
      end = mid - 1;
    }else{
      start = mid + 1;
    }
  }
  return res;
}

int main(){
  char arr[] = {'a', 'c', 'd','f','h'};
  char target = 'b';
  int n = 5;
  
  cout << bs_next_alpha(arr,n,target) << "\n";
  return 0;
}
