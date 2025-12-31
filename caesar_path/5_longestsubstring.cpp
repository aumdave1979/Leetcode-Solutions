class Solution {
public:
    string longestPalindrome(string s) {
        string s1="",s2="",sr;
        for(int i = 0 ; i < s.size() ; i++){
            s1="";
            for(int j = i ; j < s.size() ; j++){ 
                s1+=s[j];
                if(s1[0]==s1[s1.size()-1]){
                    sr = s1;
                    reverse(sr.begin(),sr.end());
                    if(s1==sr){
                        if(s1.size()>s2.size()) s2 = s1;
                    }
                }
            }
        }
        return s2;
    }
};