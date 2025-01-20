// Find number of times array is rotated
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int bs_times_rotated(int a[], int n){
  int ans = -1;
  int s=0, e = n-1;
  int mid;

  while(s<=e){
    mid = s + (e-s)/2;
    int next = (mid + 1)%n;
    int prev = (mid + n-1)%n;

    if(a[mid] < a[next] && a[mid] < a[prev]){
      ans = mid;
      break;
    }else if(a[mid] > a[0]){
      s = mid +1;
    }else if(a[mid] < a[0]){
      e = mid-1;
    }
  }
  return n-ans;
}

int first_occur(int a[], int n, int x){
  int ans = -1;
  int start = 0, end = n-1;
  int mid;
  while(start <= end){
    mid = start + (end - start)/2;
    if(a[mid]==x){
      ans = mid;
      end = mid - 1;
    }else if(x > a[mid]){
      start = mid + 1;
    }else{
      end =  mid - 1;
    }
  }
  return ans;
}

int main(){
  int a[] = {8,9,2,3,4,5,6};
  int n = 7;

  cout << bs_times_rotated(a,n) << "\n";
  
  int b[] = {1,2,3,4,10,10,40,90};
  cout << first_occur(b,8,10) << "\n";
  return 0;
}
