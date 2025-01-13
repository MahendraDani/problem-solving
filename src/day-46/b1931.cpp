// Date : 13.01.2025
// Make Equal - Div 3-B grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

// FUCK : How to code the logic??!!!!!!!!!
// With a calm and steady brain! Yep, I coded without any kind of help :)
void solve(){
  int n;
  cin >> n;
  vi a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  int sum = 0;
  for(auto x:a) sum+=x;

  int x = sum/n;
  int have = 0;
  for(int i=0;i<n;i++){
    if(a[i]>=x){
      have += a[i]-x;
    }else{
      if(have >= x-a[i]){
         have -=x-a[i];
      }
      else{
        cout << "NO\n";
        return;
      }
    }
    // cout << a[i]<< " " << have << "\n";
  }
  
  // cout << "\n";
  if(have!=0){
    cout << "NO\n";
  }else{
    cout << "YES\n";
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
