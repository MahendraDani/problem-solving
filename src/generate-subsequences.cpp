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

// WRONG
void solve2(int idx, string ip,string op,vector<int>& hash){
  if(idx >= ip.size()){
    cout << op << " ";
    return;
  }

  if(hash[ip[idx]-'a'] !=0 ){
    // if already visited char
    solve2(idx + 1,ip,op,hash);
    return;
  }

  hash[ip[idx]-'a']++;
  solve2(idx + 1, ip, op + ip[idx],hash);
  solve2(idx + 1, ip, op,hash);
}

int main(){
  string ip;
  cin >> ip;
  
  string op = "";
  vector<int> hash(26,0);
  solve2(0,ip,op,hash);
  cout << "\n";
  return 0;
}
