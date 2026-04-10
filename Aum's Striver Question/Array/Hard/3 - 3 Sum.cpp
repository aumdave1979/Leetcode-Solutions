#include<bits/stdc++.h>
using namespace std;

// little better with TC - n^2log(n) approch
/*
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        for(int i=0;i<nums.size();i++){
            set<int> hash;
            for(int j=i+1;j<nums.size();j++){
                int val = -(nums[i]+nums[j]);
                if(hash.find(val)!=hash.end()){
                    vector<int> temp = {nums[i],nums[j],val};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hash.insert(nums[j]);
            }
        }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
    }
};
*/


/* Brtue force with TC - n^3log(n) approch
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st; 
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k] == 0){
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);            
                    }
                }
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};
*/
