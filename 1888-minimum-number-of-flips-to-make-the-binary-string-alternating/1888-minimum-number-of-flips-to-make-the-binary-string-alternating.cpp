class Solution {
public:
    // tc = O(len)
    // sc = O(1)
    int minFlips(string s) {

        int n = s.length();

        // s += s;

        // string s1, s2;
        // for (int i = 0; i < 2 * n; i++) {
        //     s1 += (i % 2 == 0) ? '0' : '1';
        //     s2 += (i % 2 == 0) ? '1' : '0';
        // }

        // sliding window

        int res = INT_MAX;
        int flip1 = 0;
        int flip2 = 0;

        int i = 0;
        int j = 0;

        while (j < 2 * n) {

            char exceptedCharS1 = (j % 2 == 0) ? '1' : '0';
            char exceptedCharS2 = (j % 2 == 0) ? '0' : '1';

            if (s[j % n] != exceptedCharS1) {
                flip1++;
            }
            if (s[j % n] != exceptedCharS2) {
                flip2++;
            }

            if (j - i + 1 > n) {
                // shrink the window
                exceptedCharS1 = (i % 2 == 0) ? '1' : '0';
                exceptedCharS2 = (i % 2 == 0) ? '0' : '1';

                if (s[i % n] != exceptedCharS1) {
                    flip1--;
                }

                if (s[i % n] != exceptedCharS2) {
                    flip2--;
                }
                i++;
            }

            if (j - i + 1 == n) {
                res = min({res, flip1, flip2});
            }
            j++;
        }
        return res;
    }
};