// Date : 13.02.2025
// Longest substring with at most k distinct characters
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int brute(string s){
  int n = s.size();
  int ans = -1;
  for(int i=0;i<n;i++){
    set<char> st;
    for(int j=i;j<n;j++){
      st.insert(s[j]);
      if(st.size() <=2){
        ans = max(ans,j-i+1);
      }else {
        break;
      }
    }
  }
  return ans;
}

int better(string s){
  int n = s.size();
  int ans = -1, l=0, r=0;
  map<char,int> mp;

  while(r<n){
    mp[s[r]]++;
    if(mp.size() > 2){
      while(mp.size() > 2){
        mp[s[l]]--;
        if(mp[s[l]]==0){
          mp.erase(s[l]);
        }
        l++;
      }
    }else{
      ans = max(ans,r-l+1);
    }
    r++;
  }
  return ans;
}

int best(string s){
  int n = s.size();
  int ans = -1, l=0, r=0;
  map<char,int> mp;

  while(r<n){
    mp[s[r]]++;
    if(mp.size() > 2){
      mp[s[l]]--;
      if(mp[s[l]]==0){
        mp.erase(s[l]);
      }
      l++;
    }else{
      ans = max(ans,r-l+1);
    }
    r++;
  }
  return ans;
}

int main(){
  string s = "aaabbccd";
  cout << brute(s) << "\n";
  cout << better(s) << "\n";
  cout << best(s) << "\n";
  return 0;
}
