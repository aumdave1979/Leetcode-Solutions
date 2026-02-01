#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int c=0,m;
       m=*max_element(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++){
        if(nums[i]==m){
            c=i;
            break;
        }
       }
       return c;
    }
};