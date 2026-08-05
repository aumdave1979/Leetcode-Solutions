#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows >= s.size()){
            return s;
        }

        vector<string> seq(numRows);
        int currRow = 0;    
        bool incr = true;

        for(int i=0;i<s.size();i++){
            seq[currRow] += s[i];
            if(currRow == 0){
                incr = true;
            }
            else if(currRow == numRows-1){
                incr = false;
            }
            if(incr){
                currRow++;
            }
            else{
                currRow--;
            }
        }

        string ans;
        for(int i=0;i<seq.size();i++){
            ans+= seq[i];
        }
    return ans;
    }
};