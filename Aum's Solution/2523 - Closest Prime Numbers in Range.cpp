#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n){
        if(n<2) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right) {
        vector<int>nums;
        for(int i=left;i<=right;i++){
            if(isPrime(i)){
                nums.push_back(i);
            }
        }
        if(nums.size()<2){
            return {-1,-1};
        }
        vector<int> ans={-1,-1};
        int diff=INT_MAX;
        int j=1;
        while(j<nums.size()){
            if(nums[j]-nums[j-1] < diff){
                diff = nums[j]-nums[j-1];
                ans.clear();
                ans.push_back(nums[j-1]);
                ans.push_back(nums[j]);
                j++;
            }
            else{
                j++;
            }
        }
    return ans;
    }
};