// Date : 05.01.2025
// Vasilije in Cacak - CP 31 (900)
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 Given n,k,x is to possible that sum of k  distinct ints from 1 to n is equal to x?
 n=5, k=3, x=10
 => 2+3+5 => YES

 n=5, k=3, x=3
 => Not possible

 Facts : sum of first n natural numbers : n(n+1)/2

 n=6, k=5, x=20
 => 2+3+4+5+6 => YES

 s1 = n*(n+1)/2
 if(s1<x) return NO

 if(s1==x && k==n) YES else NO

 if(s1 > x) : 
 */
void solve(){
  ll n,k,x;
  cin >> n >> k >> x;

  ll s1 = n*(n+1)/2;

  if(s1<x){
    // n=6, k=6, x=24
    cout << "NO\n";
    return;
  }

  if(s1==x){
    if(k==n){
      cout << "YES\n";
    }else{
      cout << "NO\n";
    }
    return;
  }
  
  // s1>x
  // need to check if the sum can be obtained
  
  ll diff = s1-x;
  cout << "NOT SURE\n";
}

void solve2(){
  long long n, x, k; //read n, x, k for each test case
		cin >> n >> x >> k;
		if(2*k>=x*(x+1) && 2*k<=n*(n+1)-(n-x)*(n-x+1)){ //check if k is between the minimum and maximum sum 
			cout << "YES\n";
		}
		else cout << "NO\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve2();
  }
  return 0;
}
