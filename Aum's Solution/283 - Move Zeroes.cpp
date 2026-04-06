#include<bits/stdc++.h>
using namespace std;

//Second Approch
    class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int j=-1;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    j=i;
                    break;
                }
            }
            if(j==-1) return;
            for(int i=j+1;i<nums.size();i++){
                if(nums[i]!=0){
                    swap(nums[j],nums[i]);
                    j++;
                }
            }

        }
    };

/* First approch
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p1=0;
        int p2=1;
        for(int i =0;i<nums.size()-1;i++){
            if(nums[p1]==0 && nums[p2]!=0){
                swap(nums[p2],nums[p1]);
                p1++;
                p2++;
            }
            else if(nums[p1]==0 && nums[p2]==0){
                p2++;
            }
            else if(nums[p1]!=0 && nums[p2]==0){
                p1++;
                p2++;
            }
            else if(nums[p1]!=0 && nums[p2]!=0){
                p1++;
                p2++;
            }
        }
    }
};
*/
