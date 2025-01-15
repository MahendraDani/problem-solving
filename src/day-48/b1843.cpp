// Date : 15.01.2025
// Long Long - Div 3-B grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
n=5, a = {1,2,-4,3,5} => s = 7, ops = 0
l=r=2 => a = {1,2,4,3,5} => s = 15, ops = 1

Guess 1: choose any sub-array from l to r such that the sum is negative in the sub-array => so inverting will result in sum += 2*(each negative element)

Guess 2: if a sub-array has all negative elements choose it

Guess 3: Zeros are important, choosing sub-arrays with zeros is benefictial.

a= {1,2,-4,3-7} => chossing sub-array from 2 to 4 will require to again choose 3,3 to invert that element 3, if negatives are not contigious is doing them individually good? 

*/

// void solve(){
//   int n;
//   cin >> n;

//   vll a(n);
//   for(int i=0;i<n;i++) cin >> a[i];

//   ll sum = 0;
//   ll moves = 0;
  
//   ll i=0;
//   while(i<n){
//     if(a[i]>0){
//       sum+=a[i];
//       i++;
//     }else{
//       ll j=i;
//       while(j<n){
//         if(a[j]>0){
//           break;
//         }else{
//           sum+=abs(a[j]);
//         }
//         moves++;
//         j++;
//       }
//       i=j;
//     }
//   }

//   cout << sum << " " << moves << "\n";
// }

void solve2(){
  int n;
  cin >> n;

  vector<long long> v(n);
  for(int i=0;i<n;i++) cin >> v[i];

  long long sum = 0;
  for(auto &x:v) {
    sum+=abs(x);
    if(x>0){
      x=1;
    }else if(x==0){
      continue;
    }
    else{
      x=-1;
    }
  }

  long long moves = 0;

  int i=0;
  while(i<n){
    if(v[i] >= 0) i++;
    else{
      int j=i;
      while(j<n){
        if(v[j]>0) break;
        else{
          j++;
        }
      }
      moves+=1;
      i = j;
    }
  }

  cout << sum <<  " " << moves << "\n";

}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve2();
  }
  return 0;
}
