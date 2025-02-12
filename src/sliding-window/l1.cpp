// Date : 11/02/2025
#include <iostream>
using namespace std;

// returns the length of longest sub-array whose sum <=k
int maxLen(int arr[], int n, int k){
  int l=0, r=0, sum=0, ans=-1;
  while(r<n){
    sum += arr[r];
    if(sum <=k ){
      ans = max(ans,r-l+1);
      r++;
    }else{
      while(sum > k){
        sum -= arr[l];
        l++;
      }
      r++;
    }
  }
  return ans;
}

int main(){
  int arr[] = {2,5,1,7,10};
  int n=5, k=14;
  cout << maxLen(arr,n,k) << "\n";
  return 0;
}
