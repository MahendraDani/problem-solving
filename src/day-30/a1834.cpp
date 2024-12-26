// Date : 26.12.2024
// Unit array - CP 31 (800)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(){
  int n;
  cin >> n;

  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];

  int P = 0, N=0, sum = 0;
  for(int i=0;i<n;i++){
    if(arr[i]==1){
      P++;
    }else{
      N++;
    }
    sum+=arr[i];
  }

  if(sum>=0){
    cout << (N%2==0 ? 0 : 1) << "\n";
  }else{
    int k = 0;
    while(sum < 0){
      sum+=2;
      N--;
      k++;
    }

    cout << k + (N%2==0 ? 0 : 1) << "\n";
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}
