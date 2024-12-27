// Date : 27.12.2024
// Forbidden Integer

#include <iostream>

using namespace std;

/*
 1) n=10, k=3, x=2
 -> 10-> 3,3,3 1
 what I did? take k n/k times and then rem = n- k* (n/k), rem can be filled with 1s
 -> need to cover cases where k==x or x=1

 1 is special , case when x==1 and x!=1
 cases when x==k, x!=k
*/

void solve(){
  int n,k,x;
  cin >> n >> k >> x;

  if(x==1){
    if(n==k){
      if(k==x){
        // 1 1 1
        cout << "NO\n";
      }else{
        // 6 6 1 -> yes
        cout << "YES\n";
        cout << 1 << "\n";
        cout << k << "\n";
      }
    }else{
      // n > k
      // 14 10 1 -> {3,3,3,3,2}, {10,4}
      // 15 10 1 -> {3,3,3,3,3}, {10,5}
      // 17 10 1 -> {3,3,3,3,3,2}, {10,7}
    }
  }else{
  }
}

void solve2(){
  int n,k,x;
  cin >> n >> k >> x;

  if(n/2 == k){
    // 10 5 _
    if(k==x){
      // 10 5 5 -> {4,4,2}
      cout << "YES\n";
      cout << n/k-1 + (n-(k-1)*(n/k-1))<< "\n";
      for (int i=0; i<n/k;i++){
        cout << k-1 << "\n";
      }
      cout << n - (k-1)*(n/k-1) << "\n";
    }else{
      // 10 5 x, x!=5 -> {5,5} in general, -> {k,k,k,.....n/k times}
      cout << "YES\n";
      cout << n/k << "YES\n";
      for(int i=0;i<n/k;i++){
        cout << k << " ";
      }
      cout << "\n";
    }
  }else if(n/2 > k){
    // 11 5 _
    if(k==x){
      // 11 5 5
      cout << "YES\n"
    }else{
      // x < k
    }
  }else{
    // 11 7 _
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
