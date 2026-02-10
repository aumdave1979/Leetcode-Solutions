#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        int n = prices.size();
        for (int i=0; i<n; i++) {
            bool discountFound = false;
            for (int j = i+1; j<n;j++) {
                if (prices[j] <= prices[i]) {
                    ans.push_back(prices[i] - prices[j]);
                    discountFound = true;
                    break;
                }
            }
            if (!discountFound) {
                ans.push_back(prices[i]);
            }
        }
        return ans;
    }
};
