// Date : 03.02.2025
// Choosing Cubes - Div 3-B grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 all distinct elements
 a = {1,10,4,3,2}, fav = 10 k = 2
 sort => {10,4,3,2,1} => Removed => YES


 fav element is repeated
 a = {1,10,10,10,3,2} fav = 10, k=2
 sort => {10,10,10,3,2,1} => Maybe

 If all instanes of repeating elements are removed then its => NO

 a = {3,3,2,3,2}, favElement = 2, k=1
 => sort {3,3,3,2,2} => new array => {3,3,2,2}, newIdx = 3
 */

void solve(){
  int n,f,k;
  cin >> n >> f >> k;

  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  int fav = a[f-1];

  sort(a.rbegin(),a.rend());
  int newIdx = -1;
  for(int i=0;i<k;i++){
    if(a[i]==fav){
      newIdx = i;
    }
  }
  
  // cout << "newIdx: " << newIdx << " k: " << k << "\n";
  if(newIdx == -1){
    // a = {5,4,3,2,1}, k=2, favElement = 1
    cout << "NO\n";
    return;
  }

  // is there any instance after k?
  for(int i=k;i<n;i++){
    if(a[i]==fav){
      newIdx = i;
    }
  }

  if(newIdx < k){
    cout << "YES\n";
  }else{
    cout << "MAYBE\n";
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
