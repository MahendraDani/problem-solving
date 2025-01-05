// Date : 04.01.2025
// Symmetric Encoding - Div 3-B Grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 s = "codeforces"
 => r = "cdefors"
 s[i] is replaced with r[r.size()-j] for all i, where j is the index of occurrence of s[i] in r

Input : Encoded string=> O/P decoded/original string

Input : b=tlrhgmaoi => let 's' be the original string

r = aghilmort

b[1] = t => a => s="a"
b[2] = l => l => s="al"
b[3] = r => g => s="alg"
.....

 */
void solve(){
  int n;
  cin >> n;

  string b;
  cin >> b;

  vector<int> c(26,0);
  for(int i=0;i<n;i++){
    c[(int)(b[i]-'a')]++;
  }
  string r;
  for(int i=0;i<26;i++){
    if(c[i]>0){
      r.push_back(char(i+97));
    }
  }
  int len = r.size();
  string s="";
  for(int i=0;i<n;i++){
    int idx = r.find(b[i]);
    s += r[len-idx-1];
  }
  cout << s << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
