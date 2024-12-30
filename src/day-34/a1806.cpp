// Date : 30.12.2024
// Walking Master

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// WA on hidden test case
void solve()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (d < b)
  {
    // when dest in below src
    // S(10,4) D(10,3) => -1
    cout << -1 << "\n";
    // cout << "MY BAD\n";
    return;
  }

  if (b == d && c - a > 0)
  {
    // when points are on same horizontal line, but src is before dest
    // S(10,4) D(12,4) => -1
    cout << -1 << "\n";
    // cout << "NO!, My BAD\n";
    return;
  }

  if (b == d && c - a <= 0)
  {
    // when points are on same horizontal line, but src is after dest
    // S(10,4) D(4,4) => 6
    // cout << "HERE: " << a-c << "\n";
    cout << abs(a - c) << "\n";
    return;
  }

  if (abs(c - a) > abs(d - b))
  {
    // dest is below diagonal
    // S(1,2) D(5,4)
    // cout << "OOPS!, MY BAD\n";
    cout << -1 << "\n";
    return;
  }

  if (c == a && b < d)
  {
    // when points on same vertical line, zig-zag pattern
    // S(10,4) D(10,8) => (8-4)*2 => 16
    // cout << "ZIG ZAG\n";
    cout << abs(d - b) * 2 << "\n";
    return;
  }

  if (abs(c - a) == abs(d - b) && c - a > 0)
  {
    // both points lie on a diagonal
    // S(1,2) D(5,6) => 4
    // cout << "DIAGONAL\n";
    cout << abs(c - a) << "\n";
    return;
  }

  if (abs(c - a) < abs(d - b) && (c - a) > 0)
  {
    // when dest is above diagonal and to right of src
    // S(1,2) D(5,8)

    int q = b - c + a;
    int path1 = abs(c - a) + 2 * abs(d - q);

    int p = c - d + b;

    // cout << "EXACTLY HERE\n";
    int path2 = abs(p - a) + abs(c - p);
    cout << min(path1, path2) << "\n";
    return;
  }

  if (abs(c - a) <= abs(d - b) && (c - a) < 0)
  {
    // when dest is above diagonal to left of src
    int q = d - b + a;
    int path1 = abs(d - b) + abs(q - c);

    // cout << "EXACTLY THERE\n";
    int p = c - d + b;
    int path2 = abs(a - p) + abs(c - a);
    cout << min(path1, path2) << "\n";
    return;
  }

  cout << "I SHOULD BE HERE\n";
}

// WA on hidden test case
void solve2()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (d < b)
  {
    // when dest in below src
    // S(10,4) D(10,3) => -1
    cout << -1 << "\n";
    // cout << "MY BAD\n";
    return;
  }

  if (b == d && c - a > 0)
  {
    // when points are on same horizontal line, but src is before dest
    // S(10,4) D(12,4) => -1
    cout << -1 << "\n";
    // cout << "NO!, My BAD\n";
    return;
  }

  if (b == d && c - a <= 0)
  {
    // when points are on same horizontal line, but src is after dest
    // S(10,4) D(4,4) => 6
    // cout << "HERE: " << a-c << "\n";
    cout << abs(a - c) << "\n";
    return;
  }

  if (abs(c - a) > abs(d - b))
  {
    // dest is below diagonal
    // S(1,2) D(5,4)
    // cout << "OOPS!, MY BAD\n";
    cout << -1 << "\n";
    return;
  }

  if (c == a && b < d)
  {
    // when points on same vertical line, zig-zag pattern
    // S(10,4) D(10,8) => (8-4)*2 => 16
    // cout << "ZIG ZAG\n";
    cout << abs(d - b) * 2 << "\n";
    return;
  }

  if (abs(c - a) == abs(d - b) && c - a > 0)
  {
    // both points lie on a diagonal
    // S(1,2) D(5,6) => 4
    // cout << "DIAGONAL\n";
    cout << abs(c - a) << "\n";
    return;
  }

  if (abs(c - a) < abs(d - b) && (c - a) > 0)
  {
    // when dest is above diagonal and to right of src
    // S(1,2) D(5,8)

    int q = b - c + a;
    int path1 = abs(c - a) + 2 * abs(d - q);

    int p = c - d + b;

    // cout << "EXACTLY HERE\n";
    int path2 = abs(p - a) + abs(c - p);

    int r = d - b + a;
    int path3 = abs(r - a) + abs(r - c);
    cout << min({path1, path2, path3}) << "\n";
    return;
  }

  if (abs(c - a) <= abs(d - b) && (c - a) < 0)
  {
    // when dest is above diagonal to left of src
    // S(1,1) D(0,2)
    int q = d - b + a;
    int path1 = abs(d - b) + abs(q - c);

    // cout << "EXACTLY THERE\n";
    int p = c - d + b;
    int path2 = abs(a - p) + abs(c - a);

    int path3 = abs(c - b) + 2 * abs(d - b);
    cout << min({path1, path2, path3}) << "\n";
    return;
  }

  cout << "I SHOULD BE HERE\n";
}

void solve3()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (d < b)
  {
    // when dest in below src
    // S(10,4) D(10,3) => -1
    cout << -1 << "\n";
    // cout << "MY BAD\n";
    return;
  }

  if (b == d && c - a > 0)
  {
    // when points are on same horizontal line, but src is before dest
    // S(10,4) D(12,4) => -1
    cout << -1 << "\n";
    // cout << "NO!, My BAD\n";
    return;
  }

  if (b == d && c - a <= 0)
  {
    // when points are on same horizontal line, but src is after dest
    // S(10,4) D(4,4) => 6
    // cout << "HERE: " << a-c << "\n";
    cout << abs(a - c) << "\n";
    return;
  }

  if (abs(c - a) > abs(d - b))
  {
    // dest is below diagonal
    // S(1,2) D(5,4)
    // cout << "OOPS!, MY BAD\n";
    cout << -1 << "\n";
    return;
  }

  if (c == a && b < d)
  {
    // when points on same vertical line, zig-zag pattern
    // S(10,4) D(10,8) => (8-4)*2 => 16
    // cout << "ZIG ZAG\n";
    cout << abs(d - b) * 2 << "\n";
    return;
  }

  if (abs(c - a) == abs(d - b) && c - a > 0)
  {
    // both points lie on a diagonal
    // S(1,2) D(5,6) => 4
    // cout << "DIAGONAL\n";
    cout << abs(c - a) << "\n";
    return;
  }

  if (abs(c - a) < abs(d - b) && (c - a) > 0)
  {
    // when dest is above diagonal and to right of src
    // S(1,2) D(5,8)

    int q = b - c + a;
    int path1 = abs(c - a) + 2 * abs(d - q);

    int p = c - d + b;

    // cout << "EXACTLY HERE\n";
    int path2 = abs(p - a) + abs(c - p);

    int r = d - b + a;
    int path3 = abs(r - a) + abs(r - c);
    cout << min({path1, path2, path3}) << "\n";
    return;
  }

  if (abs(c - a) <= abs(d - b) && (c - a) < 0)
  {
    // when dest is above diagonal to left of src
    // S(1,1) D(0,2)
    int q = d - b + a;
    int path1 = abs(d - b) + abs(q - c);

    // cout << "EXACTLY THERE\n";
    int p = c - d + b;
    int path2 = abs(a - p) + abs(c - a);

    int path3 = abs(c - b) + 2 * abs(d - b);
    // cout << "path1 :" << path1 << "\n";
    // cout << "path2 :" << path2 << "\n";
    // cout << "path3 :" << path3 << "\n";
    // cout << min({path1,path2,path3}) << "\n";
    cout << path1 << "\n";
    return;
  }

  cout << "I SHOULD BE HERE\n";
}

// Perhaps, it was too simple and I made it too complicated
void editorial()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if (b <= d && c <= a + d - b)
  {
    cout << (d - b) + (a + d - b - c) << "\n";
  }
  else
  {
    cout << "-1\n";
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    editorial();
  }
  return 0;
}
