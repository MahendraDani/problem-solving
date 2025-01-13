// Date : 13.01.2025
// Turtle Math: Fast Three Task - Div 3-B grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 sum can be 3k, 3k+1, 3k+2
 */

void solve(){
  int n;
  cin >> n;

  vi a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  int sum = 0;
  for(auto x:a) sum+=x;

  if(sum%3==0){
    cout << 0 << "\n";
  }else if(sum%3==1){
    // remove element with value 1 from array => 1 move
    // increase element with value 2 to 3 => 1 move
    for(int i=0;i<n;i++){
      if(a[i]%3==1){
        // remove the element
        cout << 1 << "\n";
        return;
      }
    }
    // increment the value by 2
    cout << 2 << "\n";
  }else{
    for(int i=0;i<n;i++){
      if(a[i]%3==2){
        cout << 1 << "\n";
        return;
      }
    }

    cout << 1 << "\n";
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
