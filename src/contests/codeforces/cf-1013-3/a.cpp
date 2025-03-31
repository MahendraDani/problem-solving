#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

bool isDone(int zero, int one, int two, int three, int five){
  return zero>=3 && one>=1 && two>=2 && three>=1 && five>=1;
}

void solve(){
  int n;
  cin >> n;

  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];

  // 01.03.2025
  // 0 - 3
  // 1 - 1
  // 2 - 2
  // 3 - 1
  // 5 - 1
  int ans = 0;
  int zero=0,one=0,two=0,three=0,five=0;
  for(int i=0;i<n;i++){
    if(isDone(zero,one,two,three,five)){
      ans = i;
      break;
    }

    if(a[i]==0){
      zero++;
    }else if(a[i]==1){
      one++;
    }else if(a[i]==2){
      two++;
    }else if(a[i]==3){
      three++;
    }else if(a[i]==5){
      five++;
    }
  }
  if(isDone(zero,one,two,three,five) && ans==0){
    ans = n;
  }
  cout << ans << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
