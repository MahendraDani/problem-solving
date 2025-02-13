// Date : 13.02.2025
// Number of substrings containing all three characters

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int brute(string s){
  int n = s.size();
  int ans=0; 
  for(int i=0;i<n;i++){
    set<char> st;
    for(int j=i;j<n;j++){
      st.insert(s[j]);
      if(st.size()==3){
        ans++;
      }
    }
  }
  return ans;
}

// For every character, there exists some sub-subtrings that end with it
int best(string s){
  int n = s.size();
  int ans = 0;
  int a=-1,b=-1,c=-1;
  for(int i=0;i<n;i++){
    if(s[i]=='a') a=i;
    else if(s[i]=='b') b=i;
    else if(s[i]=='c') c=i;

    if(a!=-1 && b!=-1 && c!=-1){
      ans += min({a,b,c}) + 1;
    }
  }
  return ans;
}

int main(){
  string s = "abcabc";
  cout << brute(s) << "\n";
  cout << best(s) << "\n";
  return 0;
}
