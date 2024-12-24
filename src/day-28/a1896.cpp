// Date : 24.12.2024
// Jagged Swaps - CP-31 (800)

#include <iostream>

using namespace std;

// Wrong for : 1 10 9 6 7 8 5 4 3 2
void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}

// Observation : a1 never changes after any number of ops, that means a1=1 should hold for the arrays to sort
void optSolve(){
  int n;
  cin >> n;

  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];

  if(a[0]==1){
    cout << "YES\n";
  }else{
    cout << "NO\n";
  }

}

void solve(){
  int n;
  cin >> n;

  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];

  for(int i=1;i<n-1;i++){
    if(a[i-1] < a[i] && a[i] > a[i+1]){
      int temp = a[i];
      a[i] = a[i+1];
      a[i+1] = temp;
    }
  }

  for(int i=0;i<n-1;i++){
    if(a[i] > a[i+1]){
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    optSolve();
  }
  return 0;
}
