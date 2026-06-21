#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstDigit(long long num) {
        while (num>=10) {
            num/=10;
        }
        return num;
    }
    long long countValidSubarrays(vector<int>& nums, int x) {
        int n = nums.size();
        long long ans = 0;

        for (int i=0;i<n;i++) {
            long long sum = 0;

            for (int j=i;j<n;j++) {
                sum += nums[j];

                int last=sum % 10;
                int first=firstDigit(sum);

                if (first == x && last == x) {
                    ans++;
                }
            }
        }
        return ans;
    }
};