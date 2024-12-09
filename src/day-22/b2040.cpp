#include<iostream>

using namespace std;

const int MAX = 1e5+1;
int ans[MAX];

void solve(){
  int n;
  cin >> n;
  cout << ans[n] << "\n";
}

int main(){
  
  ans[1] = 1;
  int x = 1;
  int j = 2;

  for(int i=2;j<MAX;i++){
    x = x*2 + 2;
    while(j<=x && j< MAX){
      ans[j] = i;
      j++;
    }
    if(x > MAX-1) break;
  }

  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
