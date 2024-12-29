// Date : 29.12.2024
// Make it Beautiful - CP 31 (800)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
ugly : if array a, contains atleast 1 element which is equal to the sum of all elements before it
beautiful : if array is not ugly, then its beautiful

To do : reorder the array such that it's "beautiful" and print any one of them else print NO

Algorithm:
1. If array contains only one element return "NO"
2. Sort array in desc order
3. if(arr[0]==arr[1]) => swap(arr[1],arr[n-1])
4. Print YES\n and the array
*/

void solve(){
  int n;
  cin >> n;

  vector<int> arr(n,0);
  for(int i=0;i<n;i++) cin >> arr[i];

  sort(arr.rbegin(),arr.rend());

  set<int> st;
  for(auto x: arr) st.insert(x);

  if(st.size()==1){
    // {10,10}, {6,6,6,6}
    cout << "NO\n";
    return;
  }

  if(arr[0]==arr[1]){
    int temp = arr[1];
    arr[1] = arr[n-1];
    arr[n-1] = temp;
  }
  
  cout << "YES\n";
  for(auto x: arr) cout << x << " ";

  cout << "\n";

}

int main(){
  int t;
  cin >> t;

  while(t--){
    solve();
  }
  return 0;
}
