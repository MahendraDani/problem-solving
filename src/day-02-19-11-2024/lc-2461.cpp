#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isDistinct(vector<int>& v) {
        map<int, int> mp;
        for (int i = 0; i < v.size(); i++) {
            mp[v[i]]++;
        }

        for (auto x : mp) {
            if (x.second > 1) {
                return false;
            }
        }
        return true;
    }

    long long sumOfSubArr(vector<int>& v){
        long long sum = 0;
        for(auto x: v){
            sum+=x;
        }
        return sum;
    }

    vector<int> makeSubArr(vector<int>& v ,int start, int k){
        vector<int> sub;

        for(int i=start;i<start+k;i++){
            sub.push_back(v[i]);
        }
        return sub;
    }

    // Time : O(N*K)
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = 0;
        int n = nums.size();

        for(int i=0;i<=n-k;i++){
            vector<int> sub = makeSubArr(nums,i,k); // O(k)
            if(isDistinct(sub)){ // O(k)
                ans = max(ans,sumOfSubArr(sub)); // O(k)
            }
        }

        return ans;
    }

int main(){
  cout << "Pass inputs and call function\n";
  return 0;
}
