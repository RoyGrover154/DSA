class Solution {
public:
    int divide(int dividend, int divisor) {

        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

       
        bool sign = (dividend >= 0) == (divisor >= 0);

        
        long n = abs((long)dividend);
        long d = abs((long)divisor);

        long quotient = 0;

        while (n >= d) {
            int cnt = 0;
            while (n >= (d << (cnt + 1))) {
                cnt++;
            }

            quotient += (1L << cnt);
            n -= (d << cnt);
        }

        
        return sign ? quotient : -quotient;
    }
};
