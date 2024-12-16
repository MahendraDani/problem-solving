#include <iostream>

using namespace std;

// How will I get the elements of the subset?

int main(){
  int arr[] = {2,3,7,8,10};
  int n = 5;
  int sum = 11;

  bool dp[n+1][sum+1];

  for(int i=0;i<n+1;i++){
    for(int j=0;j<sum+1;j++){
      if(j==0) {
        dp[i][j] = true;
        continue;
      }

      if(i==0 && j!=0){
        dp[i][j] = false;
        continue;
      }
      if(arr[i-1]<=j){
        dp[i][j] = dp[i-1][j-arr[i]] || dp[i-1][j];
      }else{
        dp[i][j] = dp[i-1][j];
      }
    }
  }

  cout << (dp[n][sum] ? "Yes\n" : "No\n");
  
  cout << "-------------------------\n";

  for(int i=0;i<n+1;i++){
    for(int j=0;j<sum+1;j++){
      cout << dp[i][j] << " ";
    }
    cout << "\n";
  }

  
  return 0;
}
