class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void solve(int start, vector<int>& candidates, int target) {

        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {

            // Skip duplicates
            if (i > start && candidates[i] == candidates[i - 1])
                continue;

            if (candidates[i] > target)
                break;

            temp.push_back(candidates[i]);

            // i+1 because each element can be used only once
            solve(i + 1, candidates, target - candidates[i]);

            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        solve(0, candidates, target);

        return ans;
    }
};