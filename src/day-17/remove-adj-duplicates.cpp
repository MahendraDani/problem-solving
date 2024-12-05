/*
Recursively remove adjacent duplicates
https://www.geeksforgeeks.org/problems/recursively-remove-all-adjacent-duplicates0744/1?page=1&category=Recursion&sortBy=submissions

*/

#include<iostream>
#include<string>
using namespace std;

void solve(string& s){
  if(s.size()==1){
    return;
  }

  char temp = s[s.size()-1];
  s.erase(s.begin() + s.size()-1);
  solve(s);
  if(s[s.size()-1]!=temp){
    s+=temp;
  }else{
    for(int i = s.size()-1; i>=0;i--){
      if(s[i]==temp){
        s.erase(s.begin() + i );
      }
    }
  }
}

int main(){
  string s;
  cin >> s;
  solve(s);
  cout << s << "\n";
}
