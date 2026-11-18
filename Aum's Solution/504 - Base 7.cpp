#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        if(num==0){
            return "0";
        }
        string ans="";
        int n;
        if(num<0){
            n= abs(num);
        }
        else{
            n = num;
        }
        while(n>0){
            ans.push_back(n%7 + '0');
            n/=7;
        }
        if(num<0){
            ans.push_back('-');
        }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};