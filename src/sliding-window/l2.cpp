// Date : 11.02.2025
// Max points you can obtain from n cards

#include <iostream>
using namespace std;

  
int approach1(int arr[], int n, int k){
  int sum = 0;
  int lsum=0, rsum=0;

  for(int i=0;i<k;i++){
    lsum+=arr[i];
  }
  sum = max(sum,lsum+rsum);

  int r=n-1;
  for(int i=k-1;i>=0;i--){
    lsum -= arr[i];
    rsum += arr[r];
    r--;
    sum = max(sum,lsum + rsum);
  }
  return sum;
}

int main(){
  int arr[] = {6,2,3,4,7,2,1,7,1};
  int n = 9;
  int k = 4;

  cout << approach1(arr,n,k) << "\n";
  return 0;
}
