#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int maxSubArraySum(int a[], int n, int k){
  int ans = -1;
  int i=0,j=0;
  int sum =0;

  while(j<n){
    if(j-i+1<k){
      sum+=a[j];
      j++;
    }else if(j-i+1==k){
      sum+=a[j];
      ans = max(ans,sum);
      sum-=a[i];
      i++;
      j++;
    }
  }
  return ans;
}

int main(){
  int arr[] = {2,3,5,2,9,7,1};
  int n = 7;
  int k=3;

  cout << maxSubArraySum(arr,n,k) << "\n";
  return 0;
}
