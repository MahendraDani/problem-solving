// Date : 19.01.2025
// Binary Cafe - Div 3-B grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
k - # of deserts
2^i - cost of ith desert
n - total coins to spend

To find : Number of ways to spend coins, buying any # of deserts (possibly zero)

n=6, k=4 => {}, {1}, {2}, {4}, {1,2}, {2,4}, {1,4} => 7 ways

P.S : Find all such subsets of {2^y | y from 0 to i} such that the sum of all elements of every subset is less than or equal to n


Set, A = {0,1,2,4,16,32,...,2^(k-1)}, k elements
- # of subsets of a set of size k, is 2^k
- # of subsets of size=1 => k
- # of subsets of size=2 => kP2
- # of subsets of size=3 => kP3
....
but for solving the problem, we also need to check whether the sum of all elements of each subset <= n

=> A has some `valid` subsets and some `invalid` subsets, the answer is total number of `valid` subsets, where a subset is said to be valid
iff the sum of all its elements is <=n

Approach 1 :
Algorithm:
sum=0
i=1
while(sum<=n && i<k)
  sum+=2^i;
  i++

for k=1 to i
  ans+=kPi

Approach 2:
if n<k 
  n=3, k=5,
  - size=0 => {}
  - size=1 => {1},{2}
  - size=2 => {1,2}
*/
void solve(){
  ;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
