#include<bits/stdc++.h>
using namespace std;



//Unoptimized solution using the map ds 
/*
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size = nums.size();
        map<int,int> mpp;
        vector<int> more;
        for(int i=0;i<size;i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second > size/3){
                more.push_back(it.first);
            }
        }
    return more;
    }
};
*/
