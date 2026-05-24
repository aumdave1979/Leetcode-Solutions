#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int passwordStrength(string password) {
        vector<int> temp(256, 0);

        int ans = 0;

        for (int i = 0; i < password.size(); i++) {
            char s = password[i];

            if (temp[s] == 1) {
                continue;
            }
            temp[s] = 1;

            if (s >= 'a' && s <= 'z') {
                ans += 1;
            } else if (s >= 'A' && s <= 'Z') {
                ans += 2;
            } else if (s >= '0' && s <= '9') {
                ans += 3;
            } else if (s == '!' || s == '@' || s == '#' || s == '$') {
                ans += 5;
            }
        }
    return ans;
    }
};