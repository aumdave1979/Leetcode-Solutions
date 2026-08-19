#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1) return 1;
        n-=1;
        int ans=1;
        int i=2;
        while(n>0){
            if(n>=i){
                ans++;
                n-=i;
                i++;
            }else{
                break;
            }
        }
    return ans;
    }
};