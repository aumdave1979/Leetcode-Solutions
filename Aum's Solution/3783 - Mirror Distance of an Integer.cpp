#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverses(int n){
        string s = to_string(n);
        reverse(s.begin(),s.end());
        int p = stoi(s);
        return p;
    }
    int mirrorDistance(int n) {
        return abs(n - reverses(n));
    }
};