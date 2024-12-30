// Date : 30.12.2024
// Line Trip

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
 To Find : Min volume of gas tank to go from 0 to x and back to 0;

 n = 4, x=8 => arr = {2,5,6,7}
 Let's assume 'y' is the volume of gas tank
 | Station | Vol Remaining | Refilled | Distance travelled |
 | 2       | y-2           | +2 => y  | 0-2                |
 | 5       | y-3           | +3 => y  | 2-5                |
 | 6       | y-1           | +1 => y  | 5-6                |
 | 7       | y-1           | +1 => y  | 6-7                |
 | 7       | y-1-1= y-2    | +2 => y  | 7-x-7              |
 | 6       | y-1           | +1 => y  | 7-6                |
 | 5       | y-1           | +1 => y  | 6-5                |
 | 2       | y-3           | +3 => y  | 5-2                |
 | 0       | y-2           | +2 => y  | 2-0                |

 For y to be min, y should be at most the min diff between stations
  
 If (x > an)
 ans = max{(a2-a1), (a3-a2)...,(an-an-1),2*(x-an)}

 If(x<=an)
 ans = max{(a2-a1),....(an-an-1)

 WA on hidden test case
*/

// Implementation Error here - 3 times WA
void solve(){
  int n,x;
  cin >> n >> x;

  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];
  
  if(n==1){
    if(x > a[0]){
      // 1 9
      // 5 => OP = 8
      cout << max(a[0], 2 * (x-a[0])) << "\n";
    }else{
      // 1 9
      // 11 => OP = 18
      // 1 9
      // 9 => OP = 18
      cout << 2*x << "\n";
    }
    return ;
  }

  if( x <= a[n-1]){
    // 4 7
    // 1 2 5 8 => OP = 4
    int ans = -1;

    int idx = -1;
    for(int i=1;i<=n-1 && x >= a[i];i++){
      ans = max(ans,a[i]-a[i-1]);
      idx = i;
    }

    cout << max(ans,2*(x-a[idx])) << "\n";
  }else{
    int ans = -1;
    for(int i=1;i<=n-1;i++){
      ans = max(ans,a[i]-a[i-1]);
    }

    cout << max(ans,2*(x - a[n-1])) << "\n";
  }

  // int ans = INT_MIN;
  // for(int i=1;i<=n-1;i++){
  //   ans = max(ans, a[i]-a[i-1]);
  // }

  // if( x <= a[n-1]){
  //   int ans = -1;
  //   // 4 7
  //   // 1 2 5 8 => OP = 4 // so the error was here
  //   //
  //   // 4 7
  //   // 1 2 5 7 => OP = 3
  //   for(int i=1;i<=n-1 && x<arr[i];i++){
  //     ans = max(ans,arr[i]-arr[i-1]);
  //   }
  // }else{
  //   // 4 11
  //   // 1 2 5 8 => OP = 6
  //   cout << max(ans,2*(x-a[n-1])) << "\n";
  // }

}

int editorial(){
  int n, x;
    cin >> n >> x;
    int prev = 0, ans = 0;
    for (int i = 0; i < n; ++i) {
      int a; cin >> a;
      ans = max(ans, a - prev);
      prev = a;
    }
    ans = max(ans, 2 * (x - prev));
    cout << ans << '\n';
}

int main(){
  int t;
  cin >> t;

  while(t--){
    // solve();
    editorial();
  }
  return 0;
}
