#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long ls_digit;
        long reverse = 0;
        long orignal = x;
        while(x>0){
            ls_digit = x%10;
            x = x/10;
            reverse = (reverse*10)+ls_digit;
        }
        if(reverse == orignal){
            return true;
        }
        else{
            return false;
        }
    }
};