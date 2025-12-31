class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()<2) return ;
        if(nums.size()==2) {
            swap(nums[1],nums[0]);
            return;        
        }
        for( int i=nums.size()-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                int index=i;
                for(int k=i+1;k<nums.size();k++){
                    if(nums[k]-nums[i-1]<nums[index]-nums[i-1]&&nums[k]-nums[i-1]>=1){
                        index = k;
                    }
                }
                swap(nums[index],nums[i-1]);
                sort(nums.begin()+i,nums.end());
                return;
            }
        }
        reverse(nums.begin(),nums.end());
        return;
    }
};