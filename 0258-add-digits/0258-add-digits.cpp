class Solution {
public:
    int sumDigits(int n) {
        if (n == 0) {
            return 0;
        }

        int rem = n % 10;

        return rem + sumDigits(n / 10);
    }
    int addDigits(int num) {

        if (num < 10) {
            return num;
        }

        int newSum = sumDigits(num);

        return addDigits(newSum);
    }
};