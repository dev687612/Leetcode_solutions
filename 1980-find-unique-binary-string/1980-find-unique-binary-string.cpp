class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {

        // tc = O(n)
        // sc = O(1)
        int n = nums.size();
        string ans = "";

        for (int i = 0; i < n; i++) {
            // diagonal element and flip them
            if (nums[i][i] == '0') {
                ans += '1';
            }
            if (nums[i][i] == '1') {
                ans += '0';
            }
        }
        return ans;
    }
};