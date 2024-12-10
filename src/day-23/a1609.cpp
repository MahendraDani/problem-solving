// Date : 10/12/2024
#include<iostream>
#include <bits/stdc++.h>

using namespace std;

// Failing on last two cases
void solve(){
  int n;
  cin >> n;
  int arr[n];

  for(int i=0;i<n;i++) cin >> arr[i];
  
  int maxElement = -1;
  int maxIdx = -1;
  long long sum = 0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
    if(maxElement < arr[i]){
      maxElement = arr[i];
      maxIdx = i;
    }
  }

  for(int i=0;i<n;i++){
    if(i!=maxIdx && arr[i]%2==0){
      while(arr[i]>1){
        sum += maxElement - (arr[i]/2);
        maxElement *=2;
        arr[i]/=2;
      }
    }
  }
  cout << sum << "\n";
}


// Wrong
void solve2(){
  int n;
  cin >> n;
  int arr[n];

  for(int i=0;i<n;i++) cin >> arr[i];

  long long sum = 0;
  for(auto x : arr) sum+=x;

  for(int i=0;i<n;i++){
    int maxElement = arr[i];
    long long tempSum = sum;
    for(int j=0;j<n;j++){
      if(i!=j && arr[j]%2==0){
        while(arr[j]>1){
          tempSum += maxElement - arr[j]/2;
          maxElement *=2;
          arr[j]/=2;
        }
      }
    }
    sum = max(sum,tempSum);
  }

  cout << sum << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve2();
  }
  return 0;
}
