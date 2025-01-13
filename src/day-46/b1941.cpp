// Date : 13.01.2025
// Rudolf and 121 - Div 3-B grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
  n=5,   a = {1,3,5,5,2}
=> i=3 : a = {1,3,4,3,1}
=> i=2 : a = {1,2,2,2,1}
=> i=1 : a = {0,0,1,2,1}
=> i=3 : a = {0,0,0,0,0}

n=even and ai=0 => NO
n=odd and ai=0 i<=2 && i>=n-3 => NO

n=4, a = {1,3,3,1}
=> i=1 : a = {0,1,2,1}
=> i=2 : a = {0,0,0,0}

n=5, a = {1,3,6,3,1} => NO

Guess 1: sum should be divisible by 4
Counter-example : n = 3, a = {6,1,1} => NO
n=7, a = {1,2,1,0,1,2,1}

Guess 2: sub-array of size 3, then sum should be divisible by 8 and should not have any zero
Ex : n=3, a = {2,4,2} => YES
Counter-example : n=3, a = {6,1,1} => NO , why? dl = a[mid]-a[mid-1], dr = a[mid]-a[mid+1]
n=3, a={1,6,1}

Contradiction : In which cases does the array does not have all elements as zero? the in remaining cases the answer will be YES
1. if sum is not divisible by 4
n=4, a = {1,2,3,4} => NO

if n==odd, n={3,5,7,...}
n=3 => {1,2,1}, {2,4,2}, {3,6,3}..... only valid arrays for YES
n=5 => {1,2,_,2,1} _ should be equal to 2, as it contributes to both sub arrays
n=7 => {1,2,1,_,1,2,1} => {1,2,2,2,2,2,1} becuase then it contributes to sub arrays

if n==even, n={4,6,8...}
n=4 => {1,2,_,1} => {1,3,3,1}
n=6 => {1,2,1,1,2,1}
n=8 => {1,2,2,3,2,2,2,1} -> {1,2,1,1,2,1,2,1} ???
*/
void solve(){
  int n;
  cin >> n;

  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  ll sum = 0;
  for(auto e:a){
    sum+=e;
  }

  if(sum%4!=0){
    // sum is not divisible by zero
    cout << "NO\n";
    return;
  }

  // find in which ans is NO when sum is divisible by 4
  
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
