#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;
        int n = arr.size();
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        unordered_map<int,int> freq2;
        for(auto it:freq){
            freq2[it.second]++;
        }
        for(auto it:freq2){
            if(it.second>1){
                return false;
            }
        }
        return true;
    }
};