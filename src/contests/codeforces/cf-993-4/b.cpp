#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(){
  string s;
  cin >> s;

  string ans = "";
  
  // reverse the string
  int start = 0;
  int end = s.size()-1;
  int mid;
  while(start <= end){
    char temp = s[start];
    s[start] = s[end];
    s[end] = temp;
    start++;
    end--;
  }
  
  for(int i=0;i<s.size();i++){
    if(s[i]=='p'){
      ans.push_back('q');
    }else if(s[i]=='q'){
      ans.push_back('p');
    }else{
      ans.push_back('w');
    }
  }
  cout << ans << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
