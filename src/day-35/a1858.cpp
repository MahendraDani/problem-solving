// Date : 31.12.2024
// Buttons

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
  a=9, b=3, c=3
  | player 1 | player 2 | c |
  | a = 8    | b = 2    | 3 |
  | a = 7    | b = 1    | 3 | 
  | a = 6    | b = 0    | 3 | 
  | a = 5    | c = 2    | 2 |
  | a = 4    | c = 1    | 1 |
  | a = 3    | c = 0    | 0 |
  player 1 wins

  Play optimally, 
  first c should become 0,
  then it depends on which player is the next move, and then just compare a,b vals
*/

void solve(){
  int a,b,c;
  cin >> a >> b >> c;

  if(c%2==0){
    if(b>=a){
      cout << "Second\n";
    }else{
      cout << "First\n";
    }
  }else{
    if(a>=b){
      cout << "First\n";
    }else{
      cout << "Second\n";
    }
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
