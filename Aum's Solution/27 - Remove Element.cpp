#include<bits/stdc++.h>
using namespace std;
//just to learn the branching concept
//agin
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
    return k;
    }
};
