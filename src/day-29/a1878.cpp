// Date : 25.12.2024
// How Much Does Daytona Cost? CP-31 (800)

#include <iostream>
#include <map>
using namespace std;

bool isCommonElement(int arr[], int start, int end, int k){
  map<int,int> mp;
  for(int i=start;i<=end;i++){
    mp[arr[i]]++;
  }

  int maxE = -1;
  int maxCnt = -1;
  for(auto x: mp){
    if(maxCnt < x.second){
      maxE = x.first;
      maxCnt = x.second;
    }
  }
  return maxE == k;
}

// No need to manually check occurrence of k for each sub segment -> Brute force
void solve(){
  int n,k;
  cin >> n >> k;

  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      cout << arr[j] << " ";  
    }
    cout << "\n";
  }
  return;
  cout << "NO\n";
}


// Just check if the element that occurs max times is equal to k or not, becuase if it equals to k, then there will exsist a subsegment for which it occurs more than any other intergers in the segment
void optSolve(){
  int n,k;
  cin >> n >> k;

  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];

  map<int,int> mp;
  for(int i=0;i<n;i++){
    mp[arr[i]]++;
  }

  int maxE = -1;
  int maxCnt = -1;

  for(auto x : mp){
    if(maxCnt <= x.second){
      if(x.first == k){
        maxE = k;
        maxCnt = x.second;
      }
    }
  }

  cout << (maxE == k ? "YES\n" : "NO\n");
}

int main(){
  int t;
  cin >> t;
  while(t--){
    optSolve();
  }
  return 0;
}
