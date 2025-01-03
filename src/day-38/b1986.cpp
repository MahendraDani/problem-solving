// Date : 03.01.2025
// Div 3-B Grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 1. Given an element x, is strictly greater than its negihbours a1,a2,a3,a4 then after y operations it will be x = max{a1,a2,a3,a4}

 How to find all neighbours of any element x?

 Algorithm:
 1.Traverse the matrix from i=0 to n and j=0 to m
 2. Check if element a[i][j] is strictly greater than all it's neighbours and then a[i][j] = max {neighbors}
 3. continue until all matrix
 4. return a


 But how can I find all neighbours of a matrix? It's simple - Just think
 */
void solve(){
  int n,m;
  cin >> n >> m;

  int a[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> a[i][j];
    }
  }

  for(int row=0;row<n;row++){
    for(int col = 0;col < m;col++){
      int left = col-1 < 0 ? 0 : a[row][col-1];
      int top = row-1 < 0 ? 0 : a[row-1][col];
      int right = col + 1 < m ? a[row][col+1] : 0;
      int bottom = row + 1 < n ? a[row+1][col] : 0;
      
      // if a[row][col] is greater than all a[row][col] = max(neightbors)
      int curr = a[row][col];
      // cout << "el: " << curr << " "  << left << " " << top << " " << right << " " << bottom << "\n";
      if(curr > left && curr > top && curr > right && curr > bottom){
        curr = max({left,top,right,bottom});
      }
      cout << curr << " ";
    }
    cout << "\n";
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
