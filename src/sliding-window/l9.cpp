// Date : 16.02.2025
// Binary sub-array with sum k

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int brute(int arr[], int n, int goal){
  int ans = 0;
  for(int i=0;i<n;i++){
    int sum =0;
    for(int j=i;j<n;j++){
      sum+=arr[j];
      if(sum==goal){
        ans++;
      }else if(sum > goal){
        break;
      }
    }
  }
  return ans;
}

int better(int arr[], int n, int goal){
  if(goal<0) return 0;
  int ans =0;
  int l=0,r=0,sum=0;
  while(r<n){
    sum+=arr[r];
    if(sum > goal){
      while(sum > goal){
        sum-=arr[l];
        l++;
      }
    }
    ans+= r-l+1;
    r++;
  }
  return ans;
}

int main(){
  int arr[] = {1,0,0,1,1,0};
  int n = 6;
  int goal = 2;
  cout << brute(arr,n,goal) << "\n";
  cout << better(arr,n,goal) - better(arr,n,goal-1) << "\n";
  return 0;
}
