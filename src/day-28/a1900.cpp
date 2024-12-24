// Date : 24.12.2024
// Cover in Water

#include <iostream>
#include <string>

using namespace std;

// If there exists this sequence "..." then all cells can be filled in exactly 2 (1) type operations
// If there's no sequence, then the answer is the number of "." cells
// how should I implement it? By thinking all the cases


void attempt2(){
  int n;
  cin >> n;

  string s;
  cin >> s;

  string pattern = "...";
  if(s.find(pattern)!=-1){
    cout << "2\n";
    return;
  }

  int cnt = 0;
  for(auto ch : s){
    if(ch=='.') cnt++;
  }

  cout << cnt << "\n";
}

void solve(){
  int n;
  cin >> n;

  string s;
  cin >> s;

  char last = s[0];
  int exists = (last == '.' ? 1 : 0);
  int cnt = exists;
  for(int i=1;i<n;i++){
    char curr = s[i];
    if(last==curr){
      if(curr == '.'){
        exists++;
        cnt++;
      }else{
        exists = 0;
      }
    }else{
      if(last=='#' && curr=='.'){
        exists = 1;
        cnt++;
      }else if(last=='.' && curr=='#'){
        exists = 0;
      }
    }
    if(exists == 3){
      cout << "2\n";
      return;
    }
    last = curr;
  }
  cout << cnt << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--) {
    attempt2();
  }
  return 0;
}
