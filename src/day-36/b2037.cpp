// Date : 01.01.2025
// Div 3 B Grind
// 5:56 PM - 6:16 PM => TLE
// 6:16 PM - 6:22 PM => TLE

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
 Guess 1: If we chose 2 greatest number from a1,a2,.....ak then it will always contain all the (k-2) integers

 Counterexample :
 => a => {1,4,1,5,3,3,3,4,5}
 => n = 5
 => m = 5

Wrong : Becuase for each 'n', there may not be possible 'm' values 

Just need to check if there exists (ai,aj),i!=j such that ai*aj=nXM => but it shouldn't require O(N^2) as it will give TLE
*/

// WILL GIVE TLE - YES
void solve(){
  int k;
  cin >> k;
  
  int a[k];
  for(int i=0;i<k;i++) cin >> a[i];

  int nXM = k-2;

  for(int i=0;i<k;i++){
    for(int j=i+1;j<k;j++){
      if(a[i]*a[j]==nXM){
        cout << a[i] << " " << a[j] << "\n";
        return;
      }
    }
  }
}

// TLE
void solve2(){
  int k;
  cin >> k;

  int a[k];
  for(int i=0;i<k;i++){
    cin >> a[i];
  }

  int mxn = k-2;
  int l = -1;
  sort(a,a+k);
  for(int i=0;i<k;i++){
      if(a[i] <= mxn){
        l = i;
      }else{
        break;
      }
  }

  for(int i=0;i<=l;i++){
    for(int j=i+1;j<=l;j++){
      if(a[i]*a[j]==mxn){
        cout << a[i] << " " << a[j] << "\n";
        return;
      }
    }
  }
}

// WA
void solve3(){
  int k;
  cin >> k;

  vector<int>  a(k);
  for(int i=0;i<k;i++) cin >> a[i];

  int l = -1;
  int mxn = k-2;
  map<int,int> mp;
  sort(a.begin(),a.end());
  for(int i=0;i<k;i++){
    if(a[i] <= mxn){
      l = i;

      mp[a[i]] = mxn/a[i];
    }else{
      break;
    }
  }
  for(auto x : mp){
    for(int i=0;i<=l;i++){
      if(x.second == a[i]){
        cout << x.first << " " << x.second << "\n";
        return;
      }
    }
  }

  // if x.second() exists in array then x.first, x.second is the answer

}

void editorial(){
  int k;
  cin >> k;

  vector<int> a(k);
  for(int i=0;i<k;i++) cin >> a[i];

  int mxn = k-2;

  set<int> st;
  for(int i=0;i<k;i++){
    if(mxn%a[i]==0 && st.find(mxn/a[i])!=st.end()){
      cout << a[i] << " " << mxn/a[i] << "\n";
      return;
    }
    st.insert(a[i]);
  }

}


int main(){
  int t;
  cin >> t;

  while(t--){
    editorial();
  }
  return 0;
}
