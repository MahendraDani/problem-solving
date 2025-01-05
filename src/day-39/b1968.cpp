// Date : 04.01.2025
// Prefiquence - Div 3-B Grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 Prefix sums can be used? How to obtain all sub-sequences of a string s?
 */

void sub(string inp, string op, vector<string>& ans){
  if(inp.size()==0){
    ans.push_back(op);
    return;
  }

  char first = inp[0];
  inp.erase(inp.begin());
  string op1 = op;
  string op2 = op;
  op2.push_back(first);
  sub(inp,op1,ans);
  sub(inp,op2,ans);
}

void solve(){
  int n,m;
  cin >> n >> m;
  string a,b;
  cin >> a >> b;
  vector<string> seq;
  string op="";

  sub(b,op,seq);

  // sort(seq.rbegin(),seq.rend());
  
  int out = 0;
  for(int i=0;i<n;i++){
    for(int k=1;k<n;k++){
      string pref = a.substr(i,k);
      int mx = 0;
      for(int j=0;j<seq.size();j++){
        if(pref==seq[j]){
          mx = max(mx,(int)pref.size());
        }
      }
      out = max(out,mx);
    }
  }

  cout << out  << "\n";
}


int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
