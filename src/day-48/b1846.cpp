// Date : 15.01.2025
// Rudolph and Tic Tac Toe - Div 2-B grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  vector<string> v;
  
  for(int i=0;i<3;i++){
    string s;
    cin >> s;
    v.push_back(s);
  }

  // row-wise
  for(int i=0;i<3;i++){
    string row = v[i];
    if(row[0]==row[1] && row[1]==row[2] && row[0]!='.'){
      cout << row[0] << "\n";
      return;
    }
  }

  //col-wise
  for(int i=0;i<3;i++){
    if(v[0][i]==v[1][i] && v[1][i]==v[2][i] && v[0][i]!='.'){
      cout << v[0][i] << "\n";
      return;
    }
  }

  // principal diag
  if(v[0][0]==v[1][1] && v[1][1]==v[2][2] && v[0][0]!='.'){
    cout << v[0][0] << "\n";
    return;
  }

  // other diagonal
  if(v[0][2]==v[1][1] && v[1][1]==v[2][0] && v[0][2]!='.'){
    cout << v[0][2] << "\n";
    return;
  }

  cout << "DRAW\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
