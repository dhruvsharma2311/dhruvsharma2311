class Solution {
public:
    void fun(int i, vector<int>& a, int tar, vector<int>& ds, vector<vector<int>>& ans) {
        if (tar == 0) {
            ans.push_back(ds);
            return;
        }

        for (int j = i; j < a.size(); ++j) {
            // Skip duplicates at the same tree level
            if (j > i && a[j] == a[j - 1]) continue;

            if (a[j] > tar) break; // No need to proceed if current number > remaining target

            ds.push_back(a[j]);
            fun(j + 1, a, tar - a[j], ds, ans);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& a, int tar) {
        sort(a.begin(), a.end());
        vector<vector<int>> ans;
        vector<int> ds;

        fun(0, a, tar, ds, ans);
        return ans;
    }
};