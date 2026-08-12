#include<bits/stdc++.h>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
bool isBadVersion(int n);                    

class Solution {
public:
    int firstBadVersion(int n) {
        int ans;
        for(int i=1;i<=n;i++){
            if(isBadVersion(i)==true){
                return i;
            }
        }
    return 0;
    }
};