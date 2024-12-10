// Date : 10/12/2024

#include <iostream>
#include <math.h>

using namespace std;

// Time : O(2*n)
// Space : O(2*n)
void solve(){
  int n;
  cin >> n;
  int arr[2*n];
  for(int i=0;i<2*n;i++){
    cin >> arr[i];
  }

  int zcnt = 0, ocnt = 0;
  for(int i=0;i<2*n;i++){
    if(arr[i]==0){
      zcnt++;
    }else{
      ocnt++;
    }
  }

  int mini = ocnt % 2 !=0 ? 1 : 0;
  int maxi = min(zcnt,ocnt);

  cout << mini << " " << maxi << "\n";

}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
