// Date : 02.03.2025
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

void editorial(){
  ll a,b,x,y,n;
  cin >> a >> b >> x >> y >> n;

  ll ans = LLONG_MAX;
  for (int i = 0; i < 2; ++i) {
    int da = min(n, a - x);
    int db = min(n - da, b - y);
    ans = min(ans, (a - da) * 1ll * (b - db));
    swap(a, b);
    swap(x, y);
  }
  cout << ans << "\n";
}

void solve(){
  ll a,b,x,y,n;
  cin >> a >> b >> x >> y >> n;

  ll ans = LLONG_MAX;
  while(n>=0){
    if(a>x && b>y){
      ll p1 = (a-1)*b;
      ll p2 = a*(b-1);
      ll m = min(p1,p2);

      if(p1==p2){
        if(x<y){
          a--;
        }else{
          b--;
        }
      }else{
        if(m==p1)
          a--;
        else
          b--;
      }
      ans = min(ans,m);
    }else if(a>x && b==y){
      ans = min(ans,(a-1)*b);
      a--;
    }else if(a==x && b>y){
      ans = min(ans,a*(b-1));
      b--;
    }else{
      ans = min(ans,a*b);
      break;
    }

    n--;
  }
  cout << ans << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    editorial();
  }
  return 0;
}
