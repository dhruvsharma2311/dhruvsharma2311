class Solution {
public:
    void fun(int i, vector<int>& a, int tar, vector<int>& ds, vector<vector<int>>& ans, int n){
        if(i == n){
            if(tar == 0){
                ans.push_back(ds);
            }
            return ;
        }
        if(a[i]<= tar){
            ds.push_back(a[i]);
            tar -= a[i];
            fun(i,a,tar,ds,ans,n);
            tar += a[i];
            ds.pop_back();
        }
        fun(i+1,a,tar,ds,ans,n);
    }
    vector<vector<int>> combinationSum(vector<int>& a, int tar) {
        int n = a.size();
        vector<vector<int>> ans;
        vector<int> ds;
        fun(0,a,tar,ds,ans,n);
        return ans;
    }
};