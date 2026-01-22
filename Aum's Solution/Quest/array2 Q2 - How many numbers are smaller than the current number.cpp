#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr = nums;
        vector<int> sol;
        sort(arr.begin(), arr.end());
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < arr.size(); j++){
                if(nums[i] == arr[j]){
                    sol.push_back(j);
                    break;
                }
            }
        }
        return sol;
    }
};