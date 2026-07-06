#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDigitRange(vector<int>& nums) {

        int maxRange = -1;
        int sum = 0;

        for(auto it:nums){

            int temp = it;
            int maxi = 0;
            int mini = 9;

            if(temp == 0){
                mini = 0;
                maxi = 0;
            }

            while(temp>0){
                int digit = temp%10;
                maxi = max(maxi,digit);
                mini = min(mini,digit);
                temp/=10;
            }
            int range = maxi-mini;

            if(range>maxRange){
            maxRange = range;
            sum = it;
            }
            else if(range == maxRange){
                sum+=it;
            }
        }
    return sum;
    }
};