#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>ans;
        for(int i=1;i<=n;i++){
            ans.push_back(i);
        }
        int index=0;
        while(ans.size()>1){
            index = (index + k - 1) % ans.size();
            ans.erase(ans.begin() + index);   
        }
    return ans[0];
    }
};