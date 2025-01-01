// Date : 01.01.2025
// Extremely Round - CP 31 (800)
// 9:20 AM - 9:44 AM => AC


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
 Exteremly Round : Integer with only ONE non-zero digit. Ex- 1, 10,40,6000

- If(n<=10) return n;
  | Range | # of extremely round integers |
  | 11-20 | 1 | 
  | 21-30 | 1 |
  | 31-40 | 1 |
  ........
  .......
  | 91-100 | 0 |

  | 10- 999 | 9| => {10,20,30,40,50,60,70,80,90}
  | 100- 9999| 9  |  => {100,200,300,400,500,600,700,800,900}
  | 1000 - 99999 | 9 | => {1000,2000,3000,4000,5000,6000,7000,8000,9000}

  1-9, 10-99,100-999,1000-9999,.....
  in each range there are 9 numbers that satisfy the condition

 Algorithm:
 1. Find in which range the number lies, based on the range ans = (size-1) * 9;
 2. Count from initial digit upto the max extreme and ans++;
*/

void solve(){
  int n;
  cin >> n;

  if(n<=9){
    cout << n << "\n";
    return;
  }

  string num_str = to_string(n);
  int num_len = num_str.size();

  int ans = (num_len -1) * 9;

  for(int i=pow(10,num_len-1); i<=n; i= i + pow(10,num_len-1)){
    ans++;
  }

  cout << ans << "\n";
}

int main(){
  int t;
  cin >> t;

  while(t--){
    solve();
  }
  return 0;
}
