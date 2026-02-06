class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());

        int n = nums.size();

        int i = 0, j = 0;

        int len = 1;

        while (j < n) {

            int minEle = nums[i];
            int maxEle = nums[j];
            
            while (i < j && maxEle > (long long)k * minEle) {
                i++;
                minEle = nums[i];
            }
            len = max(len, j - i + 1);
            j++;
        }
        return n - len;
    }
};