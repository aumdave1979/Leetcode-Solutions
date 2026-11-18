#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        string ans="";
        int n=num;
        while(n>0){
            ans.push_back(n%2 + '0');
            n/=2;
        }
        int size = ans.size();
        for(int i=0;i<size;i++){
            if(ans[i]=='1'){
                ans[i]='0';
            }
            else{
                ans[i]='1';
            }
        }
        reverse(ans.begin(),ans.end());
        int numm=0;
        int times=0;
        for(int i=size-1;i>=0;i--){
            numm+= pow(2,times)*(ans[i]-'0');
            times++;
        }
        return numm;
    }
};