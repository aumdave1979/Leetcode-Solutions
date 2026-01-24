#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<int> a;
        for(int i=1;i<=size;i++){
            a.push_back(i);
        }
        for(int i=0;i<size;i++){
            int index = nums[i]-1;
            if(a[index]>0){
                a[index] = 0;
            }
        }
        a.erase(remove(a.begin(), a.end(), 0), a.end());
    return a;
    }
};