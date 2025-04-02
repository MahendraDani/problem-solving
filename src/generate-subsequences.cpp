#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(int idx,string ip, string op,set<string>& st){
  if(idx >= ip.size()){
    st.insert(op);
    return;
  }

  solve(idx + 1, ip, op + ip[idx],st);
  solve(idx + 1, ip, op,st);
}

int main(){
  string ip;
  cin >> ip;

  string op = "";
  set<string> st;
  solve(0, ip,op,st);
  for(auto x: st){
    cout << x << " ";
  }
  cout << "\n";
  return 0;
}
