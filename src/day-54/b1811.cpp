// Date : 21.01.2025
// Conveyor Belts - Div 2-B grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 - The energy required is abs(xsrc - xdest)
 - x and n-x rows are same belt
 */
void solve(){
  ll n, x1,y1,x2,y2;
  cin >> n >> x1 >> y1 >> x2 >> y2;

  if(x2==n-x1 || x1==n-x2) {
    cout << 0 << "\n";
    return;
  }
  if(y2==n-y1 || y1==n-y2){
    cout << 0 << "\n";
    return;
  }
  cout << min({abs(x1-x2),abs(y1-y2),abs(n-x1-x2),abs(n-y1-y2)}) << "\n";
}

void solve2(){
  ll n, x1,y1,x2,y2;
  cin >> n >> x1 >> y1 >> x2 >> y2;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
