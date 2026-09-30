#include<bits/stdc++.h>
using namespace std;

class Solution {
public: 
    int maxi(vector<int>&nums,int i){
        int greatest = INT_MIN;
        for(int j=0;j<=i;j++){
            if(nums[j]>greatest){
                greatest = nums[j];
            }
        }
        return greatest;
    }

    int mini(vector<int>&nums , int i){
        int lowest = INT_MAX;
        for(int j=i;j<nums.size();j++){
            if(nums[j]<lowest){
                lowest = nums[j];
            }
        }
        return lowest;
    }
    int firstStableIndex(vector<int>& nums, int k) {

        for(int i=0;i<nums.size();i++){
            int score  = maxi(nums,i) - mini(nums,i);
            if(score<=k){
                return i;
            }
        }
    return -1;
    }
};