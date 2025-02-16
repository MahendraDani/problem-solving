// Date : 16.02.2025
// Minimum window substring

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string better(string s, string t){
  int n = s.size(), m = t.size();
  int l=0,r=0, sIdx = -1,cnt=0;
  int hash[256] = {0};
  int minLen = INT_MAX;
  for(int i=0;i<m;i++)
    hash[t[i]-'a']++;

  while(r<n){
    if(hash[s[r]-'a'] > 0) cnt++;
    hash[s[r]-'a']--;
    r++;

    while(cnt == m){
      if(r-l+1 < minLen){
        minLen = r-l+1;
        sIdx = l;
      }

      hash[s[l]-'a']--;
      if(hash[s[l]-'a'] > 0) cnt--;
      l++;
    }
  }
  // cout << s.substr(sIdx,minLen) << "\n";
  // return sIdx == -1 ? "" : s.substr(sIdx, minLen);
}

int main(){
  string s = "ddaaabbca";
  string t = "abc";
  cout << better(s,t) << "\n";
  return 0;
}
