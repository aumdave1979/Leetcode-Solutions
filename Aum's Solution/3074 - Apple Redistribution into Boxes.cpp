#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total_apple = 0;
        for(int i=0;i<apple.size();i++){
            total_apple += apple[i];
        }
        int count = 0;
        sort(capacity.begin(),capacity.end());
        int fullfilled = 0;
        int size=capacity.size() - 1;
        while(fullfilled<total_apple){
            fullfilled += capacity[size];
            size--;
            count++;
        }
        return count;
    }
};