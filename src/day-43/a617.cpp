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

  if(n<=5){
    cout << 1 << "\n";
    return;
  }

  if(n%5==0){
    cout << n/5 << "\n";
  }else{
    cout << n/5 + 1 << "\n";
  }
}

int main(){
 solve();
 return 0;
}
