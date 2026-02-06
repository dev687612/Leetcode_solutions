class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // time complexity = O(n);
        //space complexity = O(n);
        int n = nums.size();

        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        int cnt = 1;

        for (auto it : mp) {

            if (cnt < it.second)
                return it.first;
        }
        return 0;
    }
};