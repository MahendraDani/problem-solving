// Premutataion with case change
// Input : ab
// Output : [ab,Ab,aB,AB]
// https://www.youtube.com/watch?v=J2Er5XceU_I&list=PL_z_8CaSLPWeT1ffjiImo0sYTcnLzo-wY&index=15
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char convertToUpperCase(char lower){
  int asc = (int)(lower);
  int casc = asc - 32;
  char upper = (char)casc;
  return upper;
}

void solve(string ip, string op){
  if(ip.size()==0){
    cout << op << "\n";
    return;
  }

  string op1 = op;
  string op2 = op;
  op1.push_back(convertToUpperCase(ip[0])); // alternative toupper(ip[0]) built-in would work the same
  op2.push_back(ip[0]);
  ip.erase(ip.begin()+0);
  solve(ip,op1);
  solve(ip,op2);
}

int main(){
  string ip;
  cin >> ip;
  string op = "";
  solve(ip,op);
  return 0;
}
