// Date : 12.01.2025
// Balanced Round
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 n=8, k=3
 a = 17 3 1 20 12 5 17 12
 sort => 1 3 5 12 12 17 17 20
 3-1 = 2 <k
 5-3 = 2 <k
 12-5 = 7 > k => remove 12
 ...
 so on

 8 1
 8 3 1 4 5 10 7 3
 sort => 1 3 3 4 5 7 8 10
 => 3-1 = 2 > 1 => remove 1
 => 3-3 =0
 => 4-3 = 1 
 => 5-4 = 1
 => 7-5 = 2 > 1 => remove 7
 remove 8,10
 ans = 4
 */
void solve(){
  int n,k;
  cin >> n >> k;

  vector<int> a(n,0);

  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  int ans = 0;
  sort(a.begin(),a.end());
  int last = a[0];
  for(int i=1;i<n;i++){
    if(a[i]-last>k){
      ans++;
    }
    last = a[i-1];
  }
  cout << ans << "\n";
}

void solve2(){
  int n,k;
  cin >> n >> k;

  vector<int> a(n,0);

  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  /*
   if a[i] - a[i-1] > k then remove a[i-1] and last = a[i] => FALSE
   */
  int ans = 0;
  int last = a[0];
  for(int i=1;i<n;i++){
    if(a[i]-last > k){
      ans++;
      last = a[i];
    }
    last = a[i];
  }
  cout << ans << "\n";
}

void editorial(){
  int n,k;
  cin >> n >> k;

  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  sort(a.begin(),a.end());
  int ans = 1;
  int cnt = 1;
  for(int i=1;i<n;i++){
    if(a[i]-a[i-1]>k){
      cnt = 1;
    }else{
      cnt++;
    }
    ans = max(ans,cnt);
  }
  cout << n - ans << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    editorial();
  }
  return 0;
}
