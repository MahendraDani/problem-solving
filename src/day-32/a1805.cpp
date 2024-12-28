// Date : 28.12.2024
// We Need The Zero - CP 31 (800)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
How did I think?
Given {
  bi = ai ^ x
  find x such that b1^b2^.....^bn = 0;
}

Facts we know{
  - xor is both associative and commutative
  - a^a = 0;
  - a^0 = a;
  - a^a^a^a....^a n times = 0 if n is even
                          = a if n is odd
}

b1^b2^b3......^bn = (a1^x)^(a2^x)^....(an^x)
                  = (a1^a2^.....^an)^(x^x^x^......n times)
                  = c ^(x^x^x^......n times)              let c = (a1^a2^......^an)
if n is even 
=> c^0 = c

if n is odd
=> c^x

we want that LHS = 0
=> c^0=0, n is even -> c can be any number, if c==0, else no such x eists

=>c^x=0, n is odd => x=c^0=c => x is equal to c
*/

void solve(){
  int n;
  cin >> n;

  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];

  int c = 0;
  for(int i=0;i<n;i++){
    c^=arr[i];
  }

  if(n%2==0){
    if(c==0){
      // x can be any number, printing 3 to match the test cases
      cout << 3 << "\n";
    }else{
      cout << -1 << "\n";
    }
  }else{
    cout << c << "\n";
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


