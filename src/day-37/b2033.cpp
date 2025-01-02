// Date : 02.01.2025
// Sakurako and Water - Div 3-B Grind
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 Given a matrix of size n,n
 Obs 1: To find the minimum moves required, cover all submatices of length, n,n-1,n-2,.....1 and add the abs(least element among all the elements in the main diagonal) to `ans`

 Obs 2 : the elements at (0,n-1) and (n-1,0) are part of no sub-matrices of length >=2, hence they need to be check individually

 How to code this?
 */
const int M = 100005;
void solve(){
  int n;
  cin >> n;
  int a[n][n];

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> a[i][j];
    }
  }

  int ans = 0;
  for(int len=n;len>=1;len--){
    for(int startRow=0; startRow  + len<= n; startRow++){
      for(int startCol = 0; startCol + len <= n;startCol++){
        int least = M;
        for(int srow=startRow;srow<len+startRow;srow++){
          for(int scol=startCol;scol<len+startCol;scol++){
            if(a[srow][scol] < 0 &&  a[srow][scol]<=least && srow==scol){
              cout << "HERE: " << a[srow][scol] << "\n";
              least = a[srow][scol];
              a[srow][scol] = 1;
            }
             cout << a[srow][scol] << " ";
          }
          cout << "\n";
        }
        if(least != M){
          ans+=abs(least);
        }
      }
    }
  }

  cout << ans << "\n";
}

void solve2(){
  int n;
  cin >> n;
  int a[n][n];

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> a[i][j];
    }
  }

  int ans = 0;
  for(int len=n;len>=1;len--){
    for(int startRow=0; startRow  + len<= n; startRow++){
      for(int startCol = 0; startCol + len <= n;startCol++){
        int least = M;
        for(int i=0;i<len;i++){
          int row = startRow + i;
          int col = startCol + i;
          if (row < n && col < n && row == col && a[row][col] < 0) {
            least = min(least, a[row][col]);
            a[row][col] = 0; // update -ve elemnt to positive val
          }
        }
        if(least !=M){
          ans+=abs(least);
        }
      }
    }
  }

  if(a[0][n-1]<0) ans+=abs(a[0][n-1]);
  if(a[n-1][0]<0) ans+=abs(a[n-1][0]);
  cout << ans << "\n";
}

void editorial(){
  int n;
  cin >> n;
  int a[n][n];

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> a[i][j];
    }
  }

  int ans = 0;
  for(int i=0;i<n;i++){
    int mn = 0;
    for(int j=0;j<n-i;j++){
      mn = min(mn,a[i+j][j]);
    }
    ans+= max(0,-mn);
  }

  for(int j=1;j<n;j++){
    int mn = 0;
    for(int i=0;i<n-j;i++){
      mn = min(mn,a[i][j+i]);
    }
    ans+=max(0,-mn);
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
