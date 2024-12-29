// Date : 29.12.2024
// One and Two - CP 31 (800)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
Given:
  Array a, with ai=1 or ai=2 of length n
  To find any `k` such that, 1<=k<=n-1 and 
  a1*a2*a3...ak = ak+1 * ak+2 * ......an

  Steps:
  1. Calculate prefix multiplication, pref= a1*a2*a3*....an;
  2. Init variable `m` = 1,
  3. Traverse through the array from 0...n-1:
    m *= arr[i]
    pref/=arr[i];

    if(n==pref) return i+1; // 1 based indexing in problem
  4. return -1
*/


/*
 WA on hidden cases => try to find counter example => NOT able to find one
 There is a possibility of overflow, 2<=n<=1000
 if the array contains all 2s, 
 {2,2,2,2,2......n} then there is a overflow of `pref` 
 pref = 2^(number of 2s)

 in worst case, pref = 2^1000 => overflow (can't store in any variable)
*/
void solve(){
  int n;
  cin >> n;

  int arr[n];

  for(int i=0;i<n;i++) cin >> arr[i];

  int pref = 1, m =1;
  for(int i=0;i<n;i++){
    pref*=arr[i];
  }

  for(int i=0;i<n;i++){
    m*=arr[i];
    pref/=arr[i];

    if(m==pref){
      cout << i+1 << "\n";
      return;
    }
  }
  cout << -1 << "\n";
}


// Since multiplying overflows
// Just count the number of 2s
// with the same logic as in solve() above
void solve2(){
  int n;
  cin >> n;

  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];

  // count of 2s
  int cnt = 0;

  for(int i=0;i<n;i++){
    if(arr[i]==2) cnt++;
  }

  if(cnt%2!=0){
    // {1,2,1,1,2,2}
    cout << -1 << "\n";
    return;
  }

  if(cnt==0){
    // {1,1,1,1,1,1}
    cout << 1 << "\n";
    return ;
  }

  int m = 0;

  for(int i=0;i<n;i++){
    if(arr[i] == 2){
      m++;
      cnt--;
    }
    
    if(m==cnt){
      cout << i+1 << "\n";
      return;
    }
  }
}

int main(){
  int t;
  cin >> t;

  while(t--){
    solve2();
  }
  return 0;
}
