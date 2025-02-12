// Length of longest sub-string with no repeating characters
#include <iostream>
#include <bits/stdc++.h>
#include <map>

using namespace std;

int brute(string s){
  int maxLen = 0;
  int n = s.size();
  for(int i=0;i<n;i++){
    int hash[256] = {0};
    for(int j=i;j<n;j++){
      if(hash[s[j]]==1) break;

      maxLen = max(maxLen,j-i+1);
      hash[s[j]] = 1;
    }
  }
  return maxLen;
}

int better(string s){
  map<char,int> mp;

  int n = s.size();
  int start=0, end=0, maxLen=0;
  while(end < n){
    if(mp[s[end]]){
      start = mp[s[end]] + 1;
      end++;
    }else{
      maxLen = max(maxLen,end-start + 1);
      mp[s[end]] = end;
      end++;
    }
  }
  return maxLen;
}

int main(){
  string s = "cadbzabcd";
  cout << brute(s) << "\n";
  cout << better(s) << "\n";
  return 0;
}
