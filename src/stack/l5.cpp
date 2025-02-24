// Date : 24.02.2025
// Nearest smallest to the right

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> best(vector<int> arr){
  int n = arr.size();
  vector<int> res(n,-1);
  stack<int> st;

  for(int i=n-1;i>=0;i--){
    while(!st.empty() && st.top() >= arr[i]){
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
  vector<int> arr{1,7,6,5,3,2,9,10,5,8};
  vector<int> res = best(arr);
  for(auto x: res){
    cout << x << " ";
  }
  cout << "\n";
  return 0;
}
