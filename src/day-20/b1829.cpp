#include<iostream>
using namespace std;

void solve(){
  int n;
  cin >> n;

  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  int ans = -1;
  int cnt = 0; 
  for(int i=0;i<n;i++){
    if(arr[i]==1){
      ans = max(ans,cnt);
      cnt = 0;
    }else{
      cnt++;
    }
  }
  ans = max(ans,cnt);

  cout << ans << "\n";
}

int main(){
  int t;
  cin >> t;

  while(t--){
    solve();
  }
  return 0;
}
