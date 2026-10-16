#include<bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    bool isPrime(int n){
        if(n==1) return 0;
        if(n%2==0){
            return (n==2);
        }
        for(int i=3;i*i<=n;i+=2){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }

    int countPrimes(int n) {
        int count = 0;
        for(int i=0;i<n;i++){
            if(isPrime(i)){
                count++;
            }
        }
        return count;
    }
};
*/


class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        while (n>2) {
            int num = n-1;   
            bool isPrime = true;
            for (int i=2; i*i<=num;i++) {
                if (num%i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                count++;
            }
            n--;
        }
        return count;
    }
};