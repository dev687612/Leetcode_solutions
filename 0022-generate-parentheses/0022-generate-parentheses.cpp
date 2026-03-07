class Solution {
public:
    // tc= O(Cn*n) , C = Catalan number
    // Sc = O(Cn) , C = Catalan number
    void help(int open, int close, int n, string curr, vector<string>& ans) {
        // base case
        if (open == n && close == n) {
            ans.push_back(curr);
            return;
        }

        if (open < n) {
            help(open + 1, close, n, curr + '(', ans);
        }
        if (close < open) {
            help(open, close + 1, n, curr + ')', ans);
        }
        return;
    }
    vector<string> generateParenthesis(int n) {

        vector<string> ans;

        int open = 0;
        int close = 0;
        string curr = "";

        help(open, close, n, curr, ans);
        return ans;
    }
};