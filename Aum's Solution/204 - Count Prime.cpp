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