#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool count(int p){
        int countt = 0;
        while(p>0){
            countt++;
            p/=10;
        }
        if(countt%2==0){
            return true;
        }
    return false;
    }

    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            if(count(nums[i])){
                ans++;
            }
        }
    return ans;
    }
};