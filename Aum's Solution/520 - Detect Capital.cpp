#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper = 0;
        int n = word.size();
        int b = word[0];
        for(int i=0;i<word.size();i++){
            int a = word[i];
            if(a>=65 && a<=90){
                upper++;
            }
        }
        if(upper == n || upper == 0){
            return true;
        }
        else if(upper == 1 && b>=65 && b<=90){
            return true;
        }
    return false;
    }
};