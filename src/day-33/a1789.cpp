// Date : 29.12.2024
// Serval and Mocha's Array - CP 31 (800)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
  Given-
  good : if gcd of all elements is less than or equal to the length of the array
  beautiful : an array of length greater than 2 is beautiful iff, all its prefixes with length > 2 are "good"

  Output : Is it possible to make array "beautiful" by reordering the elements.

  What do I know about gcd(x,y), x,y > 0? 
  - gcd is atleast min(x,y) if y=kx or x=ky else gcd is 1
  - for any array of length > 2, if gcd of all elements is 1 then its both "good" and "beautiful"

  Now, the problem is, can I order the elements such that gcd is always 1 for all prefixes of length 2,3,4....n-1? 

  Counterexample : {2,14,20,66} -> {2,14} => gcd=2<=2 => "good"
                                   {2,14,20}=> gcd=2<=3 => "good"
                                   {2,14,20,66} => gcd=2 <=4 => "good"
                                   since all prefixes are "good", the array {2,14,20,66} is "beautiful"
                  Result : 2 can also be the gcd of all the prefixes

                  {2,8,16,32} => "beautiful"

                  {32,8,16,2} => "not beautiful"

  Guess 1:
    1. Array should be sorted
    2. start with g1 = gcd(arr[0],arr[1])
        if (g1>2) return "NO"
        else {
          g2 = gcd(g1,arr[2])
        }
    3. Check as in step 2

  Counterexample : {33,15,21,3}
  1. sort => {3,15,21,33}
  2. g1= 3 > 2 return false

  Guess 2: WA on last test case => need to traverse entier array
    1. since array is sorted and we know that gcd(x,y) is x<y can be either x or 1
    2. the answer is if g1<=2 return true
    3. else return false;

    So, I don't even need to check all the elements

    {2,14,16}

*/

void solve(){
  int n;
  cin >> n;

  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];

  sort(arr, arr+n);
  int g1 = __gcd(arr[0],arr[1]);
  if(g1>2){
    cout << "NO\n";
    return;
  }

  for(int i=2;i<n;i++){
    g1 = __gcd(g1,arr[i]);
    if(g1>i){
      cout << "NO\n";
      return;
    }
  }

  cout << "YES\n";

}


/*
 Check if there exists any pair in the array such that gcd <=2, return YES else NO
 Exactly matches with the editorial.
 Good job, Mahendra
*/

void solve2(){
  int n;
  cin >> n;

  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];
  
  bool ans = false;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(__gcd(arr[i],arr[j]) <=2 ){
        ans = true;
      }
    }
  }

  cout << (ans ? "YES\n" : "NO\n");

}

int main(){
  int t;
  cin >> t;

  while(t--){
    solve2();
  }
  return 0;
}
