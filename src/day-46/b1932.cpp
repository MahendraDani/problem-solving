// Date : 13.01.2025
// Chaya Calendar : Div 3-B grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

// TLE
void solve(){
  int n;
  cin >> n;

  vi a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  int curr = a[0];
  for(int i=1;i<n;i++){
    if(curr > a[i]){
      int ncurr = a[i];
      int j = 2;
      while(ncurr < curr+1){
        ncurr = j*a[i];
        j++;
      }
      curr = ncurr;
    }else if(curr==a[i]){
      curr*=2;
    }else{
      curr = a[i];
    }
  }
  cout << curr << "\n";
}

void solve2(){
  int n;
  cin >> n;

  vi a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  int curr = a[0];
  for(int i=1;i<n;i++){
    if(curr > a[i]){
      // int ncurr = a[i];
      // int j = 2;
      // while(ncurr < curr+1){
      //   ncurr = j*a[i];
      //   j++;
      // }
      curr = 2*a[i];
    }else if(curr==a[i]){
      curr++;
    }else{
      curr = a[i];
    }
  }
  cout << curr << "\n";
}

void editorial(){
  int n;
  cin >> n;

  vi a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  int curr = 0;
  for(int i=0;i<n;i++){
    curr += a[i] - curr%a[i];
  }
  cout << curr << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    editorial();
  }
  return 0;
}
