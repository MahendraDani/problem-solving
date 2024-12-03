// Letter case change
//https://www.youtube.com/watch?v=4eOPYDOiwFo&list=PL_z_8CaSLPWeT1ffjiImo0sYTcnLzo-wY&index=16
//Input : a1B2
// Output : [a1b2,a1B2,A1b2,A1B2]

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(string ip, string op){
  if(ip.size()==0){
    cout << op << "\n";
    return;
  }

  if(isalpha(ip[0])){
    string op1 = op;
    string op2 = op;
    op1.push_back(tolower(ip[0]));
    op2.push_back(toupper(ip[0]));
    ip.erase(ip.begin());
    solve(ip,op1);
    solve(ip,op2);
  }else{
    string op1 = op;
    op1.push_back(ip[0]);
    ip.erase(ip.begin());
    solve(ip,op1);
  }
}

int main(){
  string ip;
  cin >> ip;
  string op = "";
  solve(ip,op);
  return 0;
}
