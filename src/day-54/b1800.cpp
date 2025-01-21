// Date : 21.01.2025
// Count the number of pairs - Div 3-B grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int n,k;
  cin >> n >> k;

  string s;
  cin >> s;

  map<int,int> lmp;
  map<int,int> ump;

  for(int i=0;i<n;i++){
    if(islower(s[i])){
      lmp[(int)(s[i])]++;
    }else{
      ump[(int)(s[i])]++;
    }
  }

  int ans = 0;
  // available pairs
  for(auto &[lch,lfreq]:lmp){
    if(ump[lch-32] > 0){
      int pairs = min(lfreq,ump[lch-32]);
      ans+=pairs;
      lfreq-=pairs;
      ump[lch-32]-=pairs;
    }
  }

  //self transform : lower to upper
  for(auto &[lch,lfreq]:lmp){
    while(lfreq>=2 && k>0){
      lfreq-=2;
      ans++;
      k--;
    }
  }

  // self transform : upper to lower
  for(auto &[uch,ufreq]:ump){
    while(ufreq>=2 && k>0){
      ufreq-=2;
      ans++;
      k--;
    }
  }
  cout << ans << "\n";
}

void better(){
  int n,k;
  cin >> n >> k;
  
  string s;
  cin >> s;

  vi small(26,0), big(26,0);

  for(auto x:s){
    if(islower(x)){
      small[(int)(x-'a')]++;
    }else{
      big[(int)(x-'A')]++;
    }
  }
  
  int ans = 0;
  // available pairs
  for(int i=0;i<26;i++){
    int pairs = min(small[i],big[i]);
    ans+=pairs;
    small[i]-=pairs;
    big[i]-=pairs;
  }

  for(int i=0;i<26;i++){
    int pairs = min(k,max(small[i],big[i])/2);
    k-=pairs;
    ans+=pairs;
  }
  cout << ans <<  "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    better();
  }
  return 0;
}
