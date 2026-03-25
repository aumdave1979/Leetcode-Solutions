#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";

        for(int i = 0; i < strs[0].size(); i++){
            char ch = strs[0][i];
            bool same = true;

            for(int j = 0; j < strs.size(); j++){
                if(i >= strs[j].size() || strs[j][i] != ch){
                    same = false;
                    break;
                }
            }

            if(same){
                ans += ch;   // directly add to answer
            } else {
                break;
            }
        }

        return ans;
    }
};