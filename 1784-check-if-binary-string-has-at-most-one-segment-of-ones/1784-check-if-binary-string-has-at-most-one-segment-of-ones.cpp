class Solution {
public:
    // tc = O(n)
    // sc = O(1)
    bool checkOnesSegment(string s) {
        int n = s.length();

        for (int i = 1; i < n; i++) {
            if (s[i] == '1' && s[i - 1] == '0')
                return false;
        }
        return true;
    }
};