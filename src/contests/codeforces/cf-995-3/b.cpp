#include <iostream>
#include <bits/stdc++.h>

#define ll long long


using namespace std;

void solve(){
  ll n,a,b,c;
  cin >> n >> a >> b >> c;

  ll sum = a + b + c;
  if(sum==n){
    cout << 3 << "\n";
  }else if (sum < n){
    int cycles = n/sum;
    int days = cycles * 3;
    int rem = n - cycles*sum;
    if(rem == 0){
      cout << days << "\n";
    }else if(a >=rem ){
      cout << days + 1 << "\n";
    }else if(a + b >=rem){
      cout << days + 2 << "\n";
    }else{
      cout << days + 3 << "\n";
    }
  }else{
    if(a>=n){
      cout << 1 << "\n";
    }else if(a+b >=n){
      cout << 2 << "\n";
    }else{
      cout << 3 << "\n";
    }
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
