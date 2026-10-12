#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int dayOfYear(string date) {
        int year = 0;

        for (int i=0; i<4; i++) {
            year = year * 10 + (date[i]-'0');
        }
        bool leap = false;
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            leap = true;
        }

        int month = (date[5]-'0') * 10 + (date[6] - '0');
        int day = (date[8]-'0') * 10 + (date[9] - '0');

        int monthDays[] = {31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31};
        if (leap) {
            monthDays[1] = 29;
        }
        int total = day;
        for (int i=0;i<month-1;i++) {
            total += monthDays[i];
        }
        return total;
    }
};
