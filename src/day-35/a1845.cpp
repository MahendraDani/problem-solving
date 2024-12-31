// Date : 31.12.2024
// Forbidden Integer - CP 31 (800)
// 10:52 AM - 11:26 AM => WA1
// 11:26 AM - 11:31 AM => WA1
// 11:31 AM - 11:35 AM => WA2
// 11:35 AM - 12:17 PM => WA2
// Reading editorial Now

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*
 if(k>=n):
 {1,2,.,x,.(n-1),n,.....k}
  then, n = (n-1) + 1 => but "1" !=x, 
  if(x==1) => n = (n-2) + 2;
  else => n = (n-1) + 1;

  if(k<n)
  {1,2,3,....(k-1), k,..... (n-1),n}
*/

void solve(){
  int n, k, x;
  cin >> n >> k >> x;

  if(k>=n){
    if(x==1){
      // 10 12 1 => {8,2}
      cout << "YES\n";
      cout << 2 << "\n";
      cout << (n-2) << " "  << 2 << "\n";
    }else{
      // 10 12 3 => {9,1}
      cout << "YES\n";
      cout << 2 << "\n";
      cout << (n-1) << " " << 1 << "\n";
    }
  }else{
    if(x==1){
      if(k>1){
        // 7 3 1 => NO
        if(n%k==0){
          // 16 4 1 => {4,4,4,4,}
          cout << "YES\n";
          cout << n/k << "\n";
          for(int i=0;i<n/k;i++){
            cout << k  << " ";
          }
          cout << "\n";
        }else if(n%k==1){
          // 8 7 1
          if(k-1 == 1){
            // 5 2 1 => VERIFIED
            cout << "NO\n";
          }else{
            cout << "YES\n";
            cout << n/(k-1) + 1 << "\n";
            for(int i=0;i<n/(k-1);i++){
              cout << k-1 << " ";
            }
            cout << n%(k-1) << "\n";
          }
        }else{
          // 7 5 1
          cout << "YES\n";
          cout << n/k + 1 << "\n";
          for(int i=0;i<n/k;i++){
            cout << k << " ";
          }
          cout << n%k << "\n";
        }
      }else{
        cout << "NO\n";
      }
    }else{
      if(k>1){
        // 7 4 3 => {1,1,1,....7 times}
        // 10 3 2 => VERIFIED
        cout << "YES\n";
        cout << n << "\n";
        for(int i=0;i<n;i++){
          cout << 1 << " " ;
        }
        cout << "\n";
      }else{
        // 7 1 3
        cout << "NO\n";
      }
    }
  }
}

// void solve2(){
//   int n,k,x;
//   cin >> n >> k >> x;

//   if(x!=1){
//     if(k!=1){
//       // print 1 n times
//       // 10 2 3
//       cout << "YES\n";
//       cout << n << "\n";
//       for(int i=0;i<n;i++){
//         cout << k << " ";
//       }
//       cout << "\n";
//     }else if(x==1){
//       if(k>=n){
//         // 10 12 1
//         cout << "YES\n";
//         cout << 2 << "\n";
//         cout << (n-2) << 2 << "\n";
//       }else{
//         // 10 3 1
//         if(k==1){
//           // 
//         }
//         if(n%k==1){

//         }else{
//           // 10 2 1
//           if(k>=2)
//         }
//       }
//     }
//     // else{
//     //   if(k>=n){
//     //     // 10 12 1 => (n-2) 2
//     //     if(k>=2){
//     //       cout << "YES\n";
//     //       cout << 2 << "\n";
//     //       cout << (n-2) << 2 << "\n";
//     //     }else{
//     //       // 10 1 1
//     //       cout << "NO\n";
//     //     }
//     //   }else{
//     //     // 10 2 1
//     //     if(k>=2){

//     //     }
//     //   }
//     // }
//   }
// }

void solve3(){
  int n,k,x;
  cin >> n >> k >> x;

  if(x!=1){
    // use just 1
    cout << "YES\n";
    cout << n << "\n";
    for(int i=0;i<n;i++){
      cout << 1 << " ";
    }
    cout << "\n";
  }else if(x==1){
    // 10 1 1
    // 10 2 1
    // 10 12 1
    if(k==1){
      cout << "NO\n";
    }else if(k>=2){
      if(k>=n){
        // 10 12 1
        cout << "YES\n";
        cout << 2 << "\n";
        cout << (n-2) << 2 << "\n";
      }else{
        if(n%k==0){
          // 10 2 1
          cout << "YES\n";
          cout << n/k << "\n";
          for(int i=0;i<n/k;i++){
            cout << k << " ";
          }
          cout << "\n";
        }else{
          if(k==2){
            // 5 2 1
            cout << "NO\n";
          }else{
            if(n%k==0){
              // 10 2 1
              cout << "YES\n";
              cout << n/k << "\n";
              for(int i=0;i<n/k;i++){
                cout << k << " ";
              }
              cout << "\n";
            }else if(n%k==1){
              
              if(k-1==1){
                // 10 2 1
                cout << "NO\n";
              }else{
                // 10 3 1 => {2,2,2,2,2}
                // 10 9 1
                if(n%k==1){
                  // cout << "MY BAD\n";
                  // cout << "YES\n";
                  // cout << 2 << "\n";
                  // cout << k << " " << n-k << "\n";
                  // use => k-1
                  if(n%(k-1)==0){
                    // cout << "THERE\n";
                    cout << "YES\n";
                    cout << n/(k-1) << "\n";
                    for(int i=0;i<n/(k-1);i++){
                      cout << k-1 << " ";
                    }
                    cout << "\n";
                  }else{
                    // cout << "ERERER\n";
                    cout << "YES\n";
                    cout << n/(k-1) + 1 << "\n";
                    for(int i=0;i<n/(k-1);i++){
                      cout << (k-1) << " ";
                    }
                    cout << n%(k-1) << "\n";
                  }
                }
              }
            }else{
              // 10 4 2
              cout << "YES\n";
              cout << n/k + 1 << "\n";
              for(int i=0;i<n/k;i++){
                cout << k << " ";
              }
              cout << n%k << "\n";
            }
          }

        }
      }
    }
  }
}

void editorial(){
  int n,k,x;
  cin >> n >> k >> x;

  if(x!=1){
    cout << "YES\n";
    cout << n << "\n";
    for(int i=0;i<n;i++){
      cout << 1 << " ";
    }
    cout << "\n";
  }else if(k==1 || (k==2 && n%2==1)){
    cout << "NO\n";
  }else{
    cout << "YES\n";
    cout << n/2 << "\n";
    cout << (n%2==1? 3 : 2) << " ";
    for(int i=0;i<n/2 -1;i++){
      cout << 2 << " ";
    }
    cout << "\n";
  }
}

int main(){
  int t;
  cin >> t;

  while(t--){
    editorial();
  }
  return 0;
}
