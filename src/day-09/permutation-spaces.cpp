// Permutation spaces
// Watch https://www.youtube.com/watch?v=1cspuQ6qHW0&list=PL_z_8CaSLPWeT1ffjiImo0sYTcnLzo-wY&index=14
// Input : "ABC"
// Output : "ABC", "A_BC", "AB_C", "A_B_C" were underscore(-) represents space

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(string ip,string op){
  if(ip.size()==0){
    cout << op << "\n";
    return;
  }

  string op1 = op;
  string op2 = op;
  char prefix = '$';
  op1.push_back(prefix);
  op1.push_back(ip[0]);
  op2.push_back(ip[0]);
  ip.erase(ip.begin()+0);
  solve(ip,op1);
  solve(ip,op2);
}

int main(){
  string s;
  cin >> s;

  string op = "";
  op.push_back(s[0]);
  s.erase(s.begin()+0);
  solve(s,op);
  return 0;
}
