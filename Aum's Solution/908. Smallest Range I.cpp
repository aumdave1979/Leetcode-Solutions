#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i : nums)  {
            maxi = max(maxi, i);
            mini = min(mini, i);
        }
        maxi-=k;
        mini+=k;
        if(maxi - mini < 0) return 0;
        return maxi-mini;    
    }
};
