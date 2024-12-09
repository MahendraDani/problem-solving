// Upsolving Codeforces Round 992 (Div 2) 
// Problem A : Game of Division

#include<iostream>
#include<vector>
#include <math.h>

using namespace std;

void solve(){
  int n,k;
  cin >> n >> k;

  int arr[n];

  for(int i=0;i<n;i++) cin >> arr[i];

  for(int i=0;i<n;i++){
    bool canWin = true;
    for(int j=0;j<n;j++){
      if(abs(arr[i]-arr[j])%k==0 && i!=j){
        canWin = false;
        break;
      }
    }
    if(canWin){
      cout << "YES\n";
      cout << i+1 << "\n"; // writing i+1 due to 1-based indexing in question, which cause me a wrong submission
      return;
    }
  }
  cout << "NO\n";
}

void optSolve(){
  int n,k;
  cin >> n >> k;

  vector<vector<int>> b(k);

  for(int i=1;i<=n;i++){
    int x;
    cin >> x;
    b[x%k].push_back(i);
  }
  
  int ans = -1;
  for(int i=0;i<k;i++){
    if((int)b[i].size()==1){
      ans = b[i][0];
      break;
    }
  }

  if(ans == -1){
    cout << "NO\n";
  }else{
    cout << "YES\n" << ans << "\n";
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    // solve();
    optSolve();
  }
  return 0;
}
