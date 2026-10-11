#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num ==0 || num==1){
            return 0;
        }
        int sum = 0;
        for(int i=1;i*i<=num;i++){
            if(num%i == 0){
                sum+=i;
                sum+= num/i;
            }
        }
        sum -= num;
    if(num == sum) return true;
    return false;
    }
};