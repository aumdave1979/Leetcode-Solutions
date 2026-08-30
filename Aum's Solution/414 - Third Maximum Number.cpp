#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {

        long long First_high = LLONG_MIN;
        long long Second_high = LLONG_MIN;
        long long Third_high = LLONG_MIN;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] > First_high) {
                Third_high = Second_high;
                Second_high = First_high;
                First_high = nums[i];
            }
            else if(nums[i] > Second_high && nums[i] < First_high) {
                Third_high = Second_high;
                Second_high = nums[i];
            }
            else if(nums[i] > Third_high && nums[i] < Second_high) {
                Third_high = nums[i];
            }
        }
        if(Third_high == LLONG_MIN) {
            return First_high;
        }
        return Third_high;
    }
};