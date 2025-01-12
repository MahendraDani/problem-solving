#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;


void solve(){
  int n,a,b;
  cin >> n >> a >> b;
  
  int diff = abs(a-b);
  if(diff%2==0){
    cout << "YES\n";
  }else{
    cout << "NO\n";
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
