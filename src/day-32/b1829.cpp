// Date : 28.12.2024
// Blank Space - CP 31 (800)

#include <iostream>
using namespace std;

void solve(){
  int n;
  cin >> n;

  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  bool last = arr[0];
  int streak = last==0 ? 1 : 0;
  int ans = streak;
  for(int i=1;i<n;i++){
    if(last == arr[i]){
      if(arr[i]==0){
        streak++;
      }else{
        streak = 0;
      }
    }else{
      if(last==0 && arr[i]==1){
        streak = 0;
      }else{
        streak = 1;
      }
    }
    ans = max(ans,streak);
    last = arr[i];
  }

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
