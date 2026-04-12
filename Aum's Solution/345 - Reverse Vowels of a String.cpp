#include<bits/stdc++.h>
using namespace std;

/* First Approch random timepass
class Solution {
public:
    string reverseVowels(string s) {
        vector<char> ch;
        
        for(int i=0;i<s.size();i++){
            char c = tolower(s[i]);
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                ch.push_back(s[i]);
            }
        }

        int k = ch.size() - 1;
        for(int i=0; i<s.size();i++){
            char c = tolower(s[i]);
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                s[i] = ch[k];
                k--;
            }
        }
        return s;
    }
};
*/