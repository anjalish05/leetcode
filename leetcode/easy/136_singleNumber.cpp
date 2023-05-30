#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0; 

        if(n == 1) {
            ans = nums[0];
        }
        int sum = 0, ssum = 0; 
        for(int i = 0; i < n; i++){
            sum += nums[i]; 
        }
        set<int> s; 

        sort(nums.begin(), nums.end()); 
        for(int i = 0; i < n; i++) {
            s.insert(nums[i]); 
        }
        int ns = s.size(); 
        vector<int> v; 
        for(auto i:s){
            v.push_back(i); 
        }
        for(int i = 0; i < ns; i++){
            ssum += v[i]; 
        }
        ans = ssum*2 - sum; 

        return ans; 
    }
};