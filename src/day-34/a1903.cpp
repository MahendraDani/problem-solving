// Date : 30.12.2024
// Halloumi Boxes

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
 Guess 1: Find the case in which the array couln't be sorted.
  Case 1: If array is decreasing order,
  => {10,8,7,5}
  => k=1 : can't sort this array
  => k=2 : {8,10,7,5} -> {8,7,10,5} -> {8,7,5,10} -> {7,8,5,10} -> {7,5,8,10} -> {5,7,8,10} SORTED
  => k=3 : {7,8,10,5} -> {7,5,10,8} => {10,5,7,8} -> {10,8,7,5} NOT POSSIBLE 
  => k=4 : {10,8,7,5} -> {5,7,8,10} DONE

  Case 2: If array has elements in random order
  => {3,7,2,9}
  => k=1 : NOT POSSIBLE
  => k=2 : {3,2,7,9} -> {2,3,7,9} DONE
  => k=3 : {2,7,3,9} -> {2,9,3,7} -> NOT POSSIBLE
  => k=4 : {9,2,7,3} -> NOT POSSIBLE

  if(k==1 && arr is already sorted) return "YES" else return "NO" -> CORRECT!
  
  Guess 2: If for any array that is not sorted already and k>2, then the array will always be able to make sorted after applying some number of reverse operations.
  CORRECT!

  Counterexample: 
  Case 1 (k==2) above

  k=3, arr = {10,3,830,14}
  => {3,10,830,14} -> {3,10,14,830} DONE

  Assumption : If we reverse sub arrays of length 2, then we can always sort any given array in increasing order.  
  CORRECT!
*/

void solve(){
  int n,k;
  cin >> n >> k;

  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];

  bool isSorted = true;

  for(int i=0;i<n-1;i++){
    if(arr[i] > arr[i+1]){
      isSorted = false;
      break;
    }
  }

  if(k==1){
    if(isSorted){
      cout << "YES\n";
    }else{
      cout << "NO\n";
    }
    return;
  }

  if(k>=2){
    cout << "YES\n";
  }
}

int main(){
  int t;
  cin >> t;

  while(t--){
    solve();
  }
  return 0;
}
