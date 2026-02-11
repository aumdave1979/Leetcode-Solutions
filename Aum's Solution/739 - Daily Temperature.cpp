#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n,0);
        stack<int> st;
        int i =0 ;
        while(i<n){
            while(!st.empty() && temperatures[i]>temperatures[st.top()]){
                int pre = st.top();
                st.pop();
                ans[pre] = i - pre;
            }
        st.push(i);
        i++;
        }
    return ans;
    }
};