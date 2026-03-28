#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i = s.size() - 1;  
        int j = g.size() - 1;   
        int count = 0;

        sort(s.begin(), s.end());
        sort(g.begin(), g.end());
        while(i >= 0 && j >= 0){
            if(g[j] > s[i]){
                j--;
            }
            else if(s[i] >= g[j]){
                count++;
                i--;
                j--;
            }
        }
        return count;
    }
};