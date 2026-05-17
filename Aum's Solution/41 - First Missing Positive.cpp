#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> st;

        for(auto it:nums){
            if(it>0){
            st.insert(it);
            }
        }
        int ans = 1;
        while(1){
            if(st.find(ans) == st.end()){
                return ans;
            }
            ans++;
        }
    }
};