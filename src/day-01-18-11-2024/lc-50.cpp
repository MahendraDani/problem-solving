/*
Day 01 : 18th November, 2024
Concepts : Recursion
Blog : https://mahendradani.vercel.app/blogs/problem-solving-18-11-2024
Problem : 50. Pow(x,n);
Link : https://leetcode.com/problems/powx-n/description/
*/

#include<iostream>
#include<bits/stdc++.h>
#include<map>
#include<unordered_map>

using namespace std;

// Time : O(N) -> need to calculate 5*5*5*5... N times, where N is the power
double naivePow(double x, int n){
  double ans = 1;
  if(n==0){
    return 1;
  }else if(n>0){
    for(int i=1;i<=n;i++){
      ans*=x;
    }
  }else{
    for(int i=n;i<0;i++){
      ans/=x;
    }
  }
  return ans;
}

// T(N) = 2*T(N/2) + c, becuase each problem is divided into 2 subproblems and  at each level we need to solve 2 problems
// Time : O(N) ? How to find time complexity of recursive algorithms?
double myPowRecurse(double x, int n) {
  if(n==0){
    return 1;
  }else if(n>0){
    return x * myPowRecurse(x,n-1);
  }else {
    return (1/x) * myPowRecurse(x,n+1);
  }
}

// Error : Time Limit Exceed -> memoization
double myPowRecurseOptimal(double x, int n) {
  if(n==0){
    return 1;
  }else if(n>0){
    return n%2==0 ? myPowRecurse(x,n/2) * myPowRecurse(x,n/2) : x * myPowRecurse(x,n-1);
  }else {
    return n%2==0 ? myPowRecurse(x,n/2) * myPowRecurse(x,n/2) : 1/x * myPowRecurse(x,n+1);
  }
}

map<int,double> mp;
double myPowRecurseMemo(double x, int n) {
  if(mp[n]){
    return mp[n];
  }

  if(n==0){
    return 1;
  }else if(n>0){
    mp[n] = n%2==0 ? myPowRecurseMemo(x,n/2) * myPowRecurseMemo(x,n/2) : x * myPowRecurseMemo(x,n-1); 
    return mp[n];
  }else {
    mp[n] = n%2==0 ? myPowRecurseMemo(x,n/2) * myPowRecurseMemo(x,n/2) : 1/x * myPowRecurseMemo(x,n+1); 
    return mp[n];
  }
}

void solve(){
  double x;
  int n;
  cin >> x >> n;
  
  double ans = naivePow(x,n);
  cout << ans << "\n";
}

int main(){
  solve();
  return 0;
}
