#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// T(N)=?
// Gives TLE anyways
double powRecurse(double x, int n){
  if(n==0){
    return 1;
  }else if(n>0){
    // positive powers
    return n % 2 == 0 ? powRecurse(x, n / 2) * powRecurse(x, n / 2) : x * powRecurse(x, n - 1);
  }else {
    return n%2 == 0 ? powRecurse(1/x,n/2) * powRecurse(1/x,n/2) : x * powRecurse(1/x,n+1);
  }
}

void solve(){
  double x;
  cin >> x;
  int n;
  cin >> n;

  double ans = powRecurse(x,n);
  cout << ans << "\n";
  return;
}

int main()
{
  solve();
  return 0;
}