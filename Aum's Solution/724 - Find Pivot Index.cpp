#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int left =0;
        int right =0;
        for(int i=1;i<n;i++){
            right+=nums[i];
        }
        int i=0;
        while(i<n){
            if(right==left) return i;
            else if(i==n-1) break;
            else{
                left+=nums[i];
                right-=nums[i+1];
                i++;
            }
        }
    return -1;
    }
};