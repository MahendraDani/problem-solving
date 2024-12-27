// Date : 27.12.2024
// Desorting - CP 31 (800)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
Observations:

1 8 10 13
-> 2 9 9 12
-> 3 10 8 11 -> desorted ans is 2

10 8 6 1 -> already desorted


min ops required -> minimum difference between two adjacent elements

Debugging:

1 9 14      diff = 5, ops = 3
-> 2 10 13  diff = 3,
-> 3 11 12  diff = 1
-> 4 12 11  diff = -1

1 9 13 diff = 4, ops = 3
-> 2 10 12  diff = 2
-> 3 11 11  diff = 0
-> 4 12 10 diff = -2

*/

// TLE 
void solve(){
  int n;
  cin >> n;

  int ans = INT_MAX;
  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];

  int a = INT_MAX;
  int b = INT_MAX;

  for(int i=0;i<n-1;i++){
    if(arr[i]<arr[i+1]){
      ans = min(ans, arr[i+1]-arr[i]);
      a = arr[i];
      b = arr[i+1];
    }else if(arr[i] == arr[i+1]){
      cout << 1 << "\n";
      return;
    }else{
      cout << 0 << "\n";
      return;
    }
  }
  
  int cnt = 0;

  while(a<b){
    a++;
    b--;
    cnt++;
  }
  cout << cnt << "\n";
}


// WRONG answer
void solve2(){
  int n;
  cin >> n;

  int ans = INT_MAX;
  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];

  for(int i=0;i<n-1;i++){
    if(arr[i]<arr[i+1]){
      ans = min(ans, arr[i+1]-arr[i]);
    }else if(arr[i] == arr[i+1]){
      cout << 1 << "\n";
      return;
    }else{
      cout << 0 << "\n";
      return;
    }
  }
  cout << ans/2 + 1 << "\n";
}

void solve3(){
  int n;
  cin >> n;

  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];

  int diff = INT_MAX;
  bool sorted = true;

  for(int i=0;i<n-1;i++){
    if(arr[i] <= arr[i+1]){
      diff = min(diff, arr[i+1]-arr[i]);
    }
    sorted &= arr[i]<=arr[i+1];
  }

  if(!sorted){
    cout << 0 << "\n";
    return;
  }

  cout << diff/2 + 1 << "\n";
}

int main(){
  int t;
  cin >> t;

  while(t--){
    solve3();
  }
  return 0;
}
