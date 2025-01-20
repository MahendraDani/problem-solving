#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

// as 2<=n<=30, adding powers of 2 upto 30 can't be stored in any variable : I WAS WRONG => GOT AC
void solve(){
  int n;
  cin >> n;

  ll a =0, b=0;
  for(int i=n/2;i<=n-1;i++){
    b+=pow(2,i);
  }

  for(int i=1;i<n/2;i++){
    a+=pow(2,i);
  }
  a+=pow(2,n);

  cout << abs(a-b) << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
