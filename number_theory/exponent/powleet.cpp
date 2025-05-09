class Solution {
    public:
        double myPow(double a, int b) {
            long long exp = b; // ✅ safely handles INT_MIN
    
            if (exp < 0) {
                a = 1 / a;
                exp = -exp;
            }
    
            double result = 1;
            while (exp > 0) {
                if (exp % 2 == 1) result *= a;
                a *= a;
                exp /= 2;
            }
    
            return result;
        }
    };
   
/*
Input: x = 2.00000, n = 10
Output: 1024.00000
Example 2:

Input: x = 2.10000, n = 3
Output: 9.26100
Example 3:

Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25
 

Constraints:

-100.0 < x < 100.0
-2^31 <= n <= 2^31-1
n is an integer.
Either x is not zero or n > 0.
-10^4 <= x^n <= 10^4 */