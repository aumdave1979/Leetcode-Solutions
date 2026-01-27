#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
        string replicate = "";
        for(int i = 0; i < s.size(); i++){
            int p = s[i];
            if( (p >= 48 && p <= 57) || (p >= 65 && p <= 90) || (p >= 97 && p <= 122) ){
                if(p >= 65 && p <= 90){
                    replicate += (p + 32);  
                }
                else{       
                    replicate += p;
                }
            }
        }
        string rev = "";
        for(int i = replicate.size() - 1; i >= 0; i--){
            rev += replicate[i];
        }
        if(replicate == rev) return true;
        return false;
    }
};
