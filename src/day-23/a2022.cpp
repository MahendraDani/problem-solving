// Date : 10/12/2024
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

/*
Solved by referring to editorial

Learnings:
1. Prioritize on filling seats with 2 people of same family
2. Check if remaing people are more than remaining seats to arrange them with 1 or no other person

Key Takeway:
Write down key observations and mix them to solve the problem
*/

void solve(){
  int n,r;
  cin >> n >> r;

  int arr[n];
  for(int i=0;i<n;i++) cin >> arr[i];

  int total = 0;
  for(int i=0;i<n;i++){
    total+=arr[i];
  }
  
  int leftalone = 0;
  int happy = 0;

  for(int i=0;i<n;i++){
    happy += (arr[i]/2)*2;
    r-=arr[i]/2;
    leftalone += arr[i]%2;
  }

  if(leftalone > r){
    happy += r*2 - leftalone;
  }else{
    happy += leftalone;
  }

  cout << happy << "\n";

}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve();
  }
}
