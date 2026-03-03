class Solution {
public:

// tc = O(n)
//sc = O(n)
    char findKthBit(int n, int k) {
        int len = pow(2, n) - 1;

        // base case
        if(n == 1) return '0';

        if (k < ceil(len / 2.0)) {
            return findKthBit(n - 1, k);
        } else if (k == ceil(len / 2.0)) {
            return '1';
        }

        else {
            char ch = findKthBit(n - 1, len - (k - 1)); // handle reverse
            return (ch == '0') ? '1' : '0';
        }
    }
};