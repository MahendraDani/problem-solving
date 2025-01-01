// Date : 01.01.2025
// Coins - CP 31 (800)
// 10:20 AM - 10:45 AM => WA
// 10:45 AM - 10:49 AM => AC (missed n==k case)

#include <iostream>
#include <bits/stdc++.h>

#define ll long long

using namespace std;

/*
 n = 7, k = 4
 2(x) + 4 (y) = 7 => NO => how can addition of two even numbers yeild an odd number?

 Case 1: if(k==even and n==odd) or (k==odd and n==even) return "NO"

 n=8 k=8,
 2(x) + 8(y) = 8 => YES, (0,0)

 Case 2 : if(n==k) return "YES"

 n=5, k=3
 2(x) + 3(y) = 5 => y can't be even, 
 => 2(1) + 3(1) = 5

 Case 3: if(n == odd && k== odd) => y can't be even => answer will always exists

 n=6, k=4
 2(x) + 4(y) = 6 => YES
 2(1) + 4(1) = 6;
  
 n=1, k = 7 => NO

 n=3, k=7 => NO
 2(x) + 7(y) = 3 

 n=5, k=3 => YES
 2(x) + 3(y) = 5 => (1,1)

 n=2 , k=7 => YES


 2(0) + k(1) = n;

 2(1) + k(0) = n

 // n=5, k=3
 2(1) + k(1) = n;


 if(both n and k are even there will always exists an answer);


 n=6, k=1
 2(x) + 1 (y) = 6 

 n=5, k=1


 
*/

void solve(){
  ll n,k;
  cin >> n >> k;
  
  if(n==k){
    // 8 8
    // 5 5
    cout << "YES\n";
    return;
  }

  if(k==1 && n%2==0){
    cout << "YES\n";
    return;
  }
  if((n%2==0 && k%2!=0) || (n%2!=0 && k%2==0)){
    cout << "NO\n";
    return;
  }

  if(n%2!=0 && k%2!=0){
    // n and k are odd
    
    if(n<k+2){
      // n=5 k = 7
      cout << "NO\n";
    }else{
      cout << "YES\n";
    }
    return;
  }

  cout << "YES\n";

}

/*
  if(n==k) return "YES"
 Guess 1: If n==even always answer will exist => (n/2,0)
 Guess 2: If n==odd, and k=even => NO
 Guess 3 If n==odd and k==odd then if (k+2>n) then NO else YES
*/
void solve2(){
  ll n,k;
  cin >> n >> k;

  if(n==k){
    cout << "YES\n";
    return;
  }

  if(n%2==0){
    cout << "YES\n";
  }else{
    if(k%2==0){
      cout << "NO\n";
    }else{
      if(k+2>n){
        cout << "NO\n";
      }else{
        cout << "YES\n";
      }
    }
  }
}

int main(){
  int t;
  cin >> t;

  while(t--){
    solve2();
  }
  return 0;
}
