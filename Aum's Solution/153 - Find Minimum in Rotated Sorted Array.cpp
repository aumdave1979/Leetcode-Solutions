#include<bits/stdc++.h>
using namespace std;

//nlogn algo;

class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[0];
    }
};