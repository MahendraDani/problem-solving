/*
Date : 05/12/2024
https://codeforces.com/problemset/problem/734/A
*/

#include<iostream>
using namespace std;

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;

  int aCnt = 0;
  int dCnt = 0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='A'){
      aCnt++;
    }else{
      dCnt++;
    }
  }

  if(aCnt == dCnt){
    cout << "Friendship\n";
  }else if(aCnt > dCnt){
    cout << "Anton\n";
  }else{
    cout << "Danik\n";
  }
}

int main(){
  solve();
}
