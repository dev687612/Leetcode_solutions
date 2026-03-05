class Solution {
public:
    // tc = O(n)
    // sc = O(1)
    int minOperations(string s) {

        int n = s.length();

        int startWith0 = 0;
        int startWith1 = 0;

        for (int i = 0; i < n; i++) {
            char excepted0 = (i % 2 == 0) ? '0' : '1';
            if (s[i] != excepted0)
                startWith0++;

            char excepted1 = (i % 2 == 0) ? '1' : '0';
            if (s[i] != excepted1)
                startWith1++;
        }

        return min(startWith0, startWith1);
    }
};