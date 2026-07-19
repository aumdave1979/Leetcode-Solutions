#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int ptr = s.size();
        string t;
        string pending;
        string ans;
        for(int i =0;i<ptr;i++){
            if(s[i]==y){
                t.push_back(s[i]);
            }
            else{
                pending.push_back(s[i]);
            }
        }
    ans = t+pending;
    return ans;
    }
};