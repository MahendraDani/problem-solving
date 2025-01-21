// Date : 21.01.2025
// Upscaling - Div 3-B grind
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

  n*=2;

  for(int row=0;row<n;row++){
    if(row%4==0 || row%4==1){
      // start : ##..##
      for(int col=0;col<n;col+=2){
        if(col%4==0 || col%4==1){
          cout << "##";
        }else{
          cout << "..";
        }
      }
      cout << "\n";
    }else{
      // start : ..##..
      for(int col=0;col<n;col+=2){
        if(col%4==0 || col%4==1){
          cout << "..";
        }else{
          cout << "##";
        }
      }
      cout << "\n";
    }
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
