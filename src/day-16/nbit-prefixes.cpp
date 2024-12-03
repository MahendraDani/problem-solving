/*
Date : 03/12/2024
Print N-bit binary numbers having more 1’s than 0’s in all prefixes
Solve myself, without watching any video
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

void printVec(vector<string>& v){
  for(auto x: v){
    cout << x << " ";
  }
  cout << "\n";
}

void solve(int n,int one,int zero, string op, vector<string>& v){
  if(one + zero == n){
    v.push_back(op);
    return;
  }

  if(one!=0){
    solve(n,one-1,zero,op+'1',v);
  }

  if(zero > one){
    solve(n,one,zero-1,op+'0',v);
  }
}

int main(){
  int n;
  cin >> n;
  
  int one = n;
  int zero = n;
  string op = "";
  vector<string> ans;
  solve(n,one,zero,op,ans);
  printVec(ans);
}
