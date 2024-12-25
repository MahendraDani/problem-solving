// Date : 25.12.2024
// Amibitous Kid - CP-31 (800)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// In first go, made a mistake of trying to find the least postive and negative number and then comparing them for getting the answer.
// Simpler approach, is that both negative and positive of a number are equally distant from 0, so just make all elements negative or positive and then sort them.
// The least element will be the answer.
void solve(){
  int n;
  cin >> n;

  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];

  for(int i=0;i<n;i++){
    if(arr[i] < 0){
      arr[i] *= -1;
    }
  }
  sort(arr,arr+n);
  cout << arr[0] << "\n";
}

int main(){
  solve();
  return 0;
}
