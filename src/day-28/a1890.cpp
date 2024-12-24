// Date : 24.12.2024
// Doremy's Paint 3 - CP-31 (800)

#include <iostream>
#include <bits/stdc++.h>
#include <map>

using namespace std;

void solve()
{
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
    cin >> arr[i];

  map<int, int> mp;

  for (int i = 0; i < n; i++)
  {
    mp[arr[i]]++;
  }

  if (mp.size() == 1)
  {
    cout << "YES\n";
  }
  else if (mp.size() == 2)
  {
    int val1, val2;
    int i = 0;
    for (auto x : mp)
    {
      i++;
      if (i == 1)
      {
        val1 = x.second;
      }
      else
      {
        val2 = x.second;
      }
    }

    if (n % 2 == 0)
    {
      cout << (val1 == val2 ? "YES\n" : "NO\n");
    }
    else
    {
      cout << (abs(val1 - val2) == 1 ? "YES\n" : "NO\n");
    }
  }
  else
  {
    cout << "NO\n";
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
