#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max_gap =0;
        int temp_gap =0;
        int j=0;
        for(int i=1;i<nums.size();i++){
            temp_gap = nums[i]-nums[j];
            if(temp_gap>=max_gap){
                max_gap = temp_gap;
            }
            j++;
        }
    return max_gap;
    }
};