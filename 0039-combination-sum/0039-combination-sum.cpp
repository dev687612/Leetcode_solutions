class Solution {
public:
//tc = O(2^t * k) , k = size of combination
//sc = O(t)
    void help(int index, vector<int>& candidates, int target, vector<int>& path,
              vector<vector<int>>& ans) {
        // base case
        if (target == 0) {
            ans.push_back(path);
            return;
        }

        if (index >= candidates.size() || target < 0) {
            return;
        }

        // pick
        path.push_back(candidates[index]);
        help(index, candidates, target - candidates[index], path, ans);

        // backtrack
        path.pop_back();

        // not pick
        help(index + 1, candidates, target, path, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;

        vector<int> path;

        int index = 0;

        help(index, candidates, target, path, ans);

        return ans;
    }
};