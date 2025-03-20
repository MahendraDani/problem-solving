// Total Unique paths in grid
#include <iostream>
#include <vector>
using namespace std;

int main(){
  int m = 3;
  int n = 2;

  vector<vector<int>> t(m,vector<int> (n));

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if(i==0 || j==0){
        t[i][j] = 1;
      }else{
        t[i][j] = t[i-1][j] + t[i][j-1];
      }
    }
  }

  cout << t[m-1][n-1] << "\n";
  return 0;
}
