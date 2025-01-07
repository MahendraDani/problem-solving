// Date : 07.01.2025
// Petya and Strings
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  string a,b;
  cin >> a >> b;
  
  //sort(a.begin(),a.end());
  //sort(b.begin(),b.end());
  for(int i=0;i<a.size();i++){
    int a1 = tolower(a[i]);
    int b1 = tolower(b[i]);
    if(a1<b1){
      cout << -1 << "\n";
      return;
    }else if(a1>b1){
      cout << 1 << "\n";
      return;
    }
  }

  cout << 0 << "\n";
}

int main(){
  solve();
  return 0;
}
