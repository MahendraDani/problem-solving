// Date : 05.01.2025
// Chemistry - CP 31 (900)
#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define vi vector<int>
#define pi pair<int,int>
#define vll vector<long long>

using namespace std;

/*
 After removing k chars, can the string s be a palindrome?
 For a string of length l, to be a palindrome:
 if l=even:
 - all distinct chars should have freq >=2 and freq should be a even number

 else l=odd:
 - exactly one character should have freq==1
 - rest all elements should have freq >=2 and freq should be a even number

 types of elements in a string s:
 - freq ==1 => ones : the number of elements with freq ==1
 - freq >=2 and even => good : the number of elements that satisfy the condition
 - others (freq > 2 and odd) => bad

 if I can remove any k elements, I have to decided whichs to try to make a palindrome
 If a string is palindrome:
 l==even
 - ones=0, bad=0
*/
void solve(){
  int n,k;
  cin >> n >> k;

  string s;
  cin >> s;

  map<char,int> freq;
  for(auto ch:s){
    freq[ch]++;
  }

  int ones=0, good=0, bad=0;
  
  for(auto [x,y] : freq){
    if(y==1){
      ones++;
    }else if(y%2==0){
      good++;
    }else{
      bad++;
    }
  }

  if((n-k)%2==0){
    
  }else{
    cout << "ODD PALLIS\n";
  }


}

void solve2(){
  int n,k;
  cin >> n >> k;

  string s;
  cin >> s;

  vector<int> freq(26,0);

  for(auto ch:s){
    freq[int(ch -'a')]++;
  }
  
  sort(freq.begin(),freq.end());

  if((n-k)%2==0){
    for(auto &x:freq){
      if(k>0){
        if(x==1 || x%2!=0){
          x--;
          k--;
        }
      }
    }

    bool done = true;
    for(auto x:freq){
      if(x==1){
        done = false;
      }else if(x>2 && x%2!=0){
        done = false;
      }
    }

    cout << (done ? "YES" : "NO") << "\n";
  }else{
    int oneCnt=0;
    for(auto &x:freq){
      if(x==1){
        oneCnt++;
      }
    }

    if(k < oneCnt-1){
      cout << "NO\n";
      return;
    }

    k-=oneCnt+1;

    for(auto &x:freq){
      if(k>0){
        if(x%2!=0){
          x--;
          k--;
        }
      }
    }

    bool done = true;

    for(auto x:freq){
      if(x==1) continue;
      else if(x%2!=0){
        done = false;
        break;
      }
    }
    cout << (done ? "YES" : "NO") << "\n";
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    solve2();
  }
  return 0;
}
