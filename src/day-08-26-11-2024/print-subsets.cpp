// Print all subsets of a string
// Watch https://www.youtube.com/watch?v=Yg5a2FxU4Fo&list=PL_z_8CaSLPWeT1ffjiImo0sYTcnLzo-wY&index=12

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void solve(string ip,string op){
  if(ip.size()==0){
    cout << op << " ";
    return;
  }

  string op1 = op;
  string op2 = op;
  op2.push_back(ip[0]);
  ip.erase(ip.begin()+0);
  solve(ip,op1);
  solve(ip,op2);
}

int main(){
  string ip = "abc";
  string op = "";
  solve(ip,op);
  return 0;
}
