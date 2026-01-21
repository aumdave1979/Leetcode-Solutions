#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = (int)height.size()-1;
        int area =0;

        while(left<right){
            int temp_area =0;
            int temp = right - left ;
            int mini = min(height[left],height[right]);
            temp_area = mini*temp;
            area = max(area,temp_area);

            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
    return area;
    }
};