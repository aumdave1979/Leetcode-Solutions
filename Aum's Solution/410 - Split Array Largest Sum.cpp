#include<bits/stdc++.h>
using namespace std;
//problem almost same as the book allocation problem of striver sheet

class Solution {
public:

    int sum(vector<int>&arr){
        int sum = 0;
        for(int i=0;i<arr.size();i++){
            sum+= arr[i];
        }
        return sum;
    }
    int CountSubArray(vector<int> &arr, int maxSum){
        int subarray = 1;
        long long currSum = 0;
        for(int i = 0; i < arr.size(); i++){
            if(currSum+arr[i] <= maxSum){
                currSum += arr[i];
            }
            else{
                subarray++;
                currSum = arr[i];
            }
        }
        return subarray;
    }

    int splitArray(vector<int>& nums, int k) {

        int low = *max_element(nums.begin(), nums.end());
        int high = sum(nums);
        while(low <= high){
            int mid = low + (high - low) / 2;
            int subarrays = CountSubArray(nums, mid);
            if(subarrays > k){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};