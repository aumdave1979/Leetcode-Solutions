#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int product_digit(int p){
        int product = 1;
        while(p>0){
            int temp = p%10;
            product*=temp;
            p/=10;
        }
    return product;
    }

    int digit_sum(int k){
        int sum = 0;
        while(k>0){
            int temp = k%10;
            sum+=temp;
            k/=10;
        }
    return sum;
    }

    bool checkDivisibility(int n) {
        int final_sum = digit_sum(n) + product_digit(n);
        if(n%final_sum == 0) return true;
    return false;
    }
};