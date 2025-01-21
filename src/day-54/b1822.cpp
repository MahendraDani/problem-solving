// Date : 21.01.2025
// Karina and Array
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

// Run Time error
// void solve(){
//   int n;
//   cin >> n;

//   vll a(n);
//   vll pos, neg;
//   bool iszero = false;
  
//   for(int i=0;i<n;i++){
//     cin >> a[i];
//   }

//   for(int i=0;i<n;i++){
//     if(a[i]>0){
//       pos.push_back(a[i]);
//     }else if(a[i]==0){
//       iszero = true;
//     }else{
//       neg.push_back(a[i]);
//     }
//   }

//   sort(pos.rbegin(),pos.rend());
//   sort(neg.begin(),neg.end());

//   if(pos.size()>=2 && neg.size()){
//     ll p1 = pos[0] * pos[1];
//     ll p2 = neg[0] * neg[1];

//     if(iszero){
//       cout << max({p1,p2,0LL});
//     }else{
//       cout << max({p1,p2});
//     }
//     cout << "\n";
//     return;
//   }

//   if(pos.size()>=2 && neg.size()<2){
//     ll p1 = pos[0] * pos[1];
//     if(iszero){
//       cout << max({p1,0LL});
//     }else{
//       cout << p1;
//     }
//     cout << "\n";
//     return;
//   }

//   if(pos.size()<2 && neg.size()>=2){
//     ll p1 = neg[0] * neg[1];
//     if(iszero){
//       cout << max({p1,0LL});
//     }else{
//       cout << p1;
//     }
//     cout << "\n";
//     return;
//   }

//   if(pos.size()<2 && neg.size()<2){
//     ll p1 = pos[0] * neg[0];
//     if(iszero){
//       cout << max({p1,0LL});
//     }else{
//       cout << p1;
//     }
//     cout << "\n";
//     return;
//   }
// }

void solve2(){
  int n;
  cin >> n;

  vll a(n);
  
  for(int i=0;i<n;i++){
    cin >> a[i];
  }

  sort(a.begin(),a.end());
  cout << max(a[0]*a[1], a[n-1]*a[n-2]);
  cout << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve2();
  }
  return 0;
}
