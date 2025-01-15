// Date : 15.01.2025
// Parity Sort - Div 3-B grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int n;
  cin >> n;

  vi a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  vi even;
  vi odd;
  vi mark(n); // mark[i] = 1 => odd

  for(int i=0;i<n;i++){
    if(a[i]%2==0){
      mark[i]=0;
      even.push_back(a[i]);
    }else{
      mark[i] = 1;
      odd.push_back(a[i]);
    }
  }
  sort(even.begin(),even.end());
  sort(odd.begin(),odd.end());
  int es = even.size();
  int os = odd.size();

  int i=0,j=0;
  vi res;

  for(int k=0;k<n;k++){
    if(mark[k]==1){
      if(j<os){
        res.push_back(odd[j]);
        j++;
      }
    }else{
      if(i<es){
        res.push_back(even[i]);
        i++;
      }
    }
  }

 for(int i=0;i<n-1;i++){
   if(res[i] > res[i+1]){
     cout << "NO\n";
     return;
   }
 }
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
