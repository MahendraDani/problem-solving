#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// TLE
void solve(){
  int l,r;
  cin >> l >> r;
  if(l==1 && r==1){
    cout << 1 << "\n";
    return;
  }

  // coprime - 1
  bool prev = gcd(l-1,l) == 1 ? 1 : 0;
  int ans = 0;

  for(int i=l;i<=r;i++){
    int curr = gcd(i,i+1);
    if(curr==1 && !prev){
      ans++;
      prev = gcd(i,i+1) == 1 ? 1 : 0;
    }else{
      prev = 0;
    }
    
    curr = gcd(i+1,i+1);
    if(curr==1 && !prev){
      ans++;
      prev = 0;
    }else{
      prev = 0;
    }
  }
  cout << ans << "\n";
}

bool isCoprime(int a,int b){
  if(a%2==0 && b%2!=0) return true;
  else if(a%2!=0 && b%2==0) return true;
  else return false;
}

// TLE
void solve2(){
  int l,r;
  cin >> l >> r;
  if(l==1 && r==1){
    cout << 1 << "\n";
    return;
  }

  // coprime - 1
  bool prev = isCoprime(l-1,l)? 1 : 0;
  int ans = 0;

  for(int i=l;i<=r;i++){
    int curr = isCoprime(i,i+1) ? 1 : 0;
    if(curr==1 && !prev){
      ans++;
      prev = isCoprime(i,i+1) == 1 ? 1 : 0;
    }else{
      prev = 0;
    }
    
    curr = isCoprime(i+1,i+1);
    if(curr==1 && !prev){
      ans++;
      prev = 0;
    }else{
      prev = 0;
    }
  }
  cout << ans << "\n";
}



int main(){
  int t;
  cin >> t;
  while(t--){
    solve2();
  }
  return 0;
}
