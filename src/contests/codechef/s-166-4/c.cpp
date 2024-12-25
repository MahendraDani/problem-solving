#include <iostream>
#include <map>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    map<int, int> pen;
    
    for(int i = 0; i < n; i++) {
        int day;
        cin >> day;
        pen[day] = max(pen[day], i + 1);
    }
    
    int ans = 0;
    for(auto& [day, penalty] : pen) {
        ans += penalty;
    }
    
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}