// Date : 11/12/2024

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solve(){
  int n,k;
  cin >> n >> k;

  vector<int> arr(n,0);

  int prev = 1;
  for(int i=1;i<n;i++){
    if(ceil((i+1)/(float)k) > prev){
      arr[i] = 1;
      prev+= arr[i];
    }
  }
  cout << prev << "\n";
}

void optSolve(){
  int n,k;
  cin >> n >> k;

  cout << ceil((n-1)/float(k)) + 1 << "\n";
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
