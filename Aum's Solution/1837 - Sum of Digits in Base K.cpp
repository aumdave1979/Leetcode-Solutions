#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumBase(int n, int k) {
        string s="";
        int n1 = n;
        while(n1>0){
            int rem = n1%k;
            if(rem == 10){
                s.push_back('A');
            }
            else{
                s.push_back(rem+'0');
            }
            n1/=k;
        }
        int ans=0;
        int size = s.size();
        for(int i=0;i<size;i++){
            ans += s[i] -'0';
        }
        return ans;
    }
};