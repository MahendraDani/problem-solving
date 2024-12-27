// Date : 27.12.2024
// Array Coloring - CP 31 (800)

#include <iostream>
using namespace std;

/*
Observations:
1. count of odd numbers must be even.
2. If odd numbers are even then the array can be always colored as 1 odd element red and other elements blue color

Cases:
1. oddCnt > 0, oddCnt%2==0
2. evenCnt > 0
*/
void solve(){
  int n;
  cin >> n;
  
  int arr[n];

  for(int i=0;i<n;i++) cin >> arr[i];

  int oddCnt = 0;
  for(int i=0;i<n;i++){
    if(arr[i]%2!=0){
      oddCnt++;
    }
  }

  if(oddCnt == n){
    if(n%2==0){
      // 1 3 15 3 -> {1}, {3,15,3}
      cout << "YES\n";
    }else{
      // 1 3 15 5 1 -> parity of sums can't be same
      cout << "NO\n";
    }
    return;
  }

  if(oddCnt == 0){
      // 2 4 10 4 -> {2}, {4,10,4}
      // 2 4 10 4 8 -> {2}, {4,10,4,8}
      cout << "YES\n";
      return;
  }

  if(oddCnt%2==0){
    // 1 3 2 4 6 -> {1,3}, {2,4,6}
    // 1 3 2 6 -> {1,3}, {2,6}
    cout << "YES\n";
  }else{
    // 1 2 4 6 -> Not possible
    // 1 2 4 -> Not possible
    cout << "NO\n";
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}
