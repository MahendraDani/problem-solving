// Date : 01.03.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void solve(){
  int x,y,a,b,c;
  cin >> a >> b >> c >> x >> y;

  int ax = min(a,x);
  int by = min(b,y);

  a-=ax;
  x-=ax;
  b-=by;
  y-=by;

  if(c >= x + y) 
    cout << "YES\n";
  else
    cout << "NO\n";
}

void solve2(){
  int x,y,a,b,c;
  cin >> a >> b >> c >> x >> y;

  x-=a;
  y-=b;

  if(x<=0 && y<=0){
    cout << "YES\n";
  }else if(x<=0 && y>0){
    cout << ( y-c <=0 ? "YES" : "NO") << "\n";
  }else if(x>0 && y<=0){
    cout << ( x-c <=0 ? "YES" : "NO") << "\n";
  }else{
    cout << ( x+y-c <=0 ? "YES" : "NO") << "\n";
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
