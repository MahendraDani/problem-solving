/*
Day 01 : 18th November, 2024
Concepts : Recursion
Blog : https://mahendradani.vercel.app/blogs/problem-solving-18-11-2024
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
Recursion : Base case, recurive logic and trust the function.
*/

void printNumbers(int n){
  if(n==0){
    return;
  }
  printNumbers(n-1); // TRUST THE FUNCTION
  cout << n << " ";
}

int sumOfNumbers(int n){
  if(n==0){
    return 0;
  }
  return n + sumOfNumbers(n-1); //TRUST THE FUNCTION
}

// returns nth fib number indexed from 1 (Series : 1,1,2,3,5,....)
int NthFib(int n){
  if(n==1 || n==2){
    return 1;
  }
  return NthFib(n-1) + NthFib(n-2); 
}

// optimising fib series using memoization
unordered_map<int,int> mp;
int NthFibMemo(int n){
  if(n==1 || n== 2){
    return 1;
  }

  if(mp.find(n)!=mp.end()){
    return mp[n];
  }

  mp[n] = NthFibMemo(n-1) + NthFibMemo(n-2);
  return mp[n];
}

int main(){
    
  printNumbers(10); // 10 9 8 7 6 5 4 3 2 1 0
  // cout << sumOfNumbers(5) << "\n"; // 15 
  // cout << NthFib(8) << "\n"; // 21
  // cout << NthFibMemo(8) << "\n"; //21

  return 0;
}


