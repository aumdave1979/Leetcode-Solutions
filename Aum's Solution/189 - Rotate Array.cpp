#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> dummy;
        int n = nums.size();
        k=k%n;

        for (int i=n-k;i<n;i++) {
            dummy.push_back(nums[i]);
        }

        for (int i=n-1;i>=k;i--) {
            nums[i] = nums[i-k];
        }
        for (int i=0;i<k;i++) {
            nums[i] = dummy[i];
        }
    }
};


/*

*/