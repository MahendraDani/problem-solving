// Max Consecutive Ones |||
// Find the length of max subarry, when allowed to flip atmost k zeroes.
// Which converts to find the longest subarray with max k zeroes

#include <iostream>
#include <algorithm>

using namespace std;

int brute(int arr[], int n, int k){
  int maxLen = 0;
  for(int i=0;i<n;i++){
    int zeroes = 0;
    for(int j=i;j<n;j++){
      if(arr[j]==0) zeroes++;
      if(zeroes <= k){
        maxLen = max(maxLen, j-i+1);
      }else break;
    }
  }
  return maxLen;
}

// Implementation error
int better(int arr[], int n, int k){
  int maxLen = 0;
  int l=0,r=0,zeroes=0, zidx = -1;

  while(r < n){
    if(arr[r]==0){
      zeroes++;
      if(zeroes==k) zidx = r;
    }

    if(zeroes <= k){
      maxLen = max(maxLen, r-l+1);
      r++;
    }else{
      l = zidx;
      zeroes = k;
      r++;
    }
  }
  return maxLen;
}

int main(){
  int arr[] = {1,1,1,0,0,0,1,1,1,1,0};
  int n = 11;
  int k = 2;
  
  cout << brute(arr,n,k) << "\n";
  cout << better(arr,n,k) << "\n";
  return 0;
}
