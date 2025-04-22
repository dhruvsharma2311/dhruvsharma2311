class Solution {
public:
    void fun(int i ,vector<int>& a , vector<int>& v, int n,            vector<vector<int>>& ans){
        if(i == n){
            ans.push_back(v);
            return;
        }
        v.push_back(a[i]);
        fun(i+1, a, v, n, ans);

        v.pop_back();
        fun(i+1, a, v, n, ans);

    }
    vector<vector<int>> subsets(vector<int>& a) {
        vector<vector<int>> ans;
        vector<int> v;
        int n = a.size();
        fun(0,a,v,n,ans);
        return ans;
    }
};