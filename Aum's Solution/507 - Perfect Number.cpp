#include<bits/stdc++.h>
using namespace std;

/* full timepass approch beating 100% 😂 as there are only 5 perfect number which exist and fits in 4 byte just check them

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 6 || num == 28 || num == 496 || num == 8128 ||
            num == 33550336) {
            return true;
        }
    return false;
    }
};
*/


class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int> div;
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                div.push_back(i);
            }
        }
        int sum=0;
        for(int i=0;i<div.size();i++){
            sum+=div[i];
        }
    if(sum == num) return true;
    return false;
    }
};
