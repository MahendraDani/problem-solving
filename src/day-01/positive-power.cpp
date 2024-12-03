#include <iostream>
#include <map>
#include <bits/stdc++.h>

using namespace std;

// Constraints n>0

// T(N) = 2*T(N) + O(1)
// Time : O(N)
double powRecurse(double x, int n)
{
  if (n == 0)
  {
    return 1;
  }

  return x * powRecurse(x, n - 1);
}

// Time : O(log(N))
double powRecurseOptimal(double x, int n)
{
  if (n == 0)
  {
    return 1;
  }

  return n % 2 == 0 ? powRecurseOptimal(x, n / 2) * powRecurseOptimal(x, n / 2) : x * powRecurseOptimal(x, n - 1);
}

// Time : O(log(N))
map<pair<double, int>, double> memo;
double powRecurseMemo(double x, int n){
  if(n==0){
    return 1;
  }

  if(memo.find({x, n})!=memo.end()){
    return memo[{x, n}];
  }

  memo[{x,n}] = n%2==0 ? powRecurseMemo(x, n/2) * powRecurseMemo(x, n/2) : x * powRecurseMemo(x, n-1);
  return memo[{x, n}];
}

void solve()
{
  double x;
  cin >> x;
  int n;
  cin >> n;

  double ans = powRecurse(x, n);
  cout << ans << "\n";

  double ans2 = powRecurseOptimal(x, n);
  cout << ans2 << "\n";

  double ans3 = powRecurseMemo(x, n);
  cout << ans3 << "\n";
}

int main()
{
  solve();
}
