#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

// void solve(){
//   int n,k;
//   cin >> n >> k;

//   vi a(n);
//   for(int i=0;i<n;i++) cin >> a[i];

//   int cnt = 0;

//   for(int i=0;i<n;i++){
//     if(a[i] == -1) continue;
//     for(int j=i+1;j<n;j++){
//       if(a[i] + a[j] == k && a[j]!=-1){
//         // cout << a[i] << " " << a[j] << "\n";
//         a[j] = -1;
//         cnt++;
//         break;
//       }
//     }
//   }
//   cout << cnt << "\n";
// }

// void solve2(){
//   int n,k;
//   cin >> n >> k;

//   vi a(n);
//   for(int i=0;i<n;i++) cin >> a[i];

//   map<int,int> mp;

//   for(int i=0;i<n;i++){
//     mp[a[i]]++;
//   }

//   int cnt = 0;
//   for(auto &[x,freq] : mp){
//     if(freq!=0){
//       if(mp[k-x]>0){
//         mp[k-x]--;
//         mp[x]--;
//         cnt++;
//       }
//     }
//   }

//   cout << cnt << "\n";
// }

void solve3(){
  int n,k;
  cin >> n >> k;

  vi a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  vi freq(n+1);
  for(int i=0;i<n;i++){
    freq[a[i]]++;
  }

  int cnt = 0;
  for(int i=1; i<=n;i++){
    if(freq[i]>0){
      if(k-i<=n && freq[k-i]>0){
        if(i!=k-i) cnt += min(freq[i],freq[k-i]);
        else cnt += freq[i]/2;
        freq[i] = 0;
        freq[k-i] = 0;
      }
    }
  }

  cout << cnt << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve3();
  }
  return 0;
}
