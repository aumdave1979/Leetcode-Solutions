#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRabbits(vector<int>& answers) {
        map<int, int> mpp;
        for (int i = 0; i < answers.size(); i++) {
            mpp[answers[i]]++;
        }
        int sum = 0;

        for (auto it : mpp) {
            int num = it.first;
            int freq = it.second;
            int groupSize = num + 1;
            int groups = (freq + groupSize - 1) / groupSize;
            sum += groups * groupSize;
        }
        return sum;
        }
};