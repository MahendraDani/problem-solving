// Date : 26.12.2024
// United We Stand - CP 31 (800)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
 - In which case, will there exsits arrays b,c that satisfy the constraints?
 - If there exists two arrays, how can they be found?
 - How to decide a[0] will be part of b or c?

 N = 18 then divisiors = {1, 2, 3, 6, 9, 18}
 LCM(14,16) = 112 -> least number that is divisible by both a and b
 HCF(14,16) = 2 -> highest number that divides both a and b

- for each element in array a, we have a choice to put in either array b or array c.
- The choice depends on the constraint : for any i,j if cj is not a divisor of bi.
- That means any element of either elements should not divide any element of the other array.
- Essentially, we are creating two groups of numbers from the given array.

SOLUTION : approach2() function
1. sort the array in decreasing order
2. Traverse from last element and push all the elements which are same to array 'b'
3. if b.size() == n -> return -1
4. push the remaining elements from the begining in 'c'

The logic is simple that bigger numbers won't be divisors of smaller numbers, so just put 1 small (or equal) numbers in array 'b' and the rest bigger numbers in array 'c'

Solved this myself, no tutorial, no help, first attempt
*/


// Thought of recursion in the first go
void partition(vector<int>& a, vector<int>& b, vector<int>& c){
  if(a.size()==1){
    c.push_back(a[0]);
    return;
  }

  int temp = a[a.size()-1];
  a.erase(a.begin() + a.size()-1);
  for(int i=0;i<c.size();i++){
    if(temp%c[i]==0){
      c.push_back(temp);
    }
    else{
      b.push_back(temp);
    }
  }
  partition(a,b,c);
}

void solve(){
  int n;
  cin >> n;

  vector<int> a(n,0);
  for(int i=0;i<n;i++) cin >> a[i];

  vector<int> b,c;
  partition(a,b,c);
  
  if(b.size()==0 || c.size()==0){
    cout << -1 << "\n";
  }

  cout << b.size() << " " << c.size() << "\n";

  for(auto x: b){
    cout << x << " ";
  }
  cout << "\n";
  
  for(auto x: c){
    cout << x << " ";
  }
  cout << "\n";
}

void approach2(){
  int n;
  cin >> n;

  vector<int> a(n,0);
  for(int i=0;i<n;i++) cin >> a[i];

  vector<int> b,c;

  sort(a.rbegin(),a.rend());
  int last = a[n-1];
  b.push_back(last);
  int end = n-1;
  for(int i = n-2; i>=0;i--){
    if(a[i]==last){
      b.push_back(a[i]);
      end--;
    }else{
      break;
    }
  }

  if(b.size()==n){
    cout << -1 << "\n";
    return;
  }
  for(int k=0;k<end;k++){
    c.push_back(a[k]);
  }

  cout << b.size() << " " << c.size() << "\n";
  for(auto x:b){
    cout << x << " ";
  }
  cout << "\n";

  for(auto x:c){
    cout << x << " ";
  }
  cout << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    approach2();
  }
  return 0;

}
