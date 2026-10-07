#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int num2 = num;
        while (num2 > 0) {
            int ls_digit = num2 % 10;

            if (ls_digit != 0 && num % ls_digit == 0) {
                count++;
            }
            num2 /= 10;
        }
        return count;
    }
};