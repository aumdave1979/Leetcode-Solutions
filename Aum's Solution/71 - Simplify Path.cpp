#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    string simplifyPath(string path) {
        vector<string> parts;
        vector<string> st;
        string temp = "";
        for(int i = 0; i < path.size(); i++){
            if(path[i] == '/'){
                parts.push_back(temp);
                temp = "";
            }
            else{
                temp += path[i];
            }
        }
        parts.push_back(temp);
        int i = 0;
        while(i < parts.size()){
            if(parts[i] == "" || parts[i] == "."){
                i++;
            }
            else if(parts[i] == ".."){
                if(!st.empty()){
                    st.pop_back();
                }
                i++;  
            }
            else{
                st.push_back(parts[i]);
                i++;  
            }
        }
        string ans = "/";
        for(int i = 0; i < st.size(); i++){
            ans += st[i];
            if(i !=st.size()-1){
                ans += "/";
            }
        }
        return ans;
    }
};
