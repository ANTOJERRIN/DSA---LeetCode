class Solution {
public:
    long long countCommas(long long n) {
        long long t = 0;
        
        if (n >= 1000) {
            t += n - 999;
        }
        if (n >= 1000000) {
            t += n - 999999;
        }
        if (n >= 1000000000) {
            t += n - 999999999;
        }
        if (n >= 1000000000000LL) {
            t += n - 999999999999LL;
        }
        if (n >= 1000000000000000LL) {
            t += n - 999999999999999LL;
        }

        return t;
    }
};