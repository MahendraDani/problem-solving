// Date : 28.12.2024
// Prepend and Append

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Two pointers
void solve(){
  int n;
  cin >> n;

  string s;
  cin >> s;

  int start = 0, end = n-1;
  int ans = n;

  while(start < end){
    if((s[start]=='0' && s[end]=='1') || (s[start]=='1' && s[end]=='0')){
      ans-=2;
    }else{
      break;
    }

    start++;
    end--;
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
