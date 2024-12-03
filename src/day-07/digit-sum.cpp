// Digit sum of a number using recursion

#include<iostream>
using namespace std;

int digitSum(int n){
  if(n==0) return 0;
  return n%10 + digitSum(n/10);
}

int main(){
  int n = 134;
  int ans = digitSum(n);
  cout << ans << "\n";
  return 0;
}
