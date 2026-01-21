#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2);
        int i = 0;
        while (i < n) {
            int correctIndex = nums[i] - 1;

            if (nums[i] != nums[correctIndex]) {
                swap(nums[i], nums[correctIndex]);
            } else {
                i++;
            }
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] != i + 1) {
                ans[0] = nums[i];
                ans[1] = i+1;     
                break;
            }
        }
        return ans;
    }
};