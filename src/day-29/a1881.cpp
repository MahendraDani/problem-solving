// Date : 24.12.2024
// Don't Try to Count - CP-31 Sheet (800)

#include <iostream>
#include <string>

using namespace std;

void solve(){
  int n,m;
  cin >> n >> m;
  
  string x,s;
  cin >> x >> s;

  if(n>m){
    if(x.find(s)!=-1){
      cout << 0 << "\n";
    }else{
      cout << -1 << "\n";
    }
    return;
  }
  int ops = 0;
  while(x.size() <= s.size()){
    x+=x;
    ops++;
  }

  if(x.find(s) == -1){
    cout << -1 << "\n";
  }else{
    cout << ops << "\n";
  }
}

void optSolve(){
  int n,m;
  cin >> n >> m;

  string x,s;
  cin >> x >> s;
  
  for(int i=0;i<6;i++){
    if(x.find(s)!=-1){
      cout << i << "\n";
      return;
    }
    x+=x;
  }
  cout << -1 << "\n";
}

int main(){
  int t;
  cin >> t;
  while(t--){
    optSolve(); 
  }
  return 0;
}
