// Date : 24.02.2025
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Next greatest element to right

vector<int> best(vector<int> arr){
  int n = arr.size();
  vector<int> res(n,-1);
  stack<int> st;

  for(int i=n-1;i>=0;i--){
    while(!st.empty() && st.top() <= arr[i]){
      st.pop();
    }
    
    if (!st.empty()) {
      res[i] = st.top();
    }
    st.push(arr[i]);
  }

  return res;
}


int main(){
  vector<int> arr{1,3,2,6,7,4,8,9,5};
  vector<int> res = best(arr);
  for(auto x: res){
    cout << x << " ";
  }
  cout << "\n";
  return 0;
}
