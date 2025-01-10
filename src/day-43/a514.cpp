#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(){
  long long n;
  cin >> n;

  long long ans = 0;
  string s = to_string(n);
  int len = s.size();
  
  int p = 0;
  while(n>0){
    int last = n%10;
    if(last > 4){
      if(p!=len-1){
        ans += (9-last)*pow(10,p);
      }else{
        ans += last*pow(10,p);
      }
    }else{
      ans+= last*pow(10,p);
    }
    p++;
    n/=10;
  }
  cout << ans << "\n";
}

void solve2(){
  string n;
    cin >> n;
    
    for(int i = 0; i < n.size(); i++) {
        int d = n[i] - '0';
        if(i == 0) {
            if(d > 4 && (9-d) != 0) {
                n[i] = (9-d) + '0';
            }
        } else {
            if(d > 4) {
                n[i] = (9-d) + '0';
            }
        }
    }
    cout << n << "\n";
}

int main(){
  solve2();
  return 0;
}
