#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
The answer is YES, if for all i, ai >= bi
the question is can this be done?

Observations : The number of times operation can be performed depends on the least ai at that iteration
 */
// void solve(){
//   int n;
//   cin >> n;
//   vector<int> a(n);
//   for(int i=0;i<n;i++) cin >> a[i];

//   vector<int> b(n);
//   for(int i=0;i<n;i++) cin >> b[i];

//   vector<int> diff(n);
//   for(int i=0;i<n;i++){
//     diff[i] = a[i]-b[i];
//   }

//   int minN = 0;
//   int minNIdx = -1;
//   int minP = INT_MAX;
//   for(int i=0;i<n;i++){
//     if(diff[i] < minN){
//       minN = min(minN,diff[i]);
//       minNIdx = i;
//     }
//     if(diff[i] >= 0){
//       minP = min(minP,diff[i]);
//     }
//   }

//   for(int i=0;i<n;i++){
//     if(i!=minNIdx){
//       if(diff[i]==minN){
//         cout << "NO\n";
//         return;
//       }
//     }
//   }
//   if(minP == INT_MAX){
//     // all are less than required, so can't be added
//     cout << "NO\n";
//     return;
//   }

//   if(abs(minN)<=minP){
//     cout << "YES\n";
//   }else{
//     cout << "NO\n";
//   }
// }

void solve2(){
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  vector<int> b(n);
  for(int i=0;i<n;i++) cin >> b[i];

  vector<int> diff(n);
  int ncnt= 0;
  int minN = 0;
  int minNIdx = -1;
  int minP = INT_MAX;
  for(int i=0;i<n;i++){
    diff[i] = a[i]-b[i];
    if(diff[i]<0) ncnt++;
    if(diff[i] < minN){
      minN = min(minN,diff[i]);
      minNIdx = i;
    }
    if(diff[i] >= 0){
      minP = min(minP,diff[i]);
    }
  }

  if(ncnt >= 2){
    cout << "NO\n";
    return;
  }

  if(minP == INT_MAX){
    // all are less than required, so can't be added
    cout << "NO\n";
    return;
  }

  if(abs(minN)<=minP){
    cout << "YES\n";
  }else{
    cout << "NO\n";
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
