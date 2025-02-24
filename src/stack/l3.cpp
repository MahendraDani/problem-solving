// Date : 24.02.2025
// Nearest greatest to left

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> best(vector<int> arr){
  int n = arr.size();
  vector<int> res(n,-1);
  stack<int> st;

  for(int i=0;i<n;i++){
    while(!st.empty() && st.top() <= arr[i]){
      st.pop();
    }
    
    if(!st.empty()){
      res[i] = st.top();
    }else{
      res[i] = -1;
    }

    st.push(arr[i]);
  }
  return res;
}

int main(){
  vector<int> arr{1,3,2,4};
  vector<int> res = best(arr);

  for(auto x: res){
    cout << x << " ";
  }
  cout << "\n";
  return 0;
}
