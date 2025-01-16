#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

// k,2k,3k......wk
// total cost = sum = w*(2*k + (w-1)k)/2
void solve(){
  int k,n,w;
  cin >> k >> n >> w;

  int total = w*(2*k + (w-1)*k)/2;
  int diff = total - n;
  if(diff<0){
    cout << 0 << "\n";
  }else{
    cout << abs(diff) << "\n";
  }
}

int main(){
  solve();
  return 0;
}
