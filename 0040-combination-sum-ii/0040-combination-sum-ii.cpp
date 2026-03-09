class Solution {
public:

//tc = O(2^n)
//sc = O(n)
    void help(int index, vector<int>& candidates, int target, vector<int>& path,
              vector<vector<int>>& ans) {
        // base case
        if (target == 0) {
            ans.push_back(path);
            return;
        }

        for (int i = index; i < candidates.size(); i++) {
            // skip duplicate
            if (i > index && candidates[i] == candidates[i - 1])
                continue;

            if (candidates[i] > target)
                break;

            path.push_back(candidates[i]);
            help(i + 1, candidates, target - candidates[i], path, ans);

            path.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;

        vector<int> path;

        int index = 0;

        sort(candidates.begin(), candidates.end());

        help(index, candidates, target, path, ans);
        return ans;
    }
};