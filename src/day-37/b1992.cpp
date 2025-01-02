// Date : 02.01.2025
// Angry Monk - CP 31 Div 3-B Grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 any element k, takes k-1 ops to break into k ones
 merging y ones requires y ops
 */
void solve(){
  int n,k;
  cin >> n >> k;

  vector<int> a(k);
  for(int i=0;i<k;i++) cin >> a[i];
  
  sort(a.rbegin(),a.rend());

  int steps = 0, ones = 0;

  for(int i=1;i<k;i++){
    if(a[i]==1){
      ones++;
    }else{
      steps += a[i]-1;
      ones += a[i];
    }
  }

  cout << steps + ones << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
