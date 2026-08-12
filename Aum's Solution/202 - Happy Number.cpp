#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int digit_sum(int n){
        int sum =0;
        while(n>0){
        int rem = n%10;
        sum+= rem*rem;
        n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        for(int i=0;i<20;i++){
            n = digit_sum(n);
            if(n==1) return true;
        }
    return false;
    }
};