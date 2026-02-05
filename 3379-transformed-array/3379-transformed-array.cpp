class Solution {
public:
    // time complexity = O(n)
    // space = O(n)

    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> res(n, 0);

        for (int i = 0; i < n; i++) {
            // normalize the value within 0....n-1 range if the value is greater
            // than the size

            int shift = nums[i] % n;

            int newInd = (i + shift) % n;

            if (newInd < 0) {
                newInd += n;
            }
            res[i] = nums[newInd];
        }
        return res;
    }
};