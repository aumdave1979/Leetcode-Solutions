#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0;
        int ele=0;
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(count ==0){
                ele = nums[i];
                count =1;
            }
            else if(nums[i]==ele){
                count++;
            }
            else{
                count--;
            }
        }
    return ele;
    }
};