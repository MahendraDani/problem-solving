// Date : 01.01.2025
// Two Permutations
// 9:52 AM - 10:11 AM => AC

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
 n=5, a=2, b=3 => YES
 => p= {1,2,3,4,5}
 => q ={1,2,3,4,5}

 n=5, a=2,b=2 => YES => "3" should not have matched
 => p= {1,2,3,4,5}
 => q= {1,2,3,4,5}

 n=5, a=2, b=1 => YES
 => p = {1,2,3,4,5}
 => q = {1,2,4,3,1}

 Guess 1 : if(n=a+b) return "NO" => both arrays will be {1,2,3,....n}

 Guess 2 : if n==odd and a+b=even return "NO"
 Counter Example-  n=6 a=1, b=3 => YES
 => p = {1,2,3,4,5,6}
 => q = {1,3,2,4,5,6}

 Guess 2: If(a+b=n-1) return "NO"
 n=6, a = 2, b =3 => "NO"
 => p = {1,2,3,4,5,6}
 => q = {1,2,3,4,5,6}

 n=5, a=2, b=2 => NO

Guess 2: If a+b>n return "NO" 
 n=3, a=2, b=2 => NO
  => p = {1,2,3}
  => q = {1,2,3}

  n=3, a=1, b=3 => NO
  => p = {1,2,3}
  => q = {1,2,3}
  
  n=5, a=1,b=3 => NO
  => p = {1,2,3,4,5}
  => q = {1,_,3,4,5}
*/

void solve(){
  int n,a,b;
  cin >> n >> a >> b;
  
  if(n==a && a==b){
    cout << "YES\n";
    return;
  }
  if(a+b>=n-1){
    cout << "NO\n";
    return;
  }

  //if(n%2!=0 && ((a+b)%2==0)){
   // cout << "NO\n";
   // return;
 // }
  
  cout << "YES\n";
  
}

int main(){
  int t;
  cin >> t;

  while(t--){
    solve();
  }
  return 0;
}
