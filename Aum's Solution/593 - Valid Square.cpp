#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {

        int p1p2 = (p1[0]-p2[0])*(p1[0]-p2[0]) + (p1[1]-p2[1])*(p1[1]-p2[1]);
        int p1p3 = (p1[0]-p3[0])*(p1[0]-p3[0]) + (p1[1]-p3[1])*(p1[1]-p3[1]);
        int p1p4 = (p1[0]-p4[0])*(p1[0]-p4[0]) + (p1[1]-p4[1])*(p1[1]-p4[1]);
        int p2p3 = (p2[0]-p3[0])*(p2[0]-p3[0]) + (p2[1]-p3[1])*(p2[1]-p3[1]);
        int p2p4 = (p2[0]-p4[0])*(p2[0]-p4[0]) + (p2[1]-p4[1])*(p2[1]-p4[1]);
        int p3p4 = (p3[0]-p4[0])*(p3[0]-p4[0]) + (p3[1]-p4[1])*(p3[1]-p4[1]);

        vector<int> nums = {p1p2,p1p3,p1p4,p2p3,p2p4,p3p4};
        sort(nums.begin(),nums.end());
        int a = nums[0];


        for(int i=0;i<4;i++){
            if(nums[i]!=a){
                return false;
            }
        }
        for(int i=4;i<nums.size();i++){
            if(nums[i]==a) return false;    
            if(nums[i] != 2*a){
                return false;
            }
        }
        return true;
    }
};