#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        stack<string>st;
        vector<int>ans(n);
        vector<int>time(1);
        for(auto it : logs){
            int d1 = it.find(":");
            int d2 = it.find_last_of(":");
            int idx = stoi(it.substr(0,d1));
            int val = stoi(it.substr(d2+1));
            
            string cond = it.substr(d1+1,d1+2);
            if(cond[0] == 's'){
                st.push(it);
            } 
            else {
                if(val>=time.size()) time.resize(val+1);
                string up = st.top();
                st.pop();   
                int count = 0;
                int d2p = up.find_last_of(":");
                int valp = stoi(up.substr(d2p+1));
                for(int x = val ; x >= valp ; x--){
                    if(time[x] == 0){
                        time[x] = 1;
                        count++;
                    }
                }
                ans[idx] += count;
            }
        }
        return ans;
    }
};