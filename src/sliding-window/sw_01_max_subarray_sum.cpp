#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// fixed k = 3
int maxSubArraySum(int a[], int n){
  int k=3;
  int ans =-1;
  int sum = 0;
  int last = 0;
  
  if(n<3){
    return -1;
  }

  sum = a[0] + a[1] + a[2];
  last = a[0];
  for(int i=3;i<n;i++){
    sum += a[i] - last;
    ans = max(ans,sum);
    last = a[i-2];
  }
  return ans;
}

/*
Algorithm:
1. init sum = (sum of first window)
2. init last = a[0];
3. iterate from i=k to n
4.    sum += a[i] - last
5.    last = a[i-k+1];
6.    ans = max(ans,sum);
 */

int maxSum(int a[], int n, int k){
  int ans = -1;
  int sum = 0;
  for(int i=0;i<k;i++) sum+=a[i];
  int last = a[0];

  for(int i=k;i<n;i++){
    sum += a[i] - last;
    last = a[i-k+1];
    ans = max(ans,sum);
  }
  return ans;
}
int main(){
  int arr[] = {2,3,5,2,9,7,1};
  int n = 7;
  int k =2;
  cout << maxSubArraySum(arr,n) << "\n";
  cout << maxSum(arr,n,2) << "\n";
  return 0;
}
