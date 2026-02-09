#include<bits/stdc++.h>
using namespace std;

int main(){
     vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
     int maxi = INT32_MIN;

     for(int i=0;i<nums.size();i++){
      for(int j=i;j<nums.size();j++){
         int sum = 0;
         for(int k=i;k<=j;k++){
            sum+=nums[k];
            maxi = max(maxi,sum);
         }    
      }
     }
     cout << maxi << endl;
}
