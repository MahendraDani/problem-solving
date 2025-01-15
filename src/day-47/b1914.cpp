// Date : 14.01.2025
// Preparing for the Contest - Div 3-B grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 Task: Arrange numbers from 1 to n such that he gets excited exactly k times.
 excited ? when solves higher difficulty porblem after last one => x,y => excited if y>x

 n=6, k=2
 => {6,1,5,3,4,2}
 => {6,5,4,1,2,3}

 n=5, k=4
 => {1,2,3,4,5}

 n=5, k=0;
 => {5,4,3,2,1}

 n=6, k=3
 => {6,5,1,2,3,4}
 */
void solve(){
  int n,k;
  cin >> n >> k;

  vi a(n,0);
  int num = n;
  int i;
  for(i=0;i<n-k-1;i++){
    a[i] = num;
    num--;
  }

  // cout << "i: " << i << "\n";
  int num2 = 1;
  for(int j=i;j<n;j++){
    a[j] = num2;
    num2++;
  }

  for(int i=0;i<n;i++){
    cout << a[i] << " ";
  }
  cout << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
