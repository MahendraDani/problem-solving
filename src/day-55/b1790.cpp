// Date : 23.01.2025
// Taisia and Dice
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 max element = s-r
 n <= sum of n dices <= 6n

 How to allocate the sequence of n-1 elements such that sum of (n-1) elements is r and each element lies between 1 to 6? 
 => this is the main part of the problem

 if the sum of n boxes is r, then for sum number y, sequence will be y,y,y,....(n-1) times and y if y*n >= r else if y*n>r then (y-1) 
 */
void solve(){
  int n,s,r;
  cin >> n >> s >> r;

  // max element
  int mx = s-r;
  cout << mx << " ";
  n--; // for remaining elements
  int multi = 1;
  bool equal = 0;
  while(multi <=6 ){
    if(multi * n> r){
      break;
    }else if (multi * n==r){
      equal = 1;
      break;
    }
    multi++;
  }

  // n-1 elements will be multi
  for(int i=0;i<n-1;i++){
    cout << multi << " ";
  }

  // last element will be multi - (n*multi - r)
  if(!equal){
    cout << multi - 1 << "\n";
  }else{
    cout << multi << "\n";
  }
}

void editorial(){
  int n,s,r;
  cin >> n >> s >> r;

  vector<int> res;

  int d = s-r;
  for(;r>=d;r-=d){
    res.push_back(d);
  }

  if(r) res.push_back(r);

  for(int i=0;i<res.size() && res.size() +1 < n;){
    if(res[i]==1){
      ++i;
      continue;
    }
    --res[i];
    res.push_back(1);
  }
  res.push_back(d);

  for(auto x: res){
    cout << x << " ";
  }
  cout << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    editorial();
  }
  return 0;
}
