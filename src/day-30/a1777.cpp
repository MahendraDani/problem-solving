// Date : 26.12.2024
// Everybody likes good array - CP 31 (800)
#include <iostream>
using namespace std;

void solve(){
  int n;
  cin >> n;

  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];

  // 1->even 0->odd
  int last = arr[0]%2==0 ? 1 : 0;
  int ans = 0;
  int streak = 1;

  for(int i=1;i<n;i++){
    int curr = arr[i]%2==0 ? 1 : 0;
    if(curr==last){
      streak++;
    }else{
      ans+= streak > 0 ? streak-1 : 0;
      streak = 1;
    }
    // cout << arr[i] << " " << streak << "\n";
    last = curr;
  }
  cout << ans << "\n";
}

void solve2(){
  int n;
  cin >> n;

  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];

  // Even : 1, Odd : 0
  int prevParity = arr[0]%2==0 ? 1 : 0;
  int counter = 1;
  int ans = 0;

  for(int i=1;i<n;i++){
    int currParity = arr[i]%2==0 ? 1: 0;
    if(prevParity == currParity){
      counter++;
    }else{
      ans+= counter-1;
      counter = 1;
    }
    prevParity = currParity;
  }
  ans+= counter!=1 ? counter-1 : 0;
  cout << ans << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve2();
  }
}
