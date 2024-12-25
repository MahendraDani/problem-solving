#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int N = 45;
int ans[N];

int main(){
  ans[0] = 0;
  ans[1] = 1;
  
  int p = 1;
  for(int i=2;i<N;i++){
    if(i <=10){
      ans[i] += ans[i-1] + 1;
    }else{
      if(i % (int)pow(10,p)==0){
          p++;
        // divisible by pow(10,i)
        ans[i]+=ans[i-1] + 1;
      }else{
        ans[i] = ans[i-1];
      }
    }
  }

  for(int i=0;i<N;i++){
    cout << i << " "  << ans[i] << "\n";
  }
  return 0;
}
