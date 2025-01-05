#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 - Frequency of elements
 - Number of distinct elements
 - value of k

 - Reduce number of distincts and increase the frequence of min element by using k
 */
void solve(){
  int n,k;
  cin >> n >> k;

  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];

  map<int,int> freq;
  int minE = INT_MAX;
  for(int i=0;i<n;i++){
    freq[a[i]]++;
    minE = min(a[i],minE);
  }

  if(k==n){
    cout << 1 << "\n";
    return;
  }
  if(k==0){
    cout << freq.size() << "\n";
  }else{
    int ans = freq.size();
    // find how many elements can be reduced using value of k and their frequency
    // bool canRem = false;
    // int notme = -1;
    // for(auto x:freq){
    //   if(x.first != minE){
    //     if(x.second == k){
    //       canRem = true;
    //       notme = x.first;
    //       break;
    //     }
    //   }
    // }
    
    // int cnt = 0;
    // for(auto x:freq){
    //   if(x.first !=minE && x.first!=notme){
    //     if(x.second <= k){
    //       k = k - x.second;
    //       // that element if removed from arr
    //       cnt++;
    //     }
    //   }
    // }

    // if(canRem){
    //   if(cnt>1) ans-=cnt;
    //   else ans--;
    // }else{
    //   ans-=cnt;
    // }

    // for(auto x:freq){
    //   // if(x.second<=k){
    //   //   ans--;
    //   //   k-=x.second;
    //   // }
    //   // cout << 
    // }

    cout << ans << "\n";
  }
  
  // freq.size() -> no of distinct elements
}

void solve2(){
 int n,k;
 cin >> n >> k;

 int a[n];
 for(int i=0;i<n;i++) cin >> a[i];

 if(k>=n){
  cout << 1 << "\n";
  return;
 }

 map<int,int> freq;
 for(auto x:a){
  freq[x]++;
 }

 int ans = freq.size();
  for(auto x: freq){
    if(x.second <=k ){
      k-=x.second;
      ans--;
    }
  }
 cout << ans << "\n";
}

void solve3(){
 int n,k;
 cin >> n >> k;

 int a[n];
 for(int i=0;i<n;i++) cin >> a[i];

 map<int,int> freq;
 int minE = INT_MAX;
 for(auto x:a){
  freq[x]++;
  minE = min(minE,x);
 }
 int least_freq = INT_MAX;
 int ans = freq.size();
 for(auto x:freq){
  least_freq = min(least_freq,x.second);
 }
 bool y = least_freq == minE;
 if(y){
  for(auto x: freq){
      if(x.second <=k ){
        k-=x.second;
        ans--;
      }
    }
 }else{
  for(auto x: freq){
    if(x.second <=k && x.first!=minE){
      k-=x.second;
      ans--;
    }
  }
 } 
  if(ans<=0){
    ans++;
  }
 cout << ans << "\n";
}

void solve4(){
  int n,k;
 cin >> n >> k;

 int a[n];
 for(int i=0;i<n;i++) cin >> a[i];

 if(k>=n){
  cout << 1 << "\n";
  return;
 }

 map<int,int> freq;
 for(auto x:a){
  freq[x]++;
 }
 int j=0;

 for(auto x:freq){
  if(x.second > k) break;
  else{
    k-=x.second;
    j++;
  }
 }

 cout << max(1,(int)freq.size()-j) << "\n";
}
int main(){
  int t;
  cin >> t;
  while(t--){
    solve4();
  }
  return 0;
}
