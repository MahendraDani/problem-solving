// Date : 07.01.2025
// Chemistry
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 Any string with length, l is a palindrome if
 if(l==even)
  - all the distinct chars have freq >=2 and even

 if(l==odd)
  - exactly one char has freq =1
  - rest of the chars have freq >=2 and even
 */

void solve(){
  int n,k;
  cin >> n >> k;

  string s;
  cin >> s;

  // freq
  map<char,int> mp;

  for(auto x:s){
    mp[x]++;
  }
  int oneCnt=0, badCnt = 0;
  for(auto &[x,y]:mp){
    if(y==1){
      oneCnt++;
    }else if(y>2 && y%2!=0){
      badCnt++;
    }
  }

  if((n-k)%2==0){
    // even length palindrome
    if(k== (oneCnt+badCnt)){
      cout << "YES\n";
    }else if(k<(oneCnt+badCnt)){
      cout << "NO\n";
    }else{
      k-=oneCnt+badCnt;
      cout << (k%2==0 || k==0 ? "YES" : "NO") << "\n";
    }
  }else{
    oneCnt--;
     if(k== (oneCnt+badCnt)){
      cout << "YES\n";
    }else if(k<(oneCnt+badCnt)){
      cout << "NO\n";
    }else{
      k-=oneCnt+badCnt;
      cout << (k%2==0 || k==0 ? "YES" : "NO") << "\n";
    }
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
