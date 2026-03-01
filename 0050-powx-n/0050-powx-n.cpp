class Solution {
public:
    double help(double x, long long n) {
        // base case
        if (n == 0)
            return 1;

        double half = help(x, n / 2);

        if (n % 2 == 0) {
            return half * half;
        }
        return half * half * x;
    }
    double myPow(double x, int n) {

        long long temp = n;

        // handle negation
        if (temp < 0) {
            x = 1 / x;
            temp = -temp;
        }
        return help(x, temp);
    }
};