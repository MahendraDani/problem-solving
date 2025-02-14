// Date : 14.02.2025
// Longest repeating character replacement

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int brute(string s, int k){
  int ans = 0;
  int n = s.size();
  for(int i=0;i<n;i++){
    int hash[27] = {0};
    int maxF = 0;
    for(int j=i;j<n;j++){
      hash[s[j] - 'A']++;
      maxF = max(maxF,hash[s[j]-'A']);
      int changes = (j-i+1) - maxF;
      if(changes <= k){
        ans = max(ans,j-i+1);
      }else break;
    }
  }
  return ans;
}

int better(string s, int k){
  int ans=0,l=0,r=0,maxf=0;
  int hash[26] = {0};
  int n = s.size();
  while(r<n){
    hash[s[r]-'A']++;
    maxf = max(maxf,hash[s[r]-'A']);

    while(((r-l+1)-maxf) > k){
      hash[s[l]-'A']--;
      maxf = 0;
      for(int i=0;i<26;i++)
        maxf = max(maxf,hash[i]);
      l++;
    }
    if(((r-l+1) - maxf) <=k){
      ans = max(ans,r-l+1);
    }
    r++;
  }
  return ans;
}

int best(string s, int k){
  int ans=0,l=0,r=0,maxf=0;
  int hash[26] = {0};
  int n = s.size();

  while(r<n){
    hash[s[r]-'A']++;
    maxf = max(maxf,hash[s[r]-'A']);
    
    if(((r-l+1)-maxf) > k){
      hash[s[l]-'A']--;
      l++;
    }else{
      ans = max(ans,r-l+1);
    }
    r++;
  }
  return ans;
}

int main(){
  string s = "AABABBA";
  int k = 1;
  cout << brute(s,k) << "\n";
  cout << better(s,k) << "\n";
  cout << best(s,k) << "\n";
  return 0;
}
