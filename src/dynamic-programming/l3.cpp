// Date : 14.02.2025
// Frog Jumps

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int recursive(int n, int arr[]){
  if(n==0) return 0;

  int fs = recursive(n-1,arr) + abs(arr[n] - arr[n-1]);
  int ss = INT_MAX;
  if (n > 1)
    ss = recursive(n-2,arr) + abs(arr[n] - arr[n-2]);
  return min(fs,ss);
}

int tab(int n, int arr[]){
  int prev1=0, prev2=0;
  for(int i=1;i<n;i++){
    int fs = prev1 + abs(arr[i] - arr[i-1]);
    int ss = INT_MAX;
    if(i > 1){
      ss = prev2 + abs(arr[i] - arr[i-2]);
    }

    int curr = min(fs,ss);
    prev2 = prev1;
    prev1 = curr;
  }
  return prev1;
}

int main(){
  int arr[] = {10,20,30,60};
  int n = 3;

  cout << recursive(n,arr) << "\n";
  cout << tab(n,arr) << "\n";
  return 0;
}
