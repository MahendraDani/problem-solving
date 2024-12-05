// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

#include<iostream>

using namespace std;

string removeDuplicates(string s){
  string ans = "";

  int i=0;
  while(i<s.size()){
    if(ans.empty() || ans.back()!=s[i]){
      ans+=s[i];
    }else{
      ans.pop_back();
    }
    i++;
  }
  return ans;
}

void solve(){
  string s;
  cin >> s;
  cout << removeDuplicates(s) << "\n";
  
}

int main(){
  solve();
  return 0;
}
