// Date : 13.01.2025
// Following the string - Div 3-B grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int n;
  cin >> n;

  vi a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  
  map<char,int> used;
  string ans = "a";
  used['a']++;
  int last = 97;
  for(int i=1;i<n;i++){
    if(a[i]==0){
      // next unique char
      last++;
      char ch = char(last);
      ans+=ch;
      used[ch]++;
    }else{
      // used char with freq a[i]
      for(auto &[ch,freq]:used){
        if(freq==a[i]){
          ans+=ch;
          freq++;
          break;
        }
      }
    }
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
