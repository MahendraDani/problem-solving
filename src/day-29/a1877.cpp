// Date : 25.12.2024
// Goals of Victory - CP 31 (800)

#include <iostream>

using namespace std;

void solve(){
  int n;
  cin >> n;

  int arr[n-1];
  for(int i=0;i<n-1;i++) cin >> arr[i];

  int sum = 0;
  for(int i=0;i<n-1;i++){
    sum+=arr[i];
  }

  cout << (-1)*sum << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
