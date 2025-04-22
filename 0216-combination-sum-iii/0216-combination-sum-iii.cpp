class Solution {
public:
    void backtrack(int start, int k, int n, vector<int>& comb, vector<vector<int>>& res) {
        if (k == 0 && n == 0) {
            res.push_back(comb);
            return;
        }
        if (k == 0 || n <= 0) return;

        for (int i = start; i <= 9; ++i) {
            comb.push_back(i);
            backtrack(i + 1, k - 1, n - i, comb, res);  // i + 1 because each number is used at most once
            comb.pop_back(); // backtrack
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> comb;
        backtrack(1, k, n, comb, res);
        return res;
    }
};