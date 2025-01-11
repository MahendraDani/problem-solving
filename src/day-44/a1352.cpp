// Date : 11.01.2025
// Sum of Round Numbers
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
Observation : 
9876 = 9 * 10^3 + 8*10^2 + 7*10^1 + 9*10^0
all of the summands are round numbers and these are the "minimum" summands required to obtain the given numbers
 */

void solve(){
  string num;
  cin >> num;

  vector<int> ans;
  
  int p = num.size()-1;
  for(int i=0;i<num.size();i++){
    if(num[i]!='0'){
      int d = (int)(num[i]-'0');
      ans.push_back(d*pow(10,p));
    }
    p--;
  }
  
  cout << ans.size() << "\n";
  for(auto x:ans){
    cout << x << " ";
  }
  cout << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
