#include<bits/stdc++.h>
using namespace std;

//Two pointer approch 

class Solution {
public:
    bool isVowel(char c){
        c = tolower(c);
        return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
    }

    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;
        while(i < j){
            if(!isVowel(s[i])){
                i++;
            }
            else if(!isVowel(s[j])){
                j--;
            }
            else{
               swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};


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